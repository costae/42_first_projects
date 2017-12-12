# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cmiron <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/24 19:51:28 by cmiron            #+#    #+#              #
#    Updated: 2016/08/24 19:51:32 by cmiron           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC = gcc -Wall -Wextra -Werror
NAME = bsq
SRC = functions.c check.c work.c main.c print.c -Iheader.h

all : $(NAME)

$(NAME):
	$(CC) $(SRC) -o $(NAME)

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all
