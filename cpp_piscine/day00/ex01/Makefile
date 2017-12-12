NAME = phonebook
SRC = main.cpp phonebook.class.cpp
OBJ = main.o phonebook.class.o
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