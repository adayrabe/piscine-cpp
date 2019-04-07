# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akulaiev <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/01 19:48:51 by akulaiev          #+#    #+#              #
#    Updated: 2019/04/01 19:48:53 by akulaiev         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =	main.cpp\
		Render.cpp\
		GameObj.cpp\
		Player.cpp\
		Attack.cpp\
		AttackSourceEnemy.cpp\
		AttackSourcePlayer.cpp\
		Enemy.cpp\
		Enemies.cpp\
		PlayerAttacks.cpp
SRC_DIR = ./src/
OBJ_DIR = ./obj/
OBJ = $(addprefix $(OBJ_DIR),$(SRC:.cpp=.o))
NAME = rush
CFLAG = -Wall -Wextra -Werror
CC = clang++
INC =	./inc/Render.hpp\
		./inc/Player.hpp\
		./inc/GameObj.hpp\
		./inc/Attack.hpp\
		./inc/Enemy.hpp\
		./inc/AttackSourceEnemy.hpp\
		./inc/AttackSourcePlayer.hpp\
		./inc/Enemy.hpp\
		./inc/Enemies.hpp\
		./inc/PlayerAttacks.hpp
all: $(NAME)

$(NAME): $(OBJ_DIR) $(OBJ)
	$(CC) $(CFLAG) -lncurses $(OBJ) -o $(NAME)

$(OBJ_DIR):
	mkdir $(OBJ_DIR)

$(OBJ_DIR)%.o:$(SRC_DIR)%.cpp $(INC)
	$(CC) $(CFLAG) -I/includes -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

exe:
	./$(NAME)

re: fclean all

commit:
	make fclean
	git add -A
	git commit -m "$(MSG)"
	git push
