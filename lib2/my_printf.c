/*
** my_printf.c for my_printf in /home/maje/delivery/PSU_2016_my_printf
** 
** Made by maje
** Login   <marin.brunel@epitech.eu@epitech.net>
** 
** Started on  Thu Nov 10 10:14:19 2016 maje
** Last update Fri Nov 18 16:50:16 2016 maje
*/

#include <stdarg.h>
#include <stdio.h>
#include "my.h"

int	search(char str, int i)
{
  char *list;
  int	point;
  int	end;

  point = 0;
  list = "csSdixXopb%u";
  i = 0;
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
	    flag[search(str[i], i)](va_arg(vl, unsigned long long));
	  else if (search(str[i], i) == 84)
	    my_putchar(str[i] + my_putchar('%'));
	  else
	    flag[search(str[i], i)](va_arg(vl, int));
	}
      else
	my_putchar(str[i]);
      i++;
    }
}


int	my_printf(char *str, ...)
{
  va_list	vl;
  void		(*flag[12])();

  int		i;

  i = 0;
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
}
