/*
** check_error.c for matchstick in /home/maje/delivery/B2/CPE/CPE_2016_matchstick
** 
** Made by maje
** Login   <marin.brunel@epitech.eu>
** 
** Started on  Thu Feb 23 18:07:09 2017 maje
** Last update Fri Feb 24 10:07:33 2017 maje
*/

#include "my.h"

int	check_line(t_my_tab *n)
{
  free(n->str);
  if (n->line <= 0)
    {
      my_printf("Error: invalid input (positive number expected)\n");
      n->line = 0;
      return (0);
    }
  if (n->line > n->size || n->line == 0)
    {
      my_printf("Error: this line is out of range\n");
      n->line = 0;
      return (0);
    }
  return (1);
}

int	check_lineIA(t_my_tab *n)
{
  if (n->line <= 0)
    {
      n->line = 0;
      return (0);
    }
  if (n->line > n->size || n->line == 0)
    {
      n->line = 0;
      return (0);
    }
  return (1);
}


int	check_matches(t_my_tab *n)
{
  free(n->str);
  if (n->alum <= 0)
    {
      my_printf("Error: invalid input (positive number expected)\n");
      n->alum = 0;
      return (0);
    }
  if (n->alum > n->map[n->line - 1])
    {
      my_printf("Error: not enough matches on this line\n");
      n->alum = 0;
      return (0);
    }
  if (n->alum > n->max_alum)
    {
      my_printf("Error: you cannot remove more than %d matches per turn\n",
		n->max_alum);
      n->alum = 0;
      return (0);
    }
  return (1);
}

int	check_matchesIA(t_my_tab *n)
{
  if (n->alum <= 0)
    {
      n->alum = 0;
      return (0);
    }
  if (n->alum > n->max_alum)
    {
      n->alum = 0;
      return (0);
    }
  if (n->line > 0)
    if (n->alum > n->map[n->line - 1])
      {
	n->alum = 0;
	return (0);
      }
  return (1);
}
