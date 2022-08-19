NAME	=	pipex

SRCS	=	pipex.c 	checker.c	utils.c

HEADER	=	include/pipex.h

OBJ		=	$(SRCS:%.c=%.o)

LIB		=	libft/libft.a

INCLUDE	=	-I

СС		=	gcc

FLAGS	=	-Wall -Wextra -Werror

RM		= rm -rf

.PHONY:		all	clean	fclean	re	bonus	libft

all:		libft $(NAME)

libft:
			@$(MAKE) -C libft/


$(NAME):	$(OBJ)
			$(CC) $(FLAGS) $(OBJ) $(LIB) -o $(NAME)
			@echo "\n< Complited $(NAME) >\n"
#			@say compilation of pipex is complited

%.o 	:	%.c $(HEADER)
			$(CC) $(FLAGS) -c $< -o $@

clean:
			@$(RM) $(OBJ)
			@$(MAKE) -C libft/ clean
			@echo "\n< Cleaning succeed >\n"

fclean:		clean
			@$(MAKE) -C libft/ fclean
			@$(RM) $(NAME)
			@echo "\n< All created files were deleted >\n"

re:			fclean all
			@echo "\n< Remake done >\n"