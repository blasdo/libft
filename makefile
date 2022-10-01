
SRCS	= ft_atoi.c	ft_isalnum.c ft_isascii.c ft_isprint.c ft_memcpy.c ft_strlen.c ft_tolower.c ft_bzero.c ft_isalpha.c ft_isdigit.c ft_memcmp.c ft_memset.c ft_strncmp.c ft_toupper.c ft_memmove.c
OBJS	= ${SRCS:.c=.o}
NAME	= libft.a
CC		= cc
all:		${NAME}
${NAME}:	${OBJS}
	ar rc ${NAME} ${OBJS}
clean:
	rm -f ${OBJS}
fclean:		clean
	rm -f ${NAME}
re:			fclean all
