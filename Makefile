
SRCS		= ft_atoi.c	ft_isalnum.c ft_isascii.c ft_isprint.c ft_memcpy.c ft_strlen.c ft_tolower.c ft_bzero.c ft_isalpha.c ft_isdigit.c ft_memcmp.c ft_memset.c ft_strncmp.c ft_toupper.c ft_memmove.c ft_strlcpy.c ft_strchr.c ft_strrchr.c ft_memchr.c ft_strnstr.c ft_calloc.c ft_strlcat.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
B_SRCS		= ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c  ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c
OBJS		= ${SRCS:.c=.o}
B_OBJS 		= ${B_SRCS:.c=.o}
NAME		= libft.a
CC			= gcc 
FLAGS		= -Wall -Wextra -Werror
B_FLAGS		= -D
B_DEFINES	= LIST
all:		${NAME}
$(OBJS): %.o: %.c
	${CC} ${FLAGS} -c $< -o $@
$(B_OBJS): %.o: %.c
	${CC} ${FLAGS} ${B_FLAGS} ${B_DEFINES} -c $< -o $@
${NAME}:	${SRCS} ${OBJS}
	ar rc ${NAME} ${OBJS}
clean:
	rm -f ${OBJS} ${B_OBJS}
fclean:		clean 
	rm -f ${NAME}
re:			fclean all
bonus:		all ${B_OBJS}
	ar rc ${NAME} ${B_OBJS}
all_clean: all clean
re_clean: re clean
	@make clean;
re_bonus: re bonus
reb_clean: fclean bonus_clean
bonus_clean: all bonus clean

.PHONY: all clean fclean all_clean bonus_clean
