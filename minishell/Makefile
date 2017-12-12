NAME	= minishell

CC = gcc

SRC = main.c func.c env.c exec.c ft_strcat.c ft_strncmp.c ft_strsplit.c get_next_line.c

LIB = printf/libftprintf.a

OBJ = main.o func.o env.o exec.o ft_strcat.o ft_strncmp.o ft_strsplit.o get_next_line.o

CFLAGS	= -Wall -Wextra -Werror

all: $(NAME)
$(NAME):
		$(CC) $(CFLAGS) $(SRC) -c $? $(SRC)
		$(CC) $(OBJ) $(LIB) -o $(NAME)

clean:
		rm -rf $(OBJ)

fclean: clean
		rm -rf $(NAME) $(OBJ)

re: fclean all

.PHONY: clean