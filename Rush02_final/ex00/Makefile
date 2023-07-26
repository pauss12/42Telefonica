NAME = rush-02
OBJS = ${FILES:.c=.o}
FILES = main.c digits.c file.c file_activities.c conversion.c numberSearch.c
COMPILER = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

${NAME}: ${OBJS}
	${COMPILER} ${CFLAGS} -o ${NAME} ${OBJS}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all