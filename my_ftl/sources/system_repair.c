/*
** system_repair.c for  in /Users/Winda/Desktop/my_ftl
** 
** Made by AZIS Widad
** Login   <azis_w@etna-alternance.net>
** 
** Started on  Wed Nov  8 08:55:58 2017 AZIS Widad
** Last update Wed Nov  8 19:13:55 2017 AZIS Widad
*/
#include "../headers/ftl.h"

void	ftl_drive_system_repair(t_ship *ship)
{
  my_putstr("reparation du reacteur en cours...\n");
  if (ship->ftl_drive->system_state == NULL)
	{
	  my_putstr("\033[31mles reparations du reacteur ont echoue\033[0m\n");
	  return;
	}
  free(ship->ftl_drive->system_state);
  ship->ftl_drive->system_state = my_strdup("online");
  my_putstr("\033[32mreparation termine! systeme reacteur OK!\033[0m\n");
}

void	navigation_tools_system_repair(t_ship *ship)
{
  my_putstr("reparation du systeme de navigation en cours...\n");
  if (ship->navigation_tools->system_state == NULL)
	{
	  my_putstr
		("\033[31mles reparations des outils de navigations ont echoue\033[0m\n");
	  return;
	}
  free(ship->navigation_tools->system_state);
  ship->navigation_tools->system_state = my_strdup("online");
  my_putstr("\033[32mreparation termine! systeme de navigation OK!\033[0m\n");
}

void	weapon_system_repair(t_ship *ship)
{
  my_putstr("reparation du systeme d'armement en cours...\n");
  if (ship->weapon->system_state == NULL)
	{
	  my_putstr
		("\033[31mles reparations du systeme d'armement ont echoue\033[0m\n");
	  return;
	}
  free(ship->weapon->system_state);
  ship->weapon->system_state = my_strdup("online");
  my_putstr("\033[32mreparation termine! systeme d'armement OK!\033[0m\n");
}

static const t_repair_command tab[] = {
  {"ftl_drive", ftl_drive_system_repair},
  {"navigation_tools", navigation_tools_system_repair},
  {"weapon", weapon_system_repair},
  {NULL, NULL}
};

void	system_repair(t_ship *ship)
{
  char	*str;
  int	i;

  my_putstr("repair_system~>");
  str = readline();
  i = 0; 
  if (str == NULL || my_strlen(str) >= 49)
	{
	  my_putstr("[SYSTEM FAILURE] : le lecteur de commande est bloque\n");
	  return;
	}
  while (tab[i].name_fct != NULL)
	{
	  if (my_strcmp(tab[i].name_fct, str) == 0)
		{
		  tab[i].ptrFct(ship);
		  return;
		}
	  i++;
	}
   my_putstr("[SYSTEM FAILURE] : commande inconnue\n");
   return;
}
