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

NAME = hell

CC =		c++
CFLAGS =	-Wall #-Wextra -Werror -std=c++98 -pedantic

SRC_DIR = src/
OBJ_DIR =	obj/
INCL_DIR = include/

SRC =		main.cpp Bureaucrat.cpp Form.cpp
OBJ =		$(addprefix $(OBJ_DIR), $(SRC:.cpp=.o))

.PHONY: all clean fclean re

all:		$(NAME)
	@:

$(NAME):	$(OBJ)
	@$(CC) -o $(NAME) $(OBJ) $(CFLAGS)
	@echo "\033[34mCompiled successfully!\033[0m"

$(OBJ):		| $(OBJ_DIR)

$(OBJ_DIR):
	@mkdir $(OBJ_DIR)

$(OBJ_DIR)%.o:	$(SRC_DIR)%.cpp $(INCL_DIR)*.hpp
	@echo "\033[33mCompiling $<...\033[0m"
	@$(CC) -c $< -o $@ $(CFLAGS)

clean:
	@rm -rf $(OBJ_DIR)
	@echo "\033[32mCleaned!\033[0m"

fclean:		clean
	@rm -f $(NAME)

re:			fclean all
