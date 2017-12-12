# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cmiron <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/16 12:23:16 by cmiron            #+#    #+#              #
#    Updated: 2016/08/16 14:55:03 by cmiron           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
INCLUDE = includes

all: $(NAME)

$(NAME): 
	gcc -Wall -Wextra -Werror -c $(SRC) -I$(INCLUDE)
	ar rc libft.a ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o 
	ranlib $(NAME)

clean:
	/bin/rm -f ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o 


fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
