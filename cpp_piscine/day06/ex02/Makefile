NAME = base
FLAGS = -Wall -Wextra -Werror
SRC = main.cpp A.cpp B.cpp C.cpp Base.cpp
OBJ = main.o A.o B.o C.o Base.o

all : $(NAME)

$(NAME) :
	@clang++ $(FLAGS) $(SRC) -c $? $(SRC)
	@clang++ $(OBJ) -o $(NAME)

clean :
	@rm -rf $(OBJ)


fclean :	clean
	@rm -rf $(NAME)

re :	fclean all