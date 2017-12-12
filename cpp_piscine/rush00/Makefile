NAME = ft_retro
FLAGS = -Wall -Werror -Wextra
SRC = Bullet.cpp Enemy.cpp main.cpp Map.cpp Player.cpp
OBJ = Bullet.o Enemy.o main.o Map.o Player.o

all: $(NAME)
$(NAME):
	g++ $(FLAGS) $(SRC) -c $? $(SRC)
	g++ $(OBJ) -lncurses -lm -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
