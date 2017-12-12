# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cmiron <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/18 15:20:42 by cmiron            #+#    #+#              #
#    Updated: 2016/08/18 15:35:15 by cmiron           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRC = ./display_file.c

TMP = ./display_file.o

all: $(NAME)

$(NAME) :
	gcc -Wall -Wextra -Werror -c $(SRC)
	gcc -o $(NAME) $(TMP)

clean :
	/bin/rm -f $(TMP)

fclean : clean
	/bin/rm -f $(NAME)

re : fclean all
