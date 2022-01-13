##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## 
##

NAME	=	my_printf

SRC		=	my_printf.c	\
			src/index.c 	\
			src/my_nbr.c 	\
			src/my_str.c 	\
			src/my_upcase.c \
			src/my_char.c 	\
			lib/my_putchar.c	\
            lib/my_putstr.c	\
            lib/my_put_nbr.c 	\
			lib/my_str_upcase.c 	\

OBJ		=	$(SRC:.c=.o)

CFLAGS 	= 	-Wall -Wextra -I./include -g

all:		$(NAME)

$(NAME): 	$(OBJ)
			gcc -o $(NAME) $(OBJ)

clean:
		rm -f *.c~
		rm -f src/*.o
		rm -f *.o
		rm -f lib/*.o
		rm -f vgcore*

fclean: clean
		rm  -f $(NAME)

re:		fclean all
