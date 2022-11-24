SRC =  main.cpp AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp

OBJ = $(SRC:.cpp=.o)

NAME = ex03

CC = clang++

FLAGS = -Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
		$(CC) $(FLAGS) -o $(NAME) $(OBJ)

clean:
			rm -f $(OBJ)

fclean:	clean
			rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re