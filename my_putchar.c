/*
** my_putchar.c for my_putchar in /home/maje/delivery/PSU_2016_my_printf_bootstrap
** 
** Made by maje
** Login   <marin.brunel@epitech.eu@epitech.net>
** 
** Started on  Wed Nov  9 09:54:52 2016 maje
** Last update Wed Feb 22 13:20:03 2017 maje
*/

#include "my.h"

void	my_putchar(char c)
{
  write(1, &c, 1);
}
