/*
** my_strlen.c for my_strlen.c in /home/maje/delivery/CPool_Day04
** 
** Made by Marin Brunel
** Login   <maje@epitech.net>
** 
** Started on  Thu Oct  6 23:14:10 2016 Marin Brunel
** Last update Wed Oct 12 20:33:43 2016 Marin Brunel
*/

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    i++;
  return (i);
}
