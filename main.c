/*
** main.c for matchstick in /home/maje/delivery/B2/CPE/CPE_2016_matchstick
** 
** Made by maje
** Login   <marin.brunel@epitech.eu>
** 
** Started on  Mon Feb 13 13:36:44 2017 maje
** Last update Fri Feb 24 11:24:57 2017 maje
*/

#include "my.h"

void	print_map(t_my_tab *tab)
{
  int   j, i;

  j = -1;
  if ((tab->map = malloc(sizeof(int) * tab->size + 1)) == NULL)
    return ;
  if ((tab->map2 = malloc(sizeof(int) * tab->size + 1)) == NULL)
    return ;
  i = 1;
  while (++j < tab->size)
    {
      tab->map[j] = i;
      tab->map2[j] = i;
      i += 2;
    }
  return ;
}

int	AI(t_my_tab *n)
{
  int	i;

  i = 0;
  i = rand() % (n->size + 1);
  n->line = i;
  if (check_lineIA(n) == 0)
    {
      AI(n);
      return (0);
    }
  i = (rand() % n->max_alum_u_have);
  n->alum = i + 1;
  if (check_matchesIA(n) == 0)
    {
      AI(n);
      return (0);
    }
  my_printf("AI's turn...\n");
  my_printf("AI removed %d match(es) from line %d\n", n->alum, n->line);
  n->victory = 1;
  n->map[n->line - 1] -= n->alum;
  return (0);
}

int	error_check(t_my_tab *n)
{
  my_printf("Line: ");
  if ((n->str = get_next_line(0)) == NULL)
    return (42);
  n->line = my_getnbr(n->str);
  if (check_line(n) == 0)
    return (error_check(n));
  my_putstr("Matches: ");
  if ((n->str = get_next_line(0)) == NULL)
    return (42);
  n->alum = my_getnbr(n->str);
  if (check_matches(n) == 0)
    return (error_check(n));
  my_printf("Player removed %d match(es) from line %d\n", n->alum,
	    n->line);
  n->map[n->line - 1] -= n->alum;
  n->victory = 2;
  return (1);
}

int	main(int ac, char **av)
{
  t_my_tab	tab;
  int		i;

  if (ac != 3)
    return (0);
  if ((tab.size = my_getnbr(av[1])) > 100 || (tab.size = my_getnbr(av[1])) < 1)
    return (84);
  if ((tab.max_alum = my_getnbr(av[2])) < 1)
    return (84);
  print_map(&tab);
  tab.victory = 0 + (tab.max_alum_u_have = tab.map[tab.size - 1]);
  while (1)
    {
      draw_map(&tab, tab.size);
      my_putstr("Your turn:\n");
      if (error_check(&tab) == 42)
	return (0);
      if ((i = check_victory2(&tab)) != 0)
	return (i);
      draw_map(&tab, tab.size);
      AI(&tab);
      if ((i = check_victory2(&tab)) != 0)
	return (i);
    }
  return (0);
}
