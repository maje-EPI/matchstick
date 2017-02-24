/*
** my_put_nbr_base.c for my_put_nbr_base in /home/maje/delivery/truc utile de ouf
** 
** Made by maje
** Login   <marin.brunel@epitech.eu@epitech.net>
** 
** Started on  Fri Nov 11 13:39:39 2016 maje
** Last update Fri Nov 18 14:08:20 2016 maje
*/

#include "include/my.h"

int	my_put_nbr_base(int nb, char *base)
{
  int	type;
  int	begin;
  int	sz;

  sz = my_strlen(base);
  if (nb < 0)
    {
      my_putchar('-');
      my_put_nbr_base(-nb, base);
    }
  if (nb / sz != 0)
    my_put_nbr_base(nb / sz, base);
  my_putchar(base[nb % sz]);
  return (0);
}
