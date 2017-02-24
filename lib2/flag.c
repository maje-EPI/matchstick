/*
** flag.c for flag in /home/maje/delivery/PSU_2016_my_printf
** 
** Made by maje
** Login   <marin.brunel@epitech.eu@epitech.net>
** 
** Started on  Mon Nov 14 15:19:23 2016 maje
** Last update Fri Nov 18 14:07:47 2016 maje
*/

#include "include/my.h"
#include <stdarg.h>

void	character(int nb)
{
  my_putchar(nb);
}

void	string(char *str)
{
  my_putstr(str);
}

void	string2(char *str)
{
  int	i;
  int	nb;

  i = 0;
  if (str[i] == '\0')
    my_putstr("(null)");
  while (str[i] != '\0')
    {
      if (str[i] >= 32 && str[i] <= 126)
	my_putchar(str[i]);
      else
	{
	  my_putchar('\\');
	  if (str[i] < 8)
	    my_putstr("00");
	  if (str[i] >= 8 && str[i] < 64)
	    my_putchar('0');
	  my_put_nbr_base(str[i], "01234567");
	}
      i += 1;
    }
}

void	number(int nb)
{
  my_put_nbr(nb);
}

void	number1(int nb)
{
  my_put_nbr(nb);
}
