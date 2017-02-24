/*
** my_put_nbr.c for my_put_nbr in /home/maje/delivery/CPool_Day07/library
** 
** Made by Marin Brunel
** Login   <maje@epitech.net>
** 
** Started on  Tue Oct 11 09:55:34 2016 Marin Brunel
** Last update Wed Nov 16 11:47:33 2016 maje
*/

#include "my.h"

int	my_put_nbr_unsigned(unsigned int nb)
{
  if (nb == 0)
    my_putchar('0');
  else if (nb >= 10)
    {
      my_put_nbr_unsigned((nb - (nb % 10)) / 10);
      my_putchar('0' + (nb % 10));
    }
  else
    my_putchar('0' + nb);
  return (0);
}
