# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cmiron <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/10/23 16:18:45 by cmiron            #+#    #+#              #
#    Updated: 2016/11/02 16:56:44 by cmiron           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC = ft*.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -c $? $(SRC)
	ar rc $(NAME) $? $(OBJ)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm $(NAME)

re: fclean all

.PHONY: clean
