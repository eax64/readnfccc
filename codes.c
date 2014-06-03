/*
** codes.c for  in /home/eax/dev/readnfccc
** 
** Made by eax
** Login   <soules_k@epitech.net>
** 
** Started on  Tue Jun  3 19:38:24 2014 eax
** Last update Tue Jun  3 20:36:23 2014 eax
*/

#include <stdlib.h>
#include <stdint.h>
#include "codes.h"

char		*codeToStr(t_codes *codes, uint16_t code)
{
  size_t	i;

  for (i = 0 ; codes[i].s ; i++)
    if (codes[i].code == code)
      return (codes[i].s);
  return ("Unknown");
}

t_codes g_currency[] =
  {
    {
      .code = 8,
      .s = "Lek"
    },
    {
      .code = 12,
      .s = "Algerian Dinar"
    },
    {
      .code = 32,
      .s = "Argentine Peso"
    },
    {
      .code = 36,
      .s = "Australian Dollar"
    },
    {
      .code = 44,
      .s = "Bahamian Dollar"
    },
    {
      .code = 48,
      .s = "Bahraini Dinar"
    },
    {
      .code = 50,
      .s = "Taka"
    },
    {
      .code = 51,
      .s = "Armenian Dram"
    },
    {
      .code = 52,
      .s = "Barbados Dollar"
    },
    {
      .code = 60,
      .s = "Bermudian Dollar"
    },
    {
      .code = 64,
      .s = "Ngultrum"
    },
    {
      .code = 68,
      .s = "Boliviano"
    },
    {
      .code = 72,
      .s = "Pula"
    },
    {
      .code = 84,
      .s = "Belize Dollar"
    },
    {
      .code = 90,
      .s = "Solomon Islands Dollar"
    },
    {
      .code = 96,
      .s = "Brunei Dollar"
    },
    {
      .code = 104,
      .s = "Kyat"
    },
    {
      .code = 108,
      .s = "Burundi Franc"
    },
    {
      .code = 116,
      .s = "Riel"
    },
    {
      .code = 124,
      .s = "Canadian Dollar"
    },
    {
      .code = 132,
      .s = "Cape Verde Escudo"
    },
    {
      .code = 136,
      .s = "Cayman Islands Dollar"
    },
    {
      .code = 144,
      .s = "Sri Lanka Rupee"
    },
    {
      .code = 152,
      .s = "Chilean Peso"
    },
    {
      .code = 156,
      .s = "Yuan Renminbi"
    },
    {
      .code = 170,
      .s = "Colombian Peso"
    },
    {
      .code = 174,
      .s = "Comoro Franc"
    },
    {
      .code = 188,
      .s = "Costa Rican Colon"
    },
    {
      .code = 191,
      .s = "Croatian Kuna"
    },
    {
      .code = 192,
      .s = "Cuban Peso"
    },
    {
      .code = 203,
      .s = "Czech Koruna"
    },
    {
      .code = 208,
      .s = "Danish Krone"
    },
    {
      .code = 214,
      .s = "Dominican Peso"
    },
    {
      .code = 222,
      .s = "El Salvador Colon"
    },
    {
      .code = 230,
      .s = "Ethiopian Birr"
    },
    {
      .code = 232,
      .s = "Nakfa"
    },
    {
      .code = 233,
      .s = "Kroon"
    },
    {
      .code = 238,
      .s = "Falkland Island Pound"
    },
    {
      .code = 242,
      .s = "Fiji Dollar"
    },
    {
      .code = 262,
      .s = "Djibouti Franc"
    },
    {
      .code = 270,
      .s = "Dalasi"
    },
    {
      .code = 292,
      .s = "Gibraltar Pound"
    },
    {
      .code = 320,
      .s = "Quetzal"
    },
    {
      .code = 324,
      .s = "Guinea Franc"
    },
    {
      .code = 328,
      .s = "Guyana Dollar"
    },
    {
      .code = 332,
      .s = "Gourde"
    },
    {
      .code = 340,
      .s = "Lempira"
    },
    {
      .code = 344,
      .s = "Hong Kong Dollar"
    },
    {
      .code = 348,
      .s = "Forint"
    },
    {
      .code = 352,
      .s = "Iceland Krona"
    },
    {
      .code = 356,
      .s = "Indian Rupee"
    },
    {
      .code = 360,
      .s = "Rupiah"
    },
    {
      .code = 364,
      .s = "Iranian Rial"
    },
    {
      .code = 368,
      .s = "Iraqi Dinar"
    },
    {
      .code = 376,
      .s = "New Israeli Sheqel"
    },
    {
      .code = 388,
      .s = "Jamaican Dollar"
    },
    {
      .code = 392,
      .s = "Yen"
    },
    {
      .code = 398,
      .s = "Tenge"
    },
    {
      .code = 400,
      .s = "Jordanian Dinar"
    },
    {
      .code = 404,
      .s = "Kenyan Shilling"
    },
    {
      .code = 408,
      .s = "North Korean Won"
    },
    {
      .code = 410,
      .s = "Won"
    },
    {
      .code = 414,
      .s = "Kuwaiti Dinar"
    },
    {
      .code = 417,
      .s = "Som"
    },
    {
      .code = 418,
      .s = "Kip"
    },
    {
      .code = 422,
      .s = "Lebanese Pound"
    },
    {
      .code = 426,
      .s = "Loti"
    },
    {
      .code = 428,
      .s = "Latvian Lats"
    },
    {
      .code = 430,
      .s = "Liberian Dollar"
    },
    {
      .code = 434,
      .s = "Libyan Dinar"
    },
    {
      .code = 440,
      .s = "Lithuanian Litas"
    },
    {
      .code = 446,
      .s = "Pataca"
    },
    {
      .code = 454,
      .s = "Kwacha"
    },
    {
      .code = 458,
      .s = "Malaysian Ringgit"
    },
    {
      .code = 462,
      .s = "Rufiyaa"
    },
    {
      .code = 478,
      .s = "Ouguiya"
    },
    {
      .code = 480,
      .s = "Mauritius Rupee"
    },
    {
      .code = 484,
      .s = "Mexican Peso"
    },
    {
      .code = 496,
      .s = "Tugrik"
    },
    {
      .code = 498,
      .s = "Moldovan Leu"
    },
    {
      .code = 504,
      .s = "Moroccan Dirham"
    },
    {
      .code = 512,
      .s = "Rial Omani"
    },
    {
      .code = 516,
      .s = "Namibia Dollar"
    },
    {
      .code = 524,
      .s = "Nepalese Rupee"
    },
    {
      .code = 532,
      .s = "Netherlands Antillian Guilder"
    },
    {
      .code = 533,
      .s = "Aruban Guilder"
    },
    {
      .code = 548,
      .s = "Vatu"
    },
    {
      .code = 554,
      .s = "New Zealand Dollar"
    },
    {
      .code = 558,
      .s = "Cordoba Oro"
    },
    {
      .code = 566,
      .s = "Naira"
    },
    {
      .code = 578,
      .s = "Norwegian Krone"
    },
    {
      .code = 586,
      .s = "Pakistan Rupee"
    },
    {
      .code = 590,
      .s = "Balboa"
    },
    {
      .code = 598,
      .s = "Kina"
    },
    {
      .code = 600,
      .s = "Guarani"
    },
    {
      .code = 604,
      .s = "Nuevo Sol"
    },
    {
      .code = 608,
      .s = "Philippine Peso"
    },
    {
      .code = 624,
      .s = "Guinea-Bissau Peso"
    },
    {
      .code = 634,
      .s = "Qatari Rial"
    },
    {
      .code = 643,
      .s = "Russian Ruble"
    },
    {
      .code = 646,
      .s = "Rwanda Franc"
    },
    {
      .code = 654,
      .s = "Saint Helena Pound"
    },
    {
      .code = 678,
      .s = "Dobra"
    },
    {
      .code = 682,
      .s = "Saudi Riyal"
    },
    {
      .code = 690,
      .s = "Seychelles Rupee"
    },
    {
      .code = 694,
      .s = "Leone"
    },
    {
      .code = 702,
      .s = "Singapore Dollar"
    },
    {
      .code = 704,
      .s = "Dong"
    },
    {
      .code = 706,
      .s = "Somali Shilling"
    },
    {
      .code = 710,
      .s = "Rand"
    },
    {
      .code = 748,
      .s = "Lilangeni"
    },
    {
      .code = 752,
      .s = "Swedish Krona"
    },
    {
      .code = 756,
      .s = "Swiss Franc"
    },
    {
      .code = 760,
      .s = "Syrian Pound"
    },
    {
      .code = 764,
      .s = "Baht"
    },
    {
      .code = 776,
      .s = "Pa\'anga"
    },
    {
      .code = 780,
      .s = "Trinidata and Tobago Dollar"
    },
    {
      .code = 784,
      .s = "UAE Dirham"
    },
    {
      .code = 788,
      .s = "Tunisian Dinar"
    },
    {
      .code = 800,
      .s = "Uganda Shilling"
    },
    {
      .code = 807,
      .s = "Denar"
    },
    {
      .code = 818,
      .s = "Egyptian Pound"
    },
    {
      .code = 826,
      .s = "Pound Sterling"
    },
    {
      .code = 834,
      .s = "Tanzanian Shilling"
    },
    {
      .code = 840,
      .s = "US Dollar"
    },
    {
      .code = 858,
      .s = "Peso Uruguayo"
    },
    {
      .code = 860,
      .s = "Uzbekistan Sum"
    },
    {
      .code = 882,
      .s = "Tala"
    },
    {
      .code = 886,
      .s = "Yemeni Rial"
    },
    {
      .code = 894,
      .s = "Zambian Kwacha"
    },
    {
      .code = 901,
      .s = "New Taiwan Dollar"
    },
    {
      .code = 931,
      .s = "Peso Convertible "
    },
    {
      .code = 932,
      .s = "Zimbabwe Dollar"
    },
    {
      .code = 934,
      .s = "Manat"
    },
    {
      .code = 936,
      .s = "Cedi"
    },
    {
      .code = 937,
      .s = "Bolivar Fuerte"
    },
    {
      .code = 938,
      .s = "Sudanese Pound"
    },
    {
      .code = 940,
      .s = "Uruguay Peso en Unidades Indexadas"
    },
    {
      .code = 941,
      .s = "Serbian Dinar"
    },
    {
      .code = 943,
      .s = "Metical"
    },
    {
      .code = 944,
      .s = "Azerbaijanian Manat"
    },
    {
      .code = 946,
      .s = "New Leu"
    },
    {
      .code = 947,
      .s = "WIR Euro"
    },
    {
      .code = 948,
      .s = "WIR Franc"
    },
    {
      .code = 949,
      .s = "Turkish Lira"
    },
    {
      .code = 950,
      .s = "CFA Franc BEAC"
    },
    {
      .code = 951,
      .s = "East Caribbean Dollar"
    },
    {
      .code = 952,
      .s = "CFA Franc BCEAO"
    },
    {
      .code = 953,
      .s = "CFP Franc"
    },
    {
      .code = 955,
      .s = "Bond Markets Units European Composite Unit (EURCO)"
    },
    {
      .code = 956,
      .s = "European Monetary Unit (E.M.U.-6)"
    },
    {
      .code = 957,
      .s = "European Unit of Account 9 (E.U.A.-9)"
    },
    {
      .code = 958,
      .s = "European Unit of Account 17 (E.U.A.-17)"
    },
    {
      .code = 959,
      .s = "Gold"
    },
    {
      .code = 960,
      .s = "SDR"
    },
    {
      .code = 961,
      .s = "Silver"
    },
    {
      .code = 962,
      .s = "Platinum"
    },
    {
      .code = 963,
      .s = "Codes specifically reserved for testing purposes"
    },
    {
      .code = 964,
      .s = "Palladium"
    },
    {
      .code = 968,
      .s = "Surinam Dollar"
    },
    {
      .code = 969,
      .s = "Malagasy Ariary"
    },
    {
      .code = 970,
      .s = "Unidad de Valor real"
    },
    {
      .code = 971,
      .s = "Afghani"
    },
    {
      .code = 972,
      .s = "Somoni"
    },
    {
      .code = 973,
      .s = "Kwanza"
    },
    {
      .code = 974,
      .s = "Belarussian Ruble"
    },
    {
      .code = 975,
      .s = "Bulgarian Lev"
    },
    {
      .code = 976,
      .s = "Franc Congolais"
    },
    {
      .code = 977,
      .s = "Convertible Marks"
    },
    {
      .code = 978,
      .s = "Euro"
    },
    {
      .code = 979,
      .s = "Mexican Unidad de Inversion (UDI)"
    },
    {
      .code = 980,
      .s = "Hryvnia"
    },
    {
      .code = 981,
      .s = "Lari"
    },
    {
      .code = 984,
      .s = "Mvdol"
    },
    {
      .code = 985,
      .s = "Zloty"
    },
    {
      .code = 986,
      .s = "Brazilian Real"
    },
    {
      .code = 990,
      .s = "Unidades de fomento"
    },
    {
      .code = 997,
      .s = "US Dollar (Next Day)"
    },
    {
      .code = 998,
      .s = "US Dollar (Same Day)"
    },
    {
      .code = 999,
      .s = "Unregistered currency"
    },
    {
      .code = 0,
      .s = NULL
    }
  };


