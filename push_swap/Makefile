# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dtwanda <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/26 16:15:24 by dtwanda           #+#    #+#              #
#    Updated: 2022/01/30 21:28:18 by dtwanda          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

NAME_B = checker

SRCS = 		push_swap.c 		add_struct.c		create_struct.c \
			errors.c 		push.c 		rotate.c \
			rrotate.c 		sort.c 		sort2.c \
			sort3.c 		sort4.c 		swap.c \

SRCS_B = 	checker.c 		add_struct.c		create_struct.c \
			errors.c 		push.c 		rotate.c \
			rrotate.c 		sort.c 		sort2.c \
			sort3.c 		sort4.c 		swap.c \

OBJ = $(SRCS:.c=.o)

OBJ_B = $(SRCS_B:.c=.o)

LIB = libft/libft.a 

HEADER = push_swap.h

CC = gcc

FLAGS = -Wall -Wextra -Werror

all:	libft $(NAME)

libft:	
			@make -C libft/

$(NAME):	$(OBJ)
			$(CC) $(FLAGS) $(OBJ) $(LIB) -o $(NAME)
			@echo "$(TURQUOISE)\n\t Complited $(NAME) \n$(END)"

%.o:		%.c $(INCLUDE)$(HEADER)
			$(CC) $(FLAGS)  -c $< -o $@ -I $(INCLUDE)

bonus:		libft $(OBJ_B)
			$(CC) $(FLAGS) $(OBJ_B) $(LIB) -o $(NAME_B)
			@echo "\n\tComplited $(NAME_B) \n"

clean:			
				@rm -rf $(OBJ) $(OBJ_B)
				make -C libft/ clean
				echo "Cleaning succeed\n"

fclean:			clean
						@make -C libft/ fclean
						rm -f $(NAME) $(NAME_B)
						echo "All files were deleted\n"

re:			fclean all
			echo "Remake done\n"

.PHONY:		all		clean	fclean		re		libft		bonus