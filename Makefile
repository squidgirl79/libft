SRC=ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_split.c ft_strchr.c ft_strdup.c ft_strjoin.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strtrim.c ft_substr.c ft_toupper.c

NAME=libft.a
OBJ=$(SRC:.c=.o)

CFLAGS=-g -Wall -Wextra -Werror
LDFLAGS=-lbsd

%.o: %.c libft.h
	cc $< -c $(CFLAGS) -o $@

test: $(OBJ) main.c
	cc $(OBJ) main.c $(CFLAGS) $(LDFLAGS) -o $@

run: test
	./test

all:

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf test

re:

.PHONY: run