t_codes g_country[] =
  {
    {
      .code = 4,
      .s = "Afghanistan"
    },
    {
      .code = 8,
      .s = "Albania, People's Socialist Republic of"
    },
    {
      .code = 10,
      .s = "Antarctica (the territory South of 60 deg S)"
    },
    {
      .code = 12,
      .s = "Algeria, People's Democratic Republic of"
    },
    {
      .code = 16,
      .s = "American Samoa"
    },
    {
      .code = 20,
      .s = "Andorra, Principality of"
    },
    {
      .code = 24,
      .s = "Angola, Republic of"
    },
    {
      .code = 28,
      .s = "Antigua and Barbuda"
    },
    {
      .code = 31,
      .s = "Azerbaijan, Republic of"
    },
    {
      .code = 32,
      .s = "Argentina, Argentine Republic"
    },
    {
      .code = 36,
      .s = "Australia, Commonwealth of"
    },
    {
      .code = 40,
      .s = "Austria, Republic of"
    },
    {
      .code = 44,
      .s = "Bahamas, Commonwealth of the"
    },
    {
      .code = 48,
      .s = "Bahrain, Kingdom of"
    },
    {
      .code = 50,
      .s = "Bangladesh, People's Republic of"
    },
    {
      .code = 51,
      .s = "Armenia"
    },
    {
      .code = 52,
      .s = "Barbados"
    },
    {
      .code = 56,
      .s = "Belgium, Kingdom of"
    },
    {
      .code = 60,
      .s = "Bermuda"
    },
    {
      .code = 64,
      .s = "Bhutan, Kingdom of"
    },
    {
      .code = 68,
      .s = "Bolivia, Republic of"
    },
    {
      .code = 70,
      .s = "Bosnia and Herzegovina"
    },
    {
      .code = 72,
      .s = "Botswana, Republic of"
    },
    {
      .code = 74,
      .s = "Bouvet Island (Bouvetoya)"
    },
    {
      .code = 76,
      .s = "Brazil, Federative Republic of"
    },
    {
      .code = 84,
      .s = "Belize"
    },
    {
      .code = 86,
      .s = "British Indian Ocean Territory (Chagos Archipelago)"
    },
    {
      .code = 90,
      .s = "Solomon Islands"
    },
    {
      .code = 92,
      .s = "British Virgin Islands"
    },
    {
      .code = 96,
      .s = "Brunei Darussalam"
    },
    {
      .code = 100,
      .s = "Bulgaria, People's Republic of"
    },
    {
      .code = 104,
      .s = "Myanmar"
    },
    {
      .code = 108,
      .s = "Burundi, Republic of"
    },
    {
      .code = 112,
      .s = "Belarus"
    },
    {
      .code = 116,
      .s = "Cambodia, Kingdom of"
    },
    {
      .code = 120,
      .s = "Cameroon, United Republic of"
    },
    {
      .code = 124,
      .s = "Canada"
    },
    {
      .code = 132,
      .s = "Cape Verde, Republic of"
    },
    {
      .code = 136,
      .s = "Cayman Islands"
    },
    {
      .code = 140,
      .s = "Central African Republic"
    },
    {
      .code = 144,
      .s = "Sri Lanka, Democratic Socialist Republic of"
    },
    {
      .code = 148,
      .s = "Chad, Republic of"
    },
    {
      .code = 152,
      .s = "Chile, Republic of"
    },
    {
      .code = 156,
      .s = "China, People's Republic of"
    },
    {
      .code = 158,
      .s = "Taiwan, Province of China"
    },
    {
      .code = 162,
      .s = "Christmas Island"
    },
    {
      .code = 166,
      .s = "Cocos (Keeling) Islands"
    },
    {
      .code = 170,
      .s = "Colombia, Republic of"
    },
    {
      .code = 174,
      .s = "Comoros, Union of the"
    },
    {
      .code = 175,
      .s = "Mayotte"
    },
    {
      .code = 178,
      .s = "Congo, People's Republic of"
    },
    {
      .code = 180,
      .s = "Congo, Democratic Republic of"
    },
    {
      .code = 184,
      .s = "Cook Islands"
    },
    {
      .code = 188,
      .s = "Costa Rica, Republic of"
    },
    {
      .code = 191,
      .s = "Hrvatska (Croatia)"
    },
    {
      .code = 192,
      .s = "Cuba, Republic of"
    },
    {
      .code = 196,
      .s = "Cyprus, Republic of"
    },
    {
      .code = 203,
      .s = "Czech Republic"
    },
    {
      .code = 204,
      .s = "Benin, People's Republic of"
    },
    {
      .code = 208,
      .s = "Denmark, Kingdom of"
    },
    {
      .code = 212,
      .s = "Dominica, Commonwealth of"
    },
    {
      .code = 214,
      .s = "Dominican Republic"
    },
    {
      .code = 218,
      .s = "Ecuador, Republic of"
    },
    {
      .code = 222,
      .s = "El Salvador, Republic of"
    },
    {
      .code = 226,
      .s = "Equatorial Guinea, Republic of"
    },
    {
      .code = 231,
      .s = "Ethiopia"
    },
    {
      .code = 232,
      .s = "Eritrea"
    },
    {
      .code = 233,
      .s = "Estonia"
    },
    {
      .code = 234,
      .s = "Faeroe Islands"
    },
    {
      .code = 238,
      .s = "Falkland Islands (Malvinas)"
    },
    {
      .code = 239,
      .s = "South Georgia and the South Sandwich Islands"
    },
    {
      .code = 242,
      .s = "Fiji, Republic of the Fiji Islands"
    },
    {
      .code = 246,
      .s = "Finland, Republic of"
    },
    {
      .code = 250,
      .s = "France, French Republic"
    },
    {
      .code = 254,
      .s = "French Guiana"
    },
    {
      .code = 258,
      .s = "French Polynesia"
    },
    {
      .code = 260,
      .s = "French Southern Territories"
    },
    {
      .code = 262,
      .s = "Djibouti, Republic of"
    },
    {
      .code = 266,
      .s = "Gabon, Gabonese Republic"
    },
    {
      .code = 268,
      .s = "Georgia"
    },
    {
      .code = 270,
      .s = "Gambia, Republic of the"
    },
    {
      .code = 275,
      .s = "Palestinian Territory, Occupied"
    },
    {
      .code = 276,
      .s = "Germany"
    },
    {
      .code = 288,
      .s = "Ghana, Republic of"
    },
    {
      .code = 292,
      .s = "Gibraltar"
    },
    {
      .code = 296,
      .s = "Kiribati, Republic of"
    },
    {
      .code = 300,
      .s = "Greece, Hellenic Republic"
    },
    {
      .code = 304,
      .s = "Greenland"
    },
    {
      .code = 308,
      .s = "Grenada"
    },
    {
      .code = 312,
      .s = "Guadaloupe"
    },
    {
      .code = 316,
      .s = "Guam"
    },
    {
      .code = 320,
      .s = "Guatemala, Republic of"
    },
    {
      .code = 324,
      .s = "Guinea, Revolutionary People's Rep'c of"
    },
    {
      .code = 328,
      .s = "Guyana, Republic of"
    },
    {
      .code = 332,
      .s = "Haiti, Republic of"
    },
    {
      .code = 334,
      .s = "Heard and McDonald Islands"
    },
    {
      .code = 336,
      .s = "Holy See (Vatican City State)"
    },
    {
      .code = 340,
      .s = "Honduras, Republic of"
    },
    {
      .code = 344,
      .s = "Hong Kong, Special Administrative Region of China"
    },
    {
      .code = 348,
      .s = "Hungary, Hungarian People's Republic"
    },
    {
      .code = 352,
      .s = "Iceland, Republic of"
    },
    {
      .code = 356,
      .s = "India, Republic of"
    },
    {
      .code = 360,
      .s = "Indonesia, Republic of"
    },
    {
      .code = 364,
      .s = "Iran, Islamic Republic of"
    },
    {
      .code = 368,
      .s = "Iraq, Republic of"
    },
    {
      .code = 372,
      .s = "Ireland"
    },
    {
      .code = 376,
      .s = "Israel, State of"
    },
    {
      .code = 380,
      .s = "Italy, Italian Republic"
    },
    {
      .code = 384,
      .s = "Cote D'Ivoire, Ivory Coast, Republic of the"
    },
    {
      .code = 388,
      .s = "Jamaica"
    },
    {
      .code = 392,
      .s = "Japan"
    },
    {
      .code = 398,
      .s = "Kazakhstan, Republic of"
    },
    {
      .code = 400,
      .s = "Jordan, Hashemite Kingdom of"
    },
    {
      .code = 404,
      .s = "Kenya, Republic of"
    },
    {
      .code = 408,
      .s = "Korea, Democratic People's Republic of"
    },
    {
      .code = 410,
      .s = "Korea, Republic of"
    },
    {
      .code = 414,
      .s = "Kuwait, State of"
    },
    {
      .code = 417,
      .s = "Kyrgyz Republic"
    },
    {
      .code = 418,
      .s = "Lao People's Democratic Republic"
    },
    {
      .code = 422,
      .s = "Lebanon, Lebanese Republic"
    },
    {
      .code = 426,
      .s = "Lesotho, Kingdom of"
    },
    {
      .code = 428,
      .s = "Latvia"
    },
    {
      .code = 430,
      .s = "Liberia, Republic of"
    },
    {
      .code = 434,
      .s = "Libyan Arab Jamahiriya"
    },
    {
      .code = 438,
      .s = "Liechtenstein, Principality of"
    },
    {
      .code = 440,
      .s = "Lithuania"
    },
    {
      .code = 442,
      .s = "Luxembourg, Grand Duchy of"
    },
    {
      .code = 446,
      .s = "Macao, Special Administrative Region of China"
    },
    {
      .code = 450,
      .s = "Madagascar, Republic of"
    },
    {
      .code = 454,
      .s = "Malawi, Republic of"
    },
    {
      .code = 458,
      .s = "Malaysia"
    },
    {
      .code = 462,
      .s = "Maldives, Republic of"
    },
    {
      .code = 466,
      .s = "Mali, Republic of"
    },
    {
      .code = 470,
      .s = "Malta, Republic of"
    },
    {
      .code = 474,
      .s = "Martinique"
    },
    {
      .code = 478,
      .s = "Mauritania, Islamic Republic of"
    },
    {
      .code = 480,
      .s = "Mauritius"
    },
    {
      .code = 484,
      .s = "Mexico, United Mexican States"
    },
    {
      .code = 492,
      .s = "Monaco, Principality of"
    },
    {
      .code = 496,
      .s = "Mongolia, Mongolian People's Republic"
    },
    {
      .code = 498,
      .s = "Moldova, Republic of"
    },
    {
      .code = 500,
      .s = "Montserrat"
    },
    {
      .code = 504,
      .s = "Morocco, Kingdom of"
    },
    {
      .code = 508,
      .s = "Mozambique, People's Republic of"
    },
    {
      .code = 512,
      .s = "Oman, Sultanate of"
    },
    {
      .code = 516,
      .s = "Namibia"
    },
    {
      .code = 520,
      .s = "Nauru, Republic of"
    },
    {
      .code = 524,
      .s = "Nepal, Kingdom of"
    },
    {
      .code = 528,
      .s = "Netherlands, Kingdom of the"
    },
    {
      .code = 530,
      .s = "Netherlands Antilles"
    },
    {
      .code = 533,
      .s = "Aruba"
    },
    {
      .code = 540,
      .s = "New Caledonia"
    },
    {
      .code = 548,
      .s = "Vanuatu"
    },
    {
      .code = 554,
      .s = "New Zealand"
    },
    {
      .code = 558,
      .s = "Nicaragua, Republic of"
    },
    {
      .code = 562,
      .s = "Niger, Republic of the"
    },
    {
      .code = 566,
      .s = "Nigeria, Federal Republic of"
    },
    {
      .code = 570,
      .s = "Niue, Republic of"
    },
    {
      .code = 574,
      .s = "Norfolk Island"
    },
    {
      .code = 578,
      .s = "Norway, Kingdom of"
    },
    {
      .code = 580,
      .s = "Northern Mariana Islands"
    },
    {
      .code = 581,
      .s = "United States Minor Outlying Islands"
    },
    {
      .code = 583,
      .s = "Micronesia, Federated States of"
    },
    {
      .code = 584,
      .s = "Marshall Islands"
    },
    {
      .code = 585,
      .s = "Palau"
    },
    {
      .code = 586,
      .s = "Pakistan, Islamic Republic of"
    },
    {
      .code = 591,
      .s = "Panama, Republic of"
    },
    {
      .code = 598,
      .s = "Papua New Guinea"
    },
    {
      .code = 600,
      .s = "Paraguay, Republic of"
    },
    {
      .code = 604,
      .s = "Peru, Republic of"
    },
    {
      .code = 608,
      .s = "Philippines, Republic of the"
    },
    {
      .code = 612,
      .s = "Pitcairn Island"
    },
    {
      .code = 616,
      .s = "Poland, Polish People's Republic"
    },
    {
      .code = 620,
      .s = "Portugal, Portuguese Republic"
    },
    {
      .code = 624,
      .s = "Guinea-Bissau, Republic of"
    },
    {
      .code = 626,
      .s = "Timor-Leste, Democratic Republic of"
    },
    {
      .code = 630,
      .s = "Puerto Rico"
    },
    {
      .code = 634,
      .s = "Qatar, State of"
    },
    {
      .code = 638,
      .s = "Reunion"
    },
    {
      .code = 642,
      .s = "Romania, Socialist Republic of"
    },
    {
      .code = 643,
      .s = "Russian Federation"
    },
    {
      .code = 646,
      .s = "Rwanda, Rwandese Republic"
    },
    {
      .code = 654,
      .s = "St. Helena"
    },
    {
      .code = 659,
      .s = "St. Kitts and Nevis"
    },
    {
      .code = 660,
      .s = "Anguilla"
    },
    {
      .code = 662,
      .s = "St. Lucia"
    },
    {
      .code = 666,
      .s = "St. Pierre and Miquelon"
    },
    {
      .code = 670,
      .s = "St. Vincent and the Grenadines"
    },
    {
      .code = 674,
      .s = "San Marino, Republic of"
    },
    {
      .code = 678,
      .s = "Sao Tome and Principe, Democratic Republic of"
    },
    {
      .code = 682,
      .s = "Saudi Arabia, Kingdom of"
    },
    {
      .code = 686,
      .s = "Senegal, Republic of"
    },
    {
      .code = 690,
      .s = "Seychelles, Republic of"
    },
    {
      .code = 694,
      .s = "Sierra Leone, Republic of"
    },
    {
      .code = 702,
      .s = "Singapore, Republic of"
    },
    {
      .code = 703,
      .s = "Slovakia (Slovak Republic)"
    },
    {
      .code = 704,
      .s = "Viet Nam, Socialist Republic of"
    },
    {
      .code = 705,
      .s = "Slovenia"
    },
    {
      .code = 706,
      .s = "Somalia, Somali Republic"
    },
    {
      .code = 710,
      .s = "South Africa, Republic of"
    },
    {
      .code = 716,
      .s = "Zimbabwe"
    },
    {
      .code = 724,
      .s = "Spain, Spanish State"
    },
    {
      .code = 732,
      .s = "Western Sahara"
    },
    {
      .code = 736,
      .s = "Sudan, Democratic Republic of the"
    },
    {
      .code = 740,
      .s = "Suriname, Republic of"
    },
    {
      .code = 744,
      .s = "Svalbard & Jan Mayen Islands"
    },
    {
      .code = 748,
      .s = "Swaziland, Kingdom of"
    },
    {
      .code = 752,
      .s = "Sweden, Kingdom of"
    },
    {
      .code = 756,
      .s = "Switzerland, Swiss Confederation"
    },
    {
      .code = 760,
      .s = "Syrian Arab Republic"
    },
    {
      .code = 762,
      .s = "Tajikistan"
    },
    {
      .code = 764,
      .s = "Thailand, Kingdom of"
    },
    {
      .code = 768,
      .s = "Togo, Togolese Republic"
    },
    {
      .code = 772,
      .s = "Tokelau (Tokelau Islands)"
    },
    {
      .code = 776,
      .s = "Tonga, Kingdom of"
    },
    {
      .code = 780,
      .s = "Trinidad and Tobago, Republic of"
    },
    {
      .code = 784,
      .s = "United Arab Emirates"
    },
    {
      .code = 788,
      .s = "Tunisia, Republic of"
    },
    {
      .code = 792,
      .s = "Turkey, Republic of"
    },
    {
      .code = 795,
      .s = "Turkmenistan"
    },
    {
      .code = 796,
      .s = "Turks and Caicos Islands"
    },
    {
      .code = 798,
      .s = "Tuvalu"
    },
    {
      .code = 800,
      .s = "Uganda, Republic of"
    },
    {
      .code = 804,
      .s = "Ukraine"
    },
    {
      .code = 807,
      .s = "Macedonia, the former Yugoslav Republic of"
    },
    {
      .code = 818,
      .s = "Egypt, Arab Republic of"
    },
    {
      .code = 826,
      .s = "United Kingdom of Great Britain & N. Ireland"
    },
    {
      .code = 834,
      .s = "Tanzania, United Republic of"
    },
    {
      .code = 840,
      .s = "United States of America"
    },
    {
      .code = 850,
      .s = "US Virgin Islands"
    },
    {
      .code = 854,
      .s = "Burkina Faso"
    },
    {
      .code = 858,
      .s = "Uruguay, Eastern Republic of"
    },
    {
      .code = 860,
      .s = "Uzbekistan"
    },
    {
      .code = 862,
      .s = "Venezuela, Bolivarian Republic of"
    },
    {
      .code = 876,
      .s = "Wallis and Futuna Islands"
    },
    {
      .code = 882,
      .s = "Samoa, Independent State of"
    },
    {
      .code = 887,
      .s = "Yemen"
    },
    {
      .code = 891,
      .s = "Serbia and Montenegro"
    },
    {
      .code = 894,
      .s = "Zambia, Republic of"
    },
    {
      .code = 0,
      .s = NULL
    }
  };
