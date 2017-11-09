/*
** main.c for  in /Users/Winda/Desktop/my_ftl
** 
** Made by AZIS Widad
** Login   <azis_w@etna-alternance.net>
** 
** Started on  Mon Nov  6 10:32:00 2017 AZIS Widad
** Last update Thu Nov  9 17:06:36 2017 AZIS Widad
*/
#include "headers/ftl.h"
#include <time.h>

/*static const	t_action_game tabAction[] = {
  {"attack", attack},
  {"detect", detect},
  {"jump", jump},
  {"getbonus", get_bonus},
  {"repair_system", system_repair},
  {"control_system", system_control},
  {"state", state},
  {NULL, NULL}
  };*/

void			parcourir_liste(t_ship *ship)
{
  t_freight		*it;

  it = ship->container->first;
	while (it != NULL)
	  {
		my_putstr(it->item);
		my_put_nbr(ship->weapon->damage);
		my_putstr("-----");
		my_putstr(ship->ftl_drive->system_state);
		my_putstr("\n");
		it = it->next;
	  }
}

t_ennemy		*create_ennemy()
{
  t_ennemy		*ennemy;

  if ((ennemy = malloc(sizeof(t_ennemy))) == NULL)
	return (0);
  ennemy->pt_damage = 10;
  ennemy->hp = 20;
  my_putstr("Attention un ennemi est apparu !\n");
  return (ennemy);
}

void			jump(t_ship *ship)
{
  // t_ennemy		*ennemy;
  // if ()
  ship->navigation_tools->sector += 1;
  ship->ftl_drive->energy -= 1;
  my_putstr("Vous etes sur le secteur suivant ! Mais vous avez perdu 1 energie\n");
}

int main()
{
  t_ship *ship;
  t_freight *freight;
  t_ennemy *ennemy;
  int value;
  //  t_freight *freight2;

  ship = create_ship();
  add_weapon_to_ship(ship);
  add_ftl_drive_to_ship(ship);
  add_navigation_tools_to_ship(ship);
  add_container_to_ship(ship);
  srandom(time(0));
  while (ship->navigation_tools->sector <= 9)
	{
	  value = random() % 100;
	  if (value < 31)
		{
		  ennemy = create_ennemy();
		  free(ennemy);
		  //my_put_nbr(create_ennemy());
		}
	  else
		my_putstr("Not ennemy\n");
	  ship->navigation_tools->sector++;

	}
  freight = create_freight();
  // free(freight);
  /*freight->item = my_strdup("couteau");
  add_freight_to_container(ship, freight);

  freight2 = create_freight();
  freight2->item = my_strdup("AK");
  add_freight_to_container(ship, freight2);

  parcourir_liste(ship);
  get_bonus(ship);
  //parcourir_liste(ship);
  //del_freight_from_container(ship, freight);
  parcourir_liste(ship);
  ftl_drive_system_check(ship);
  navigation_tools_system_check(ship);
  weapon_system_check(ship);

  //  ftl_drive_system_repair(ship);
  parcourir_liste(ship);
  system_repair(ship);
parcourir_liste(ship);
  //  ftl_drive_system_check(ship);
 
  //  navigation_tools_system_repair(ship);
  //weapon_system_repair(ship);
  */
  //free(ship->weapon);
  //free(ship->ftl_drive->system_state);
  //free(ship->navigation_tools->system_state);
  //free(ship->weapon->system_state);
  //free(ship->navigation_tools);
  //free(ship->ftl_drive);
  //free(ship->weapon);
  //free(ship->container);
  free(ship);
 return (0);
}
