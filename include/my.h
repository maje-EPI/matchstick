/*
** my.h for matchstick in /home/maje/delivery/B2/CPE/CPE_2016_matchstick
** 
** Made by maje
** Login   <marin.brunel@epitech.eu>
** 
** Started on  Mon Feb 13 14:07:23 2017 maje
** Last update Thu Feb 23 20:44:29 2017 maje
*/

#ifndef MY_H_
# define MY_H_

#include <stdlib.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdarg.h>

#ifndef READ_SIZE
# define READ_SIZE 5

#endif /* READ_SIZE */

#ifndef RAND_MAX
# define RAND_MAX 10

#endif /* RAND_MAX */


typedef struct s_my_tab
{
  char	*str;
  int	max_alum_u_have;
  int	size;
  int	line;
  int	*map;
  int	*map2;
  int	alum;
  int	max_alum;
  int	victory;
}		t_my_tab;

char            *get_next_line(const int fd);
char            *fill_buffer(char *buffer, int fd);
char            *my_strcat(char *str, char *src);
char            *fill_res(char *buff, char **buffer);
int		my_putstr(char*);
int		my_getnbr(char *);
int		AI(t_my_tab *);
void		my_putchar(char);
int		my_printf(char *str, ...);
int		check_matchesIA(t_my_tab *n);
int		check_matches(t_my_tab *n);
int		check_lineIA(t_my_tab *n);
int		check_line(t_my_tab *n);
void		print_line(int a, int y, int space, t_my_tab *n);
void		draw_map(t_my_tab *n, int av);
void		draw_map2(t_my_tab *n);
int		check_victory(t_my_tab *n);
int		check_victory2(t_my_tab *n);

#endif /* MY_H_ */
