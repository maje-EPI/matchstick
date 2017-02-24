/*
** check_victory.c for matchstick in /home/maje/delivery/B2/CPE/CPE_2016_matchstick
** 
** Made by maje
** Login   <marin.brunel@epitech.eu>
** 
** Started on  Thu Feb 23 18:10:21 2017 maje
** Last update Thu Feb 23 20:42:06 2017 maje
*/

#include "my.h"

int	check_victory(t_my_tab *n)
{
  int	i;

  i = -1;
  while (++i < n->size)
    if (n->map[i] != 0)
      return (0);
  if (n->victory == 1)
    return (2);
  else if (n->victory == 2)
    return (1);
  return (0);
}

int	check_victory2(t_my_tab *n)
{
  if (check_victory(n) == 1)
    {
      draw_map2(n);
      my_printf("You lost, too bad...\n");
      return (2);
    }
  if (check_victory(n) == 2)
    {
      draw_map2(n);
      my_printf("I lost... snif... but I'll get you next time!!\n");
      return (1);
    }
  return (0);
}
