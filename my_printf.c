/*
** my_printf.c for my_printf in /home/maje/delivery/PSU_2016_my_printf
** 
** Made by maje
** Login   <marin.brunel@epitech.eu@epitech.net>
** 
** Started on  Thu Nov 10 10:14:19 2016 maje
** Last update Wed Feb 22 15:10:06 2017 maje
*/

#include <stdarg.h>
#include <stdio.h>
#include "my.h"

int	search(char str)
{
  char *list;
  int	point;

  point = 0;
  list = "csSdixXopb%u";
  while (list[point] != '\0')
    {
      if (str == list[point])
	return (point);
      point++;
    }
  return (84);
}

int	loop(void (**flag)(), char *str, va_list vl)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] == '%')
	{
	  i++;
	  if (str[i] == ' ')
	    while (str[i] == ' ')
	      i++;
	  if (str[i] == '%')
	    my_putchar('%');
	  else if (str[i] == 'p')
	    flag[search(str[i])](va_arg(vl, unsigned long long));
	  else if (search(str[i]) == 84)
	    my_putchar(str[i] + my_putchar('%'));
	  else
	    flag[search(str[i])](va_arg(vl, int));
	}
      else
	my_putchar(str[i]);
      i++;
    }
  return (0);
}


int	my_printf(char *str, ...)
{
  va_list	vl;
  void		(*flag[12])();

  flag[0] = &character;
  flag[1] = &string;
  flag[2] = &string2;
  flag[3] = &number;
  flag[4] = &number1;
  flag[5] = &hexa1;
  flag[6] = &hexa2;
  flag[7] = &octal;
  flag[8] = &pointer;
  flag[9] = &binary;
  flag[10] = &percent;
  flag[11] = &noint;
  va_start(vl, str);
  loop(flag, str, vl);
  va_end(vl);
  return (0);
}
