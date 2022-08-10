# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dtwanda <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/10 18:28:39 by dtwanda           #+#    #+#              #
#    Updated: 2021/10/25 17:32:10 by dtwanda          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = $(shell find . -name "*.c")

SRCB = $(shell find . -name "*_bonus.c")

OBJ = ${SRC:.c=.o}

OBJB = ${SRCB:.c=.o}

%.o: %.c
	@gcc $(CFLAGS) -c $< -o $@

CFLAGS = -Wall -Werror -Wextra

COMPILE = gcc $(CFLAGS) -c

LIB = ar rc $(NAME)

RANLIB = ranlib $(NAME)

REMOVE = rm -f

all: $(NAME)

$(NAME): $(OBJ)
	@$(COMPILE) $(SRC)
	@$(LIB) $(OBJ)
	@$(RANLIB)

bonus: $(OBJB) 
	@$(COMPILE) $(SRC) $(SRCB)
	@$(LIB) $(OBJ) $(OBJB)
	@$(RANLIB)

clean:
	@$(REMOVE) $(OBJ) $(OBJB)

fclean: clean
	@$(REMOVE) $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus

