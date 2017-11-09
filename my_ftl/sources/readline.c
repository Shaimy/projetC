/*
** readline.c for  in /Users/Winda/Desktop/my_ftl
** 
** Made by AZIS Widad
** Login   <azis_w@etna-alternance.net>
** 
** Started on  Wed Nov  8 15:54:43 2017 AZIS Widad
** Last update Wed Nov  8 15:57:02 2017 AZIS Widad
*/
#include "../headers/ftl.h"

char			*readline(void)
{
  ssize_t		ret;
  char			*buff;

  if ((buff = malloc((50 + 1) * sizeof(char))) == NULL)
	return (NULL);
  if ((ret = read(0, buff, 50)) > 1)
	{
	  buff[ret - 1] = '\0';
	  return (buff);
	}
  free(buff);
  return (NULL);
}
