/*
** main.c for  in /Users/Winda/Desktop/my_ftl
** 
** Made by AZIS Widad
** Login   <azis_w@etna-alternance.net>
** 
** Started on  Mon Nov  6 10:32:00 2017 AZIS Widad
** Last update Tue Nov  7 15:46:57 2017 AZIS Widad
*/
#include "headers/ftl.h"

void			parcourir_liste(t_ship *ship)
{
  t_freight		*it;

  it = ship->container->first;
	while (it != NULL)
	  {
		my_putstr(it->item);
		my_put_nbr(ship->weapon->damage);
		my_putstr("\n");
		it = it->next;
	  }
}

int main()
{
  t_ship *ship = NULL;
  t_freight *freight;

  ship = create_ship();
  add_weapon_to_ship(ship);
  add_ftl_drive_to_ship(ship);
  add_navigation_tools_to_ship(ship);
  add_container_to_ship(ship);

  freight = create_freight();
  freight->item = my_strdup("couteau");
  add_freight_to_container(ship, freight);
  freight = create_freight();
  freight->item = my_strdup("attackbonus");
  add_freight_to_container(ship, freight);
  parcourir_liste(ship);
  get_bonus(ship);
  parcourir_liste(ship);  
  return (0);
}
