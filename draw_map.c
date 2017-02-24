/*
** draw_map.c for matchstick in /home/maje/delivery/B2/CPE/CPE_2016_matchstick
** 
** Made by maje
** Login   <marin.brunel@epitech.eu>
** 
** Started on  Thu Feb 23 18:11:47 2017 maje
** Last update Fri Feb 24 10:04:47 2017 maje
*/

#include "my.h"

void	print_line(int a, int y, int space, t_my_tab *n)
{
  int	i, x;

  x = 1;
  i = -1;
  my_putchar('*');
  while (space-- >= 0)
    my_putchar(' ');
  while (x++ <= y)
    my_putchar('|');
  i = -1;
  space = n->max_alum_u_have / 2 - a / 2 + (a - x);
  while (i++ <= space)
    my_putchar(' ');
  my_putchar('*');
  my_putchar('\n');
}

void	draw_map(t_my_tab *n, int av)
{
  int	i, x, y, space, a;

  i = -1;
  while (++i <= av * 2)
    my_putchar('*');
  my_putchar('\n');
  i = 0 * (x = 0);
  y = n->map[i];
  a = n->map2[i];
  while (i <= av)
    {
      space = av - i - 1;
      if (i > 0)
	print_line(a, y, space, n);
      y = n->map[i];
      a = n->map2[i];
      i++;
    }
  i = -1;
  while (++i <= av * 2)
    my_putchar('*');
  my_putchar('\n');
  my_putchar('\n');
}

void	print_line2(int a, int y, int space, t_my_tab *n)
{
  int   i, x;

  x = 1;
  i = -1;
  my_putchar('*');
  while (space-- >= 0)
    my_putchar(' ');
  while (x++ <= y)
    my_putchar(' ');
  i = -1;
  space = n->max_alum_u_have / 2 - a / 2 + (a - x);
  while (i++ <= space)
    my_putchar(' ');
  my_putchar('*');
  my_putchar('\n');
}

void	draw_map2(t_my_tab *n)
{
  int   i, x, y, space, a, av;

  i = -1;
  av = n->size;
  while (++i <= av * 2)
    my_putchar('*');
  my_putchar('\n');
  i = 0 * (x = 0);
  y = n->map[i];
  a = n->map2[i];
  while (i <= av)
    {
      space = av - i - 1;
      if (i > 0)
	print_line2(a, y, space, n);
      y = n->map[i];
      a = n->map2[i];
      i++;
    }
  i = -1;
  while (++i <= av * 2)
    my_putchar('*');
  my_putchar('\n');
}
