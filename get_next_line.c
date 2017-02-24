/*
** get_nex_line.c for get_next_line in /home/maje/delivery/CPE/CPE_2016_getnextline
** 
** Made by maje
** Login   <marin.brunel@epitech.eu>
** 
** Started on  Wed Dec 21 16:18:40 2016 maje
** Last update Wed Feb 22 15:11:06 2017 maje
*/

#include "my.h"

static int	my_strlen(char *str)
{
  int	i;

  i = 0;
  if (str == NULL)
    return (0);
  while (str[i] != '\0')
    {
      i++;
    }
  return (i);
}

char	*my_strcat(char *str, char *src)
{
  char	*res;
  int	i;
  int	j;

  if (str == NULL && src == NULL)
    return (NULL);
  else if (str == NULL)
    return (src);
  else if (src == NULL)
    return (str);
  res = malloc(sizeof(char) * (my_strlen(str) + my_strlen(src) + 1));
  i = -1;
  j = -1;
  while (str[++i])
    res[++j] = str[i];
  i = -1;
  while (src[++i])
    res[++j] = src[i];
  res[++j] = 0;
  return (res);
}

char	*fill_buffer(char *str, const int fd)
{
  int	i;

  i = 0;
  if ((i = read(fd, str, READ_SIZE)) <= 0)
    return (NULL);
  str[i] = '\0';
  return (str);
}

char	*fill_res(char *buff, char **buffer)
{
  int	i;

  i = -1;
  while (**buffer != '\n' && **buffer != '\0')
    {
      buff[++i] = **buffer;
      (*buffer)++;
    }
  buff[++i] = 0;
  return (buff);
}

char	*get_next_line(const int fd)
{
  static char	*buffer = NULL;
  char		*buff;

  if (fd < 0)
    return (NULL);
  if ((buff = malloc(sizeof(char) * (READ_SIZE + 1))) == NULL)
    return (NULL);
  if (buffer == NULL || buffer[0] == 0)
    {
      if ((buffer = malloc(sizeof(char) * (READ_SIZE + 1))) == NULL)
	return (NULL);
      if ((buffer = fill_buffer(buffer, fd)) == NULL)
	return (NULL);
    }
  if (buffer == NULL)
    return (NULL);
  fill_res(buff, &buffer);
  if (buffer[0] == '\n')
    buffer++;
  else
    buff = my_strcat(buff, get_next_line(fd));
  return (buff);
}
