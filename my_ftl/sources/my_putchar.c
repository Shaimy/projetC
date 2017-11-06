/*
** my_putchar.c for putchar in /Users/Winda/Desktop/my_ftl/sources
** 
** Made by AZIS Widad
** Login   <azis_w@etna-alternance.net>
** 
** Started on  Mon Nov  6 09:56:51 2017 AZIS Widad
** Last update Mon Nov  6 10:03:22 2017 AZIS Widad
*/
#include "../headers/ftl.h"

void	my_putchar(char c)
{
  write(1, &c, 1);
}
