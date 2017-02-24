/*
** my_get_nbr.c for my_get_nbr.c in /home/maje/delivery/BSI/bsiwireframe
** 
** Made by maje
** Login   <marin.brunel@epitech.eu>
** 
** Started on  Thu Dec  1 11:49:09 2016 maje
** Last update Tue Dec  6 15:47:36 2016 maje
*/

#include "my.h"

int	my_getnbr(char *str)
{
  int	sign;
  int	result;

  sign = 1;
  result = 0;
  while (*str == '-' || *str == '+')
    {
      if (*str == '-')
	sign = - sign;
      str = str + 1;
    }
  while (*str != '\0' && *str >= '0' && *str <= '9')
    {
      result = result * 10 + *str - 48;
      str = str + 1;
    }
  if (sign == -1)
    result = - result;
  return (result);
}
