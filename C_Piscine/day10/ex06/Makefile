# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cmiron <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/16 14:32:35 by cmiron            #+#    #+#              #
#    Updated: 2016/08/16 14:43:29 by cmiron           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op

$(NAME):
	gcc -Wall -Wextra -Werror functions.c main.c operatori.c -I all.h -o $(NAME) 

all: $(NAME)

clean:
	rm -f do-op

fclean: clean

re: fclean all
