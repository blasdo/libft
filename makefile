
SRCS	= casting_methods.c char_manipulation.c evaluation_methods0.c evaluation_methods1.c memory_and_strings_copy_methods.c
OBJS	= ${SRCS:.c=.o}
NAME	= libft.a
CC		= cc
all:		${NAME}
${NAME}:	${OBJS}
	ar rc ${NAME} ${OBJS}
clean:
	rm -f ${OBJS}
fclean:		clean
	rm ${NAME}
