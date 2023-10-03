NAME = bsq
OBJS = ${FILES:.c=.o}
FILES = main.c file.c free.c init.c otheroptions.c
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