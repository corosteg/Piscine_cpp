NAME = a.out

SRC_NAME = Bureaucrat.cpp Form.cpp  main.cpp

OBJ_PATH = obj

OBJ_NAME = $(SRC_NAME:.cpp=.o)

SRC = $(SRC_NAME)

OBJ = $(addprefix $(OBJ_PATH)/,$(OBJ_NAME))

FLAGS = -Wall -Werror -Wextra -std=c++98

NORMAL = "\x1B[0m"
RED = "\x1B[31m"
GREEN = "\x1B[32m"
YELLOW = "\x1B[33m"
BLUE = "\x1B[34m"
MAGENTA = "\x1B[35m"
CYAN = "\x1B[36m"
WHITE = "\x1B[37m"

all: $(NAME)

$(NAME): $(OBJ)
	@clang++ -o $(NAME) $(OBJ)
	@printf $(GREEN)"[COMPILED] Executable $(NAME) Created.\n"$(NORMAL)

$(OBJ_PATH)/%.o: %.cpp
	@mkdir $(OBJ_PATH) 2> /dev/null || true
	@clang++ -c $(FLAGS) -o $@ -c $<

cc:
	clang++ $(SRC_NAME) -o $(NAME)

clean:
	@rm -f $(OBJ)
	@rmdir $(OBJ_PATH) 2> /dev/null || true
	@printf $(YELLOW)"[CLEANED] Remove Obj directory.\n"$(NORMAL)

fclean: clean
	@rm -f $(NAME)
	@printf $(YELLOW)"[FCLEANED] Remove Executable : $(NAME)\n"$(NORMAL)

re: fclean all

.PHONY: all, clean, fclean, re
