/*
** my_strdup.c for  in /Users/Winda/Desktop/my_ftl/sources
** 
** Made by AZIS Widad
** Login   <azis_w@etna-alternance.net>
** 
** Started on  Mon Nov  6 11:18:43 2017 AZIS Widad
** Last update Mon Nov  6 12:19:36 2017 AZIS Widad
*/
#include "../headers/ftl.h"

char	*my_strdup(const char *str)
{
  int	i;
  char	*copy;
  
  i = 0;
  copy = NULL;
  if ((copy = malloc((my_strlen(str) + 1) * sizeof(char))) == NULL)
    return (NULL);
  while (str[i] != '\0')
    {
      copy[i] = str[i];
      i++;
    }
  copy[i] = '\0';
  return (copy);
}
