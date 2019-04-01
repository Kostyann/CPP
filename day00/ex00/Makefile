# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kmerkulo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/01 10:31:48 by kmerkulo          #+#    #+#              #
#    Updated: 2019/04/01 10:31:50 by kmerkulo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

CC =		c++
CFLAGS =	-Wall -Wextra -Werror

SRC =		megaphone.cpp
OBJ =		$(SRC:.cpp=.o)

.PHONY: all clean fclean re

all:		$(NAME)
	@:

$(NAME):	$(OBJ)
	@$(CC) -o $(NAME) $(OBJ) $(CFLAGS)
	@echo "\033[34mCompiled successfully!\033[0m"

$(OBJ)%.o:	$(SRC)%.cpp
	@echo "\033[33mCompiling $<...\033[0m"
	@$(CC) -c $< -o $@ $(CFLAGS)

clean:
	@rm -f $(OBJ)
	@echo "\033[32mCleaned!\033[0m"

fclean:		clean
	@rm -f $(NAME)

re:			fclean all
