SRCS = ft_isnumber_test.c
CC = clang
CFLAGS = -Wall -Wextra -Werror
LDFLAGS = -fuse-ld=lld
LIBFT_FLAGS = -I../include -L../lib -lft
EXECS = $(SRCS:_test.c=_compiled_test)
all: $(EXECS)

%_compiled_test: %_test.c libft
	@if [ $(shell uname) == "Linux" ]; then\
		$(CC) $(LDFLAGS) $(LIBFT_FLAGS) $(CFLAGS) $< -o $@; \
	else \
		$(CC) $(LIBFT_FLAGS) $(CFLAGS) $< -o $@; \
	fi 
	@echo "Make: Compiled $<"

test: $(EXECS)
	@for exec in $(EXECS); do \
		echo "Make: test $$exec"; \
		./$$exec; \
	done
	
	@echo 'Make: Tests executed'

libft:
	@make -C ../
clean:
	@make -C ../ fclean
fclean: clean
	@rm -f $(EXECS)
	@echo 'Make: Cleaned';
re: fclean all
.PHONY: all test clean
