NAME = array

COMP = clang++ -Wall -Wextra -Werror

SRC = Array.cpp main.cpp

OBJ = Array.o main.o

all: $(NAME)

$(NAME):
	$(COMP) $(SRC) -c $? $(SRC)
	$(COMP) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all