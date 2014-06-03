/*
** codes.h for  in /home/eax/dev/readnfccc
** 
** Made by eax
** Login   <soules_k@epitech.net>
** 
** Started on  Tue Jun  3 19:24:23 2014 eax
** Last update Tue Jun  3 20:55:37 2014 eax
*/

#ifndef _CODES_H_
#define _CODES_H_

#include <stdint.h>

typedef struct
{
  uint16_t	code;
  char		*s;
} t_codes;

char	*codeToStr(t_codes *codes, uint16_t code);

#endif
