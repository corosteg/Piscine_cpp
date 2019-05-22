NAME = des

CPPFLAGS = -Wall -Wextra -Werror -g

SRC = des.cpp

OBJ = $(SRC:.cpp=.o)

all: ${NAME}

${NAME}: ${OBJ}
	c++ ${CPPFLAGS} -o $@ ${OBJ}

clean:
	@/bin/rm -f ${OBJ}

fclean: clean
	@/bin/rm -f ${NAME}
	@/bin/rm -f *.replace

re: fclean all