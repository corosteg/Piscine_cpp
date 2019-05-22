NAME = replace

CPPFLAGS = -Wall -Wextra -Werror -g

SRC = main.cpp

OBJ = $(SRC:.cpp=.o)

all: ${NAME}

${NAME}: ${OBJ}
	clang++ ${CPPFLAGS} -o $@ ${OBJ}

clean:
	@/bin/rm -f ${OBJ}

fclean: clean
	@/bin/rm -f ${NAME}
	@/bin/rm -f *.replace

re: fclean all