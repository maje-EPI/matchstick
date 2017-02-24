/*
** my_putchar.c for my_putchar in /home/maje/delivery/PSU_2016_my_printf_bootstrap
** 
** Made by maje
** Login   <marin.brunel@epitech.eu@epitech.net>
** 
** Started on  Wed Nov  9 09:54:52 2016 maje
** Last update Wed Nov 16 15:07:57 2016 maje
*/

#include <unistd.h>

int	my_putchar(char c)
{
  write(1, &c, 1);
  return (0);
}
