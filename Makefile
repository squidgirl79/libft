SRC=ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_toupper.c main.c

OBJ=$(SRC:.c=.o)

CPPFLAGS=-Wall -Wextra -Werror
CFLAGS=-O3
LDFLAGS=-lbsd

%.o: %.c libft.h
	cc $< -c $(CPPFLAGS) $(CFLAGS) -o $@
%.o: %.c

test: $(OBJ)
	cc $(OBJ) $(CPPFLAGS) $(CFLAGS) $(LDFLAGS) -o $@

run: test
	./test

all:

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf test

re:

.PHONY: run
