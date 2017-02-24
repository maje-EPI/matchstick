##
## Makefile for do-op in /home/maje/delivery/B2/CPE/CPE_2016_matchstick
## 
## Made by maje
## Login   <marin.brunel@epitech.eu>
## 
## Started on  Tue Feb 14 14:00:53 2017 maje
## Last update Thu Feb 23 18:33:35 2017 maje
##

SRC	=	main.c		\
		draw_map.c	\
		check_victory.c	\
		check_error.c	\
		my_putstr.c	\
		get_next_line.c	\
		my_put_nbr.c	\
		my_get_nbr.c

OBJ	=	$(SRC:.c=.o)

NAME	=	matchstick

CFLAGS	+=	-I./include/ -g -Wall -Wextra

LIB_F	=	lib2/

LIB	=	-lmy

all	:	$(NAME)

$(NAME)	:		$(OBJ)
	cd lib2/ && make re
	gcc -o $(NAME) $(OBJ) -L$(LIB_F) $(LIB)

clean	:
	rm -f $(OBJ) $(OBJS)

fclean	:	clean
		rm -f $(NAME) $(NAMES)

re	:	fclean all
