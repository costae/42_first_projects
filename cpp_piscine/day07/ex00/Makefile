NAME = whatever

COMP = clang++ -Wall -Wextra -Werror

SRC = whatever.cpp

OBJ = whatever.o

all: $(NAME)

$(NAME):
	$(COMP) $(SRC) -c $? $(SRC)
	$(COMP) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all