##
## Makefile for makefile in /Users/Winda/Desktop/my_ftl
## 
## Made by AZIS Widad
## Login   <azis_w@etna-alternance.net>
## 
## Started on  Mon Nov  6 09:11:15 2017 AZIS Widad
## Last update Wed Nov  8 15:57:55 2017 AZIS Widad
##
CC		=	gcc
NAME	=	my_ftl
SRC		=	sources/my_putchar.c		\
			sources/my_putstr.c			\
			sources/my_put_nbr.c		\
			sources/my_strlen.c			\
			sources/my_strdup.c			\
			sources/my_strcmp.c			\
			sources/readline.c			\
			sources/air_shed.c			\
			sources/container.c			\
			sources/create_freight.c	\
			sources/system_control.c	\
			sources/system_repair.c		\
			main.c
OBJ		=	$(SRC:%.c=%.o)
RM		=	rm -f
CFLAGS	=	-W -Wall -Wextra -Werror

$(NAME) :	$(OBJ)
			$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

all		:	$(NAME)

clean	:
			$(RM) $(OBJ)

fclean	:	clean
			$(RM) $(NAME)

re		:	fclean all

.PHONY	:	all re clean fclean