NAME = megaphone
SRC = megaphone.cpp
OBJ = megaphone.o
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	@clang++ $(FLAGS) $(SRC) -c $? $(SRC)
	@clang++ $(OBJ) -o $(NAME)

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all