/*
** air_shed.c for air  shed in /Users/Winda/Desktop/my_ftl/sources
** 
** Made by AZIS Widad
** Login   <azis_w@etna-alternance.net>
** 
** Started on  Mon Nov  6 10:07:35 2017 AZIS Widad
** Last update Tue Nov  7 10:16:46 2017 AZIS Widad
*/
#include "../headers/ftl.h"

t_ship					*create_ship()
{
  t_ship				*ship;

  my_putstr("construction du vaisseau en cours...\n");
  if ((ship = malloc(sizeof(t_ship))) == NULL)
	{
	  my_putstr("\033[31mle vaisseau n'a pas pu etre construit par manque de materiaux\033[0m\n");
	  return (0);
	}
  ship->hull = 50;
  ship->weapon = NULL;
  ship->ftl_drive = NULL;
  ship->navigation_tools = NULL;
  ship->container = NULL;
  my_putstr("\033[32mamelioration du vaisseau termine!\033[0m\n");
  return (ship);
}

int						add_weapon_to_ship(t_ship *ship)
{
  t_weapon				*weapon;

  my_putstr("ajout des armes en cours...\n");
  if ((weapon = malloc(sizeof(t_weapon))) == NULL)
	{
	  my_putstr("\033[31mvotre vaisseau a explose quand vous avez tente d'ajouter les armes\033[0m\n");
	  return (0);
	}
  weapon->damage = 10;
  weapon->system_state = my_strdup("online");
  ship->weapon = weapon;
  my_putstr("\033[32mles armes on ete ajoutes avec succes!\033[0m\n");
  return (1);
}

int						add_ftl_drive_to_ship(t_ship *ship)
{
  t_ftl_drive			*ftl_drive;

  my_putstr("ajout du reacteur en cours...\n");
  if ((ftl_drive = malloc(sizeof(t_ftl_drive))) == NULL)
	{
	  my_putstr("\033[31mvotre vaisseau a explose lorsque vous avez pose le reacteur\033[0m\n");
	  return (0);
	}
  ftl_drive->energy = 10;
  ftl_drive->system_state = my_strdup("online");
  ship->ftl_drive = ftl_drive;
  my_putstr("\033[32mle reacteur a ete ajoute avec succes!\033[0m\n");
  return (1);
}

int						add_navigation_tools_to_ship(t_ship *ship)
{
  t_navigation_tools	*navigation_tools;

  my_putstr("ajout des outils de navigations...\n");
  if ((navigation_tools = malloc(sizeof(t_navigation_tools))) == NULL)
	{
	  my_putstr("\033[31mvotre vaisseau a explose lorsque vous avez pose les outils de navigations\033[0m\n");
	  return (0);
	}
  navigation_tools->sector = 0;
  navigation_tools->evade = 25;
  navigation_tools->system_state = my_strdup("online");
  ship->navigation_tools = navigation_tools;
  my_putstr("\033[32mles outils de navigations ont ete ajoutes avec succes!\033[0m\n");
  return (1);
}
