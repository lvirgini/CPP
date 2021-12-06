# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/31 17:38:13 by lvirgini          #+#    #+#              #
#    Updated: 2021/12/06 13:35:29 by lvirgini         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ----------------- #
#	 VARIABLES		#
# ----------------- #

NAME =		megaphone

SRC		= 	megaphone.cpp

OBJ_DIR =	obj/
OBJ 	=	$(addprefix $(OBJ_DIR),$(SRC:%.cpp=%.o))

# ----------------- #
#	 COMPILATION	#
# ----------------- #

CC 		=	c++

CFLAG 	= 	-Wall -Wextra -Werror

# ----------------- #
#	  FONCTIONS		#
# ----------------- #

$(OBJ_DIR)%.o: %.cpp
			@mkdir -p $(OBJ_DIR)
			@echo "\033[32mCompilation de ... $(foreach file, $< , $(notdir $<))\033[0m"
			@$(CC) $(CFLAG) -o $@ -c $< 

$(NAME):	$(OBJ)
			@$(CC) $(CFLAG) $(OBJ) -o $@
			@echo "\033[32mC\n*     Compilation $(NAME)     *\t   \033[32;1m--> Complete\033[0m"

all:		$(NAME)

# ----------------- #
# 		CLEAN		#
# ----------------- #

clean:
			rm -rf $(OBJ_DIR)

fclean: clean
			rm -f $(NAME)

re: 	fclean all

.PHONY: all clean flcean re
