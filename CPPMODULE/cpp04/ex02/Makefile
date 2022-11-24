SRC =  main.cpp AAnimal.cpp Cat.cpp Dog.cpp Brain.cpp 

OBJ = $(SRC:.cpp=.o)

NAME = ex02

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