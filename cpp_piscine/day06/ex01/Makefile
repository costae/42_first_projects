NAME = serialize
FLAGS = -Wall -Wextra -Werror
SRC = main.cpp
OBJ = main.o

all : $(NAME)

$(NAME) :
	@clang++ $(FLAGS) $(SRC) -c $? $(SRC)
	@clang++ $(OBJ) -o $(NAME)

clean :
	@rm -rf $(OBJ)


fclean :	clean
	@rm -rf $(NAME)

re :	fclean all