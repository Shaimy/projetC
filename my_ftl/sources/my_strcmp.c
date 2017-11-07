/*
** my_strcmp.c for  in /Users/Winda/Desktop/my_ftl/sources
** 
** Made by AZIS Widad
** Login   <azis_w@etna-alternance.net>
** 
** Started on  Tue Nov  7 15:25:21 2017 AZIS Widad
** Last update Tue Nov  7 15:26:54 2017 AZIS Widad
*/
#include "../headers/ftl.h"

int		my_strcmp(const char *s1, const char *s2)
{
  int	i;

  if (s1 == NULL || s2 == NULL)
	return (-2);
  i = 0;
  while (s1[i] != '\0')
    {
      if (s1[i] > s2[i])
		return (1);
	  else if (s1[i] < s2[i])
		return (-1);
      i++;
    }
  if (s2[i] != '\0')
    return (-1);
  return (0);
}
