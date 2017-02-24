/*
** flag1.c for flag1 in /home/maje/delivery/PSU_2016_my_printf
** 
** Made by maje
** Login   <marin.brunel@epitech.eu@epitech.net>
** 
** Started on  Tue Nov 15 22:41:57 2016 maje
** Last update Thu Nov 17 17:26:43 2016 maje
*/

#include "include/my.h"

void	hexa1(int nb)
{
  my_put_nbr_base(nb, "0123456789abcdef");
}

void	hexa2(int nb)
{
  my_put_nbr_base(nb, "0123456789ABCDEF");
}

void	octal(int nb)
{
  my_put_nbr_base(nb, "01234567");
}

void	pointer(unsigned long long nb)
{
  my_put_nbr(0);
  my_putchar('x');
  my_put_long_base(nb, "0123456789abcdef");
}

void	binary(int nb)
{
  my_put_nbr_base(nb, "01");
}
