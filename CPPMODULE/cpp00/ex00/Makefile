SRC  = ./megaphone.cpp

CC =  clang++

NAME = megaphone

FLAGS = -Wall -Wextra -Werror
OBJS = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
		$(CC) $(FLAGS) -o $(NAME) $(OBJS)

clean:
		 rm -f $(OBJS)

fclean:	clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re