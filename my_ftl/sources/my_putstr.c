/*
** my_putstr.c for  in /Users/Winda/Desktop/my_ftl/sources
** 
** Made by AZIS Widad
** Login   <azis_w@etna-alternance.net>
** 
** Started on  Mon Nov  6 10:25:41 2017 AZIS Widad
** Last update Mon Nov  6 10:26:41 2017 AZIS Widad
*/
#include "../headers/ftl.h"

void	my_putstr(char *str)
{
  int   i;

  i = 0;
  while (*(str + i) != '\0')
    {
      my_putchar(*(str + i));
      i++;
    }
}
