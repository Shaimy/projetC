/*
** my_put_nbr.c for  in /Users/Winda/Desktop/my_ftl/sources
** 
** Made by AZIS Widad
** Login   <azis_w@etna-alternance.net>
** 
** Started on  Mon Nov  6 12:07:33 2017 AZIS Widad
** Last update Mon Nov  6 12:15:29 2017 AZIS Widad
*/
#include "../headers/ftl.h"

int		n_len(int n)
{
  int	i;

  i = 1;
  while (i < n)
    i = i * 10;
  i = i / 10;
  return i;
}

void	my_put_nbr(int n)
{
  int	res;
  int	i;

  if (n == 0)
    my_putstr("0");
  else if (n < 0)
    {
      n = n * (-1);
      my_putchar('-');
    }
  i = n_len(n + 1);
  while (i >= 1)
    {
      res = (n / i) % 10;
      my_putchar(res + 48);
      i = i / 10;
    }
}
