NAME = bsq
OBJS = ${FILES:.c=.o}
FILES = otherfunctions.c print_solution.c getvariables.c print.c main.c
COMPILER = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

${NAME}: ${OBJS}
	${COMPILER} ${CFLAGS} -o ${NAME} ${OBJS}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: clean fclean re