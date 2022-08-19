# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dtwanda <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/05 14:15:34 by dtwanda           #+#    #+#              #
#    Updated: 2022/05/05 14:15:37 by dtwanda          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = philo
CC = gcc -Wall -Wextra -Werror
CLIBFLAGS = -lncurses

RM = rm -rf

INC = include
OBJ_DIR = gotovo

HEADERS = $(wildcard $/*.h)

SRCS = $(wildcard *.c)

OBJS = $(addprefix $(OBJ_DIR)/, $(notdir $(SRCS:.c=.o)))
	
all : $(NAME)

clean :
	@$(RM) $(OBJ_DIR)
	@printf "Cleaning $(NAME)'s Object files...\n"

fclean : clean
	@$(RM) $(NAME)
	@printf "Cleaning $(NAME)\n"

re : fclean all

$(OBJ_DIR) :
	@mkdir $(OBJ_DIR)

$(OBJ_DIR)/%.o : %.c | $(OBJ_DIR)
	@$(CC) -I $(INC) -c $< -o $@
	@printf "Create $@ from $<\n"

$(NAME) : $(HEADERS) $(OBJS)
	@$(CC) -I $(INC) $(CLIBFLAGS) $(OBJS) -o $@
	@printf "\nSuccessfully Created Object files!\n"

.PHONY: all clean fclean re bonus
