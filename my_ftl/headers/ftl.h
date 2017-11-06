/*
** ftl.h for  in /Users/Winda/Desktop/my_ftl/headers
** 
** Made by AZIS Widad
** Login   <azis_w@etna-alternance.net>
** 
** Started on  Mon Nov  6 09:14:44 2017 AZIS Widad
** Last update Mon Nov  6 19:13:47 2017 AZIS Widad
*/
#ifndef _FTL_H_
# define _FTL_H_

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "lib.h"

typedef struct			s_weapon
{
  char					*system_state;
  int					damage;
}						t_weapon;

typedef struct			s_ftl_drive
{
  char					*system_state;
  int					energy;
}						t_ftl_drive;

typedef struct			s_navigation_tools
{
  char					*system_state;
  int					sector;
  int					evade;
}						t_navigation_tools;

typedef struct			s_freight
{
  char					*item;
  struct s_freight		*next;
  struct s_freight		*prev;
}						t_freight;

typedef struct			s_container
{
  int					nb_elem;
  t_freight				*first;
  t_freight				*last;
}						t_container;

typedef struct			s_ship
{
  int					hull;
  t_weapon				*weapon;
  t_ftl_drive			*ftl_drive;
  t_navigation_tools	*navigation_tools;
  t_container			*container;
}						t_ship;

t_ship					*create_ship();
int						add_weapon_to_ship(t_ship *ship);
int						add_ftl_drive_to_ship(t_ship *ship);
int						add_navigation_tools_to_ship(t_ship *ship);
int						add_container_to_ship(t_ship *ship);
t_freight				*create_freight();
void					add_freight_to_container(t_ship *ship, t_freight *freight);

#endif /* !_FTL_H_ */
