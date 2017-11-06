/*
** contenair.c for  in /Users/Winda/Desktop/my_ftl/sources
** 
** Made by AZIS Widad
** Login   <azis_w@etna-alternance.net>
** 
** Started on  Mon Nov  6 14:34:50 2017 AZIS Widad
** Last update Mon Nov  6 21:59:03 2017 AZIS Widad
*/
#include "../headers/ftl.h"

int				add_container_to_ship(t_ship *ship)
{
  t_container	*container;

  my_putstr("ajout du container en cours...\n");
  if((container = malloc(sizeof(t_container))) == NULL)
	{
	  my_putstr("\033[31mvotre vaisseau a explose lorsque vous avez pose le container\033[0m\n");
	  return 0;
	}
  container->first = NULL;
  container->last = NULL;
  container->nb_elem = 0;
  ship->container = container;
  my_putstr("\033[32mle container a ete ajoute avec succes!\033[0m\n");
  return 1;
}

t_freight		*create_freight()
{
  t_freight		*freight;
  if((freight = malloc(sizeof(t_freight))) == NULL)
	{
	  my_putstr
		("\033[31mvotre vaisseau a explose lorsque vous avez pose le freight\033[0m\n");
	  return 0;
	}
  freight->prev = NULL;
  freight->next = NULL;
  freight->item = NULL;
  return freight;
}

void			add_freight_to_container(t_ship *ship, t_freight *freight)
{
  if (ship->container->nb_elem == 0)
	{
	  ship->container->first = freight;
	  ship->container->last = freight;
	}
  ship->container->first->next = freight;
  freight->prev = ship->container->last;
  ship->container->last = freight;
  ship->container->nb_elem = ship->container->nb_elem + 1;
}
