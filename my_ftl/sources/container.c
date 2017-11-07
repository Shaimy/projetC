/*
** contenair.c for  in /Users/Winda/Desktop/my_ftl/sources
** 
** Made by AZIS Widad
** Login   <azis_w@etna-alternance.net>
** 
** Started on  Mon Nov  6 14:34:50 2017 AZIS Widad
** Last update Tue Nov  7 15:54:44 2017 AZIS Widad
*/
#include "../headers/ftl.h"

int				add_container_to_ship(t_ship *ship)
{
  t_container	*container;

  my_putstr("ajout du container en cours...\n");
  if ((container = malloc(sizeof(t_container))) == NULL)
	{
	  my_putstr("\033[31mvotre vaisseau a explose lorsque vous avez pose le container\033[0m\n");
	  return (0);
	}
  container->first = NULL;
  container->last = NULL;
  container->nb_elem = 0;
  ship->container = container;
  my_putstr("\033[32mle container a ete ajoute avec succes!\033[0m\n");
  return (1);
}

void			add_freight_to_container(t_ship *ship, t_freight *freight)
{
  if (ship->container->nb_elem == 0)
	ship->container->first = freight;
  else
	{
	  ship->container->last->next = freight;
	  freight->prev = ship->container->last;
	}
  ship->container->last = freight;
  ship->container->nb_elem = ship->container->nb_elem + 1;
}

void			del_freight_from_container(t_ship *ship, t_freight *freight)
{
  t_freight		*it;

  it = ship->container->first;
  while (it != NULL)
	{
	  if (it == freight)
		{
		  if (freight->prev != NULL)
			freight->prev->next = freight->next;
		  else
			ship->container->first = freight->next;
		  if (freight->next != NULL)
			freight->next->prev = freight->prev;
		  else
			ship->container->last = freight->next;
		  ship->container->nb_elem--;
		  free(freight);
		  return;
		}
	  it = it->next;
	}
}

void			get_bonus(t_ship *ship)
{
  t_freight		*it;

  it = ship->container->first;
  while (it != NULL)
	{
	  if (my_strcmp(it->item,"attackbonus"))
		ship->weapon->damage += 5;
	  if (my_strcmp(it->item,"evadebonus"))
		ship->navigation_tools->evade += 3;
	  if (my_strcmp(it->item,"energy"))
		ship->ftl_drive->energy++;
	  del_freight_from_container(ship, it);
	  it = it->next;
	}
}
