# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/31 17:38:13 by lvirgini          #+#    #+#              #
#    Updated: 2021/12/22 21:04:40 by lvirgini         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ----------------- #
#	 VARIABLES		#
# ----------------- #

NAME 	=	materia

INC_DIR	=	includes includes/Character includes/Materia
INCLUDE	=	AMateria.hpp \
			Cure.hpp	\
			Ice.hpp 	\
			ICharacter.hpp \
			Character.hpp \
			IMateriaSource.hpp \
			MateriaSource.hpp
			
HEADERS =	$(foreach dir, $(INC_DIR), $(wildcard $(dir)/*.hpp) )

SRC_DIR	=	srcs
SRC		= 	main.cpp \
			AMateria.cpp \
			Cure.cpp \
			Ice.cpp \
			Character.cpp \
			MateriaSource.cpp \
		
		
#			ICharacter.cpp	Character.cpp \
#			AMateria.cpp	MateriaSource.cpp Cure.cpp	Ice.cpp

OBJ_DIR =	obj/
OBJ 	=	$(addprefix $(OBJ_DIR),$(SRC:%.cpp=%.o))

# ----------------- #
#	 COMPILATION	#
# ----------------- #

CC 		=	c++

CFLAG 	= 	-Wall -Wextra -std=c++98 -pedantic -g
IFLAG 	=	$(foreach dir, $(INC_DIR), -I $(dir)/ )


vpath %.cpp $(foreach dir, $(SRC_DIR)/, $(dir):)
vpath %.hpp $(foreach dir, $(INC_DIR)/, $(dir):)

# ----------------- #
#	  FONCTIONS		#
# ----------------- #

$(OBJ_DIR)%.o: %.cpp $(HEADERS)
			@mkdir -p $(OBJ_DIR)
			@echo "\033[32mCompilation of ... $(foreach file, $< , $(notdir $<))\033[0m"
			@$(CC) $(CFLAG) $(IFLAG) -o $@ -c $< 

$(NAME):	$(OBJ)
			@$(CC) $(CFLAG) $(IFLAG) $(OBJ) -o $@ 
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
