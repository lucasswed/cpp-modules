# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/09 15:07:52 by lucas-ma          #+#    #+#              #
#    Updated: 2023/05/03 14:47:42 by lucas-ma         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

################ PROGRAM ################

NAME	=	mutantstack

################ TERMINAL ###############

RMV		=	rm -f
MKD		=	mkdir
PRT		=	printf
MKE		=	make
CPY		=	cp

################# COLORS ################

--GRN	=	\033[32m
--RED	=	\033[31m
--WHT	=	\033[39m

################# DIRS ##################

_SRC	=	src/
_OBJ	=	obj/
_LIB	=	libs/
_BIN	=	./

############### COMPILER ################

CC		=	c++
CFLAGS	=	-Wall -Werror -Wextra -std=c++98 -g #-fsanitize=address -Wshadow -Wno-shadow
#valgrind --leak-check=full --show-leak-kinds=all ./
SRCS	=	$(_SRC)main.cpp
OBJS	=	$(patsubst $(_SRC)%.cpp,$(_OBJ)%.o,$(SRCS))
DEPS	=
LIBS	=

################ RULES ##################

all: $(NAME)

$(_OBJ)%.o: $(_SRC)%.cpp
	$(MKD) -p $(@D)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(DEPS) $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

################ DEPS ###################

############## STRUCTURE ################

clean:
	$(RMV) -r $(_OBJ)

fclean: clean
	$(RMV) -r $(NAME)
	
re: fclean all

rebonus: fclean bonus

.PHONY: all deps clean fclean re
