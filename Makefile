##
## EPITECH PROJECT, 2020
## 
## File description:
## 
##

SRC = 	./src/main.c	\
	./src/list.c	\
	./src/usfull.c	\
	./src/actions.c	\
	./src/commands.c	\
	./src/more_commads.c	\
	./src/push_swap.c

OBJ = $(SRC:.c=.o)

CFLAGS = -g3 -Wextra -I./include

NAME = push_swap

$(NAME): $(OBJ)
	gcc -o $(NAME) $(OBJ)

all:	$(NAME)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re: clean fclean all

.PHONY: all clean fclean re
