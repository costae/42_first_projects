# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cmiron <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/21 20:30:24 by cmiron            #+#    #+#              #
#    Updated: 2016/08/21 20:37:06 by cmiron           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = eval_expr

SRC += main.cpp
SRC += ft_functs.cpp
SRC += eval_expr.cpp

OBJ  = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME):
	g++ -Wall -Werror -Wextra -c $(SRC)
	g++ $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
