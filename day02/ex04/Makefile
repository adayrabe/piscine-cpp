
NAME := eval_expr

SRC_DIR := ./src/
INC_DIR := ./inc/
OBJ_DIR := ./obj/
INC_DIR := ./inc/

SRC := $(wildcard src/*.cpp)
OBJ = $(addprefix $(OBJ_DIR), $(SRC:src/%.cpp=%.o))
FLAGS := -Wall -Wextra -Werror

all: $(NAME)

$(NAME) : $(OBJ) $(INC_DIR)*
	clang++ $(FLAGS) $(OBJ) -o $(NAME)

$(OBJ_DIR)%.o:%.cpp
	mkdir -p obj
	clang++ $(FLAGS) -I inc/ -c $< -o $@
clean:
	rm -rf $(OBJ_DIR)
fclean: clean
	rm -rf $(NAME)
re: fclean all

.PHONY: all clean fclean re
vpath %.cpp $(SRC_DIR)
