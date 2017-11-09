/*
** system_control.c for  in /Users/Winda/Desktop/my_ftl
** 
** Made by AZIS Widad
** Login   <azis_w@etna-alternance.net>
** 
** Started on  Tue Nov  7 18:04:54 2017 AZIS Widad
** Last update Wed Nov  8 15:49:48 2017 AZIS Widad
*/
#include "../headers/ftl.h"

void			ftl_drive_system_check(t_ship *ship)
{
  my_putstr("verification du reacteur en cours...\n");
  if (my_strcmp(ship->ftl_drive->system_state, "online") != 0)
	{
	  my_putstr("\033[31mreacteur hors service!\033[0m\n");
	  return;
	}
  my_putstr("\033[32mreacteur OK!\033[0m\n");
}

void			navigation_tools_system_check(t_ship *ship)
{
  my_putstr("verification du systeme de navigation en cours...\n");
  if (my_strcmp(ship->navigation_tools->system_state, "online") != 0)
	{
	  my_putstr("\033[31msysteme de navigation hors service!\033[0m\n");
	  return;
	}
  my_putstr("\033[32msysteme de navigation OK!\033[0m\n");
}

void			weapon_system_check(t_ship *ship)
{
    my_putstr("verification du systeme d'armement en cours...\n");
  if (my_strcmp(ship->weapon->system_state, "online") != 0)
	{
	  my_putstr("\033[31msysteme d'armement hors service!\033[0m\n");
	  return;
	}
  my_putstr("\033[32msysteme d'armement OK!\033[0m\n");
}

void			system_control(t_ship *ship)
{
  ftl_drive_system_check(ship);
  navigation_tools_system_check(ship);
  weapon_system_check(ship);
  return;
}
