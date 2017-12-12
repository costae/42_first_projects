# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cmiron <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/18 21:46:19 by cmiron            #+#    #+#              #
#    Updated: 2016/08/18 21:48:08 by cmiron           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_cat

SRC = ./cat.c

TMP = ./cat.o

all: $(NAME)

$(NAME) :
	gcc -Wall -Wextra -Werror -c $(SRC)
	gcc -o $(NAME) $(TMP)

clean :
	/bin/rm -f $(TMP)

fclean : clean
	/bin/rm -f $(NAME)

re : fclean all
