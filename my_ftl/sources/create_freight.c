/*
** create_freight.c for  in /Users/Winda/Desktop/my_ftl
** 
** Made by AZIS Widad
** Login   <azis_w@etna-alternance.net>
** 
** Started on  Tue Nov  7 12:19:48 2017 AZIS Widad
** Last update Tue Nov  7 12:23:50 2017 AZIS Widad
*/
#include "../headers/ftl.h"

t_freight		*create_freight()
{
  t_freight		*freight;
  if ((freight = malloc(sizeof(t_freight))) == NULL)
	{
	  my_putstr
		("\033[31mvotre vaisseau a explose lorsque vous avez pose le freight\033[0m\n");
	  return (0);
	}
  freight->prev = NULL;
  freight->next = NULL;
  freight->item = NULL;
  return (freight);
}
