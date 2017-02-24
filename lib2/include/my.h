/*
** my.h for my.h in /home/maje/delivery/PSU_2016_my_printf
** 
** Made by maje
** Login   <marin.brunel@epitech.eu@epitech.net>
** 
** Started on  Wed Nov 16 02:24:39 2016 maje
** Last update Thu Feb 23 17:40:21 2017 maje
*/

#ifndef MY_H_
# define MY_H_

#include <stdarg.h>

int	my_putchar(char c);
int	my_putstr(char *str);
int	my_put_nbr(int nb);
int	my_strlen(char *str);
int	my_put_long_base(unsigned long long nb, char *base);
int	my_put_nbr_base(int nb, char *base);
int	my_put_nbr_unsigned(unsigned int nb);
void	character(int nb);
void	string(char *str);
void	string2(char *str);
void	number(int nb);
void	number1(int nb);
void	hexa1(int nb);
void	hexa2(int nb);
void	octal(int nb);
void	pointer(unsigned long long);
void	binary(int nb);
void	percent(int nb);
void	noint(unsigned int nb);
int	search(char str, int i);
int	loop(void (**flag)(), char *str, va_list vl);
int	my_printf(char *str, ...);

#endif /* MY_H_ */
