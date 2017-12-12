NAME = fillit
CC = gcc -Wall -Wextra -Werror
SRC = basic_func.c file_work.c get_func.c shuffle.c \
	  check2.c main.c solver.c aux.c check1.c ft_next_sqr.c \
	  more_aux.c	t_map.c
OBJ = basic_func.o file_work.o get_func.o shuffle.o \
	 	  check2.o main.o solver.o aux.o check1.o ft_next_sqr.o \
		  more_aux.o t_map.o 
all: $(NAME)

$(NAME): $(OBJ)
		$(CC) $(OBJ) -o $(NAME)

%.o: %.c
		$(CC) -c -o $@ $<

clean:
		@rm -rf $(OBJ)

fclean: clean 
		@rm -rf $(NAME)

re: fclean all

.PHONY: clean

