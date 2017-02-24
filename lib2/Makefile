##
## Makefile for makefile in /home/maje/delivery/PSU_2016_my_printf_bootstrap
## 
## Made by maje
## Login   <marin.brunel@epitech.eu@epitech.net>
## 
## Started on  Wed Nov  9 10:32:02 2016 maje
## Last update Fri Feb 24 09:15:31 2017 maje
##

SRC	=	my_putchar.c		\
		my_putstr.c		\
		my_strlen.c		\
		my_put_nbr.c		\
		my_put_nbr_unsigned.c	\
		my_put_nbr_base.c	\
		my_put_long_base.c	\
		flag.c			\
		flag1.c			\
		flag2.c			\
		my_printf.c

CFLAGS	+=	-Iinclude

NAME	=	libmy.a

OBJ	=	$(SRC:.c=.o)

all	:	$(NAME)

$(NAME)	:	$(OBJ)
		ar rc $(NAME) $(OBJ)

clean	:
		rm -f $(OBJ)

fclean	:	clean
		rm -f $(NAME)

re	:	fclean	all

