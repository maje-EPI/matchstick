/*
** my_putstr.c for my_putstr in /home/maje/delivery/PSU_2016_my_printf_bootstrap
** 
** Made by maje
** Login   <marin.brunel@epitech.eu@epitech.net>
** 
** Started on  Wed Nov  9 10:08:50 2016 maje
** Last update Wed Feb 22 15:13:18 2017 maje
*/

#include "my.h"

void	my_putchar(char c)
{
  write(1, &c, 1);
}

int	my_putstr(char *s1)
{
  int	i;

  i = 0;
  while (s1[i] != '\0')
    {
      my_putchar(s1[i]);
      i++;
    }
  return (0);
}
