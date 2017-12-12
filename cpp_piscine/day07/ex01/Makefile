NAME = iter

COMP = clang++ -Wall -Wextra -Werror

SRC = iter.cpp

OBJ = iter.o

all: $(NAME)

$(NAME):
	$(COMP) $(SRC) -c $? $(SRC)
	$(COMP) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all