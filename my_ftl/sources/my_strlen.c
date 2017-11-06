/*
** my_strlen.c for  in /Users/Winda/Desktop/my_ftl/sources
** 
** Made by AZIS Widad
** Login   <azis_w@etna-alternance.net>
** 
** Started on  Mon Nov  6 11:38:38 2017 AZIS Widad
** Last update Mon Nov  6 12:19:59 2017 AZIS Widad
*/
#include "../headers/ftl.h"

int		my_strlen(const char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    i++;
  return (i);
}
