/* ************************************************************************** */
/*                                                                            */
/*                                                       .     codam.nl       */
/*   main.c                                             ":"                   */
/*                                                    ___:____     |"\/"|     */
/*   By: embrugge <embrugge@student.codam.nl>       ,'        `.    \  /      */
/*                                                  |  v~       \___/  |      */
/*   Created: 2026/10/01 20:11:36 by embrugge     ~^~^~^~^~^~^~^~^~^~^~^~^~   */
/*   Updated: 2026/10/08 16:40:25 by embrugge        ~       ~       ~        */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <bsd/string.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "libft.h"

void	test_lst(void);

void	test_isalpha(void)
{
	int	c;

	c = -256;
	printf("\nft_isalpha:\nWANT: ");
	while (c++ < 255)
		if (isalpha(c))
			printf("{%c} ", c);
	c = -256;
	printf("\nGOT:  ");
	while (c++ < 255)
		if (ft_isalpha(c))
			printf("{%c} ", c);
	printf("\n");
}

void	test_isdigit(void)
{
	int	c;

	c = -256;
	printf("\nft_isdigit:\nWANT: ");
	while (c++ < 255)
		if (isdigit(c))
			printf("{%c} ", c);
	c = -256;
	printf("\nGOT:  ");
	while (c++ < 255)
		if (ft_isdigit(c))
			printf("{%c} ", c);
	printf("\n");
}

void	test_isalnum(void)
{
	int	c;

	c = -256;
	printf("\nft_isalnum:\nWANT: ");
	while (c++ < 255)
		if (isalnum(c))
			printf("{%c} ", c);
	c = -256;
	printf("\nGOT:  ");
	while (c++ < 255)
		if (ft_isalnum(c))
			printf("{%c} ", c);
	printf("\n");
}

void	test_isascii(void)
{
	int	c;

	c = -256;
	printf("\nft_isascii:\nWANT: ");
	while (c++ < 255)
		if (isascii(c))
			printf("{%c} ", c);
	c = -256;
	printf("\nGOT:  ");
	while (c++ < 255)
		if (ft_isascii(c))
			printf("{%c} ", c);
	printf("\n");
}

void	test_isprint(void)
{
	int	c;

	c = -256;
	printf("\nft_isprint:\nWANT: ");
	while (c++ < 255)
		if (isprint(c))
			printf("{%c} ", c);
	c = -256;
	printf("\nGOT:  ");
	while (c++ < 255)
		if (ft_isprint(c))
			printf("{%c} ", c);
	printf("\n");
}

void	test_strlen_case(const char *name)
{
	printf("\nft_strlen: %s\n", name);
	printf("WANT: %zu\n", strlen(name));
	printf("GOT:  %zu\n", ft_strlen(name));
}

void	test_strlen(void)
{
	test_strlen_case("hello world!");
	test_strlen_case("");
	test_strlen_case("\0");
	test_strlen_case("*\0");
}

void	test_memset_case(char *name, int c, size_t n)
{
	char	*s1;
	char	*s2;

	s1 = strdup(name);
	s2 = strdup(name);
	printf("\nft_memset: %s\n", name);
	memset(s1, c, n);
	ft_memset(s2, c, n);
	printf("WANT: %s\n", s1);
	printf("GOT:  %s\n", s2);
	free(s1);
	free(s2);
}

void	test_memset(void)
{
	test_memset_case("hello", 42, 3);
	test_memset_case("2", '\0', 1);
	test_memset_case("bleh", '*', 4);
	test_memset_case("b", 'a', 0);
	test_memset_case("wow", '*', 1);
}

void	test_bzero_case(char *name, size_t n)
{
	char	*s1;
	char	*s2;

	s1 = strdup(name);
	s2 = strdup(name);
	printf("\nft_bzero: %s\n", name);
	bzero(s1, n);
	ft_bzero(s2, n);
	printf("WANT: %s\n", s1);
	printf("GOT:  %s\n", s2);
	free(s1);
	free(s2);
}

void	test_bzero(void)
{
	test_bzero_case("eight bytes", 8);
	test_bzero_case("zero bytes", 0);
}

void	test_memcpy_case(char *dest, size_t n, int offset)
{
	char	*m1;
	char	*m2;
	char	*m3;
	char	*m4;

	m1 = strdup(dest);
	m2 = strdup(dest);
	m3 = m1;
	m4 = m2;
	if (offset > 0)
	{
		m3 += offset;
		m4 += offset;
	}
	if (offset < 0)
	{
		m1 -= offset;
		m2 -= offset;
	}
	printf("\nft_memcpy: %s\n", dest);
	memcpy(m1, m3, n);
	ft_memcpy(m2, m4, n);
	printf("WANT: %s\n", m1);
	printf("WANT: %s\n", m3);
	printf("GOT:  %s\n", m2);
	printf("GOT:  %s\n", m4);
	if (offset > 0)
	{
		free(m1);
		free(m2);
	}
	if (offset < 0)
	{
		free(m3);
		free(m4);
	}
}

void	test_memcpy(void)
{
	test_memcpy_case("", 0, 2);
	test_memcpy_case("", 0, -2);
	test_memcpy_case("bleh....", 4, 2);
	test_memcpy_case("bleh....", 4, -2);
	test_memcpy_case("abcdefghijk", 5, 3);
	test_memcpy_case("abcdefghijk", 5, -3);
}

void	test_memmove_case(char *dest, size_t n, int offset)
{
	char	*m1;
	char	*m2;
	char	*m3;
	char	*m4;

	m1 = strdup(dest);
	m2 = strdup(dest);
	m3 = m1;
	m4 = m2;
	if (offset > 0)
	{
		m3 += offset;
		m4 += offset;
	}
	if (offset < 0)
	{
		m1 -= offset;
		m2 -= offset;
	}
	printf("\nft_memmove: %s\n", dest);
	memmove(m1, m3, n);
	ft_memmove(m2, m4, n);
	printf("WANT: %s\n", m1);
	printf("WANT: %s\n", m3);
	printf("GOT:  %s\n", m2);
	printf("GOT:  %s\n", m4);
	if (offset > 0)
	{
		free(m1);
		free(m2);
	}
	if (offset < 0)
	{
		free(m3);
		free(m4);
	}
}

void	test_memmove(void)
{
	test_memmove_case("hello world!", 4, 2);
	test_memmove_case("hello world!", 4, -2);
	test_memmove_case("bleh....", 4, 2);
	test_memmove_case("bleh....", 4, -2);
	test_memmove_case("abcdefghijk", 5, 3);
	test_memmove_case("abcdefghijk", 5, -3);
}

void	test_strlcpy_case(char *name, char *dst, char *src, size_t size)
{
	char	*dst1;
	char	*dst2;

	dst1 = calloc((size + 1), sizeof(char));
	dst2 = calloc((size + 1), sizeof(char));
	strncpy(dst1, dst, size);
	strncpy(dst2, dst, size);
	printf("\nft_strlcpy: %s\n", name);
	printf("WANT: {%zu} %s\n", strlcpy(dst1, src, size), dst1);
	printf("GOT:  {%zu} %s\n", ft_strlcpy(dst2, src, size), dst2);
	free(dst1);
	free(dst2);
}

// this doesnt work -vom (very helpful)
void	test_strlcpy(void)
{
	test_strlcpy_case("hello", "hello", "world", 3);
	test_strlcpy_case("hi\0     ", "hi\0     ", "hello", 5);
	test_strlcpy_case("world", "world", "hello world", 6);
	test_strlcpy_case("hi", "hi", "\0", 1);
}

void	test_strlcat_case(char *name, char *dst, char *src, size_t size)
{
	char	*dst1;
	char	*dst2;

	dst1 = calloc((size + 1), sizeof(char));
	dst2 = calloc((size + 1), sizeof(char));
	strncpy(dst1, dst, size);
	strncpy(dst2, dst, size);
	printf("\nft_strlcat: %s\n", name);
	printf("WANT: {%zu} %s\n", strlcat(dst1, src, size), dst1);
	printf("GOT:  {%zu} %s\n", ft_strlcat(dst2, src, size), dst2);
	free(dst1);
	free(dst2);
}

// this also doesn't work!!! be better next time. :)
void	test_strlcat(void)
{
	test_strlcat_case("hello\0     ", "hello\0     ", "world", 3);
	test_strlcat_case("hi\0     ", "hi\0     ", "hello", 5);
	test_strlcat_case("world\0   ", "world\0   ", "hello world", 6);
	test_strlcat_case("hi", "hi", "\0", 1);
}

void	test_toupper(void)
{
	int	c;

	c = -256;
	printf("\nft_toupper:\nWANT: ");
	while (c++ < 255)
		if (isprint(c))
			printf("{%c} ", toupper(c));
	c = -256;
	printf("\nGOT:  ");
	while (c++ < 255)
		if (isprint(c))
			printf("{%c} ", ft_toupper(c));
	printf("\n");
}

void	test_tolower(void)
{
	int	c;

	c = -256;
	printf("\nft_tolower:\nWANT: ");
	while (c++ < 255)
		if (isprint(c))
			printf("{%c} ", tolower(c));
	c = -256;
	printf("\nGOT:  ");
	while (c++ < 255)
		if (isprint(c))
			printf("{%c} ", ft_tolower(c));
	printf("\n");
}

void	test_strchr_case(char *name, char *s, char c)
{
	printf("\nft_strchr: %s\n", name);
	printf("WANT: %s\n", strchr(s, c));
	printf("GOT:  %s\n", ft_strchr(s, c));
}

void	test_strchr(void)
{
	test_strchr_case("normal", "hello*world*hi", 42);
	test_strchr_case("no result", "hello world hi", 42);
}

void	test_strrchr_case(char *name, char *s, char c)
{
	printf("\nft_strrchr: %s\n", name);
	printf("WANT: %s\n", strrchr(s, c));
	printf("GOT:  %s\n", ft_strrchr(s, c));
}

void	test_strrchr(void)
{
	test_strrchr_case("normal", "hello*world*hi", 42);
	test_strrchr_case("no result", "hello world hi", 42);
}

void	test_strncmp_case(char *name, char *s1, char *s2, size_t n)
{
	printf("\nft_strncmp: %s\n", name);
	printf("WANT: %d\n", strncmp(s1, s2, n));
	printf("GOT:  %d\n", ft_strncmp(s1, s2, n));
}

void	test_strncmp(void)
{
	test_strncmp_case("1", "ABC", "ABC", 9);
	test_strncmp_case("2", "ABC", "AB", 9);
	test_strncmp_case("3", "ABA", "ABZ", 9);
	test_strncmp_case("4", "ABJ", "ABC", 9);
	test_strncmp_case("5", "\201", "A", 9);
	test_strncmp_case("6", "ABC", "AB", 3);
	test_strncmp_case("7", "ABC", "AB", 2);
	test_strncmp_case("8", "ABC", "AB", 0);
}

void	test_memchr_case(char *name, char *s, char c, size_t n)
{
	printf("\nft_memchr: %s\n", name);
	printf("WANT: %s\n", (char *)memchr(s, c, n));
	printf("GOT:  %s\n", (char *)ft_memchr(s, c, n));
}

void	test_memchr(void)
{
	test_memchr_case("normal", "hello*world*hi", 42, 99);
	test_memchr_case("no result", "hello world hi", 42, 99);
	test_memchr_case("limited not found", "hello*world*hi", 42, 5);
	test_memchr_case("limited", "hello*world*hi", 42, 7);
}

void	test_memcmp_case(char *name, char *s1, char *s2, size_t n)
{
	printf("\nft_memcmp: %s\n", name);
	printf("Want: %d\n", memcmp(s1, s2, n));
	printf("Got:  %d\n", ft_memcmp(s1, s2, n));
}

void	test_memcmp(void)
{
	test_memcmp_case("1 byte (same)", "hello!", "hello!", 1);
	test_memcmp_case("1 byte (different)", "ello!", "hello!", 1);
	test_memcmp_case("limited (same)", "hello!", "hello!", 4);
	test_memcmp_case("limited (different)", "hello!", "hell!", 4);
	test_memcmp_case("1", "ABC", "ABC", 9);
	test_memcmp_case("2", "ABC", "AB", 9);
	test_memcmp_case("3", "ABA", "ABZ", 9);
	test_memcmp_case("4", "ABJ", "ABC", 9);
	test_memcmp_case("5", "\201", "A", 9);
	test_memcmp_case("6", "ABC", "AB", 3);
	test_memcmp_case("7", "ABC", "AB", 2);
	test_memcmp_case("8", "ABC", "AB", 0);
}

void	test_strnstr_case(char *name, char *s1, char *s2, size_t n)
{
	printf("\nft_strnstr: %s\n", name);
	printf("WANT: %s\n", strnstr(s1, s2, n));
	printf("GOT:  %s\n", ft_strnstr(s1, s2, n));
}

void	test_strnstr(void)
{
	test_strnstr_case("1", "helloworld", "ello", 99);
	test_strnstr_case("1", "helloworld", "wor", 99);
	test_strnstr_case("1", "helloworld", "worldg", 99);
	test_strnstr_case("1", "helloworld", "", 99);
	test_strnstr_case("1", "helloworld", "wo", 1);
	test_strnstr_case("1", "helloworld", "ello", 2);
	test_strnstr_case("1", "helloworld", "ello", 1);
	test_strnstr_case("1", "helloworld", "ello", 1);
}

void	test_atoi_case(const char *name)
{
	printf("\nft_atoi: %s\n", name);
	printf("WANT: %d\n", atoi(name));
	printf("GOT:  %d\n", ft_atoi(name));
}

void	test_atoi(void)
{
	test_atoi_case("135");
	test_atoi_case("");
	test_atoi_case(" 5a");
	test_atoi_case("bleh");
	test_atoi_case(" --99");
	test_atoi_case("  +42");
	test_atoi_case("   79-79");
	test_atoi_case("\n-84");
	test_atoi_case(" +-12");
	test_atoi_case("\n\n  ++300");
}

void	test_calloc_case(const char *name, size_t nmemb, size_t size)
{
	void	*s1;
	void	*s2;

	printf("\nft_calloc: %s\n", name);
	s1 = calloc(nmemb, size);
	s2 = ft_calloc(nmemb, size);
	printf("WANT: %p\n", s1);
	printf("GOT:  %p\n", s2);
	free(s1);
	free(s2);
}

void	test_calloc(void)
{
	test_calloc_case("normal", 8, sizeof(int));
	test_calloc_case("no size", 10, 0);
	test_calloc_case("no memb", 0, sizeof(char));
	test_calloc_case("overflow", __SIZE_MAX__, sizeof(int));
}

void	test_strdup_case(const char *name)
{
	char	*s1;
	char	*s2;

	printf("\nft_strdup: %s\n", name);
	s1 = strdup(name);
	s2 = ft_strdup(name);
	printf("WANT: %s\n", s1);
	printf("GOT:  %s\n", s2);
	free(s1);
	free(s2);
}

void	test_strdup(void)
{
	test_strdup_case("hello!");
	test_strdup_case("1234567890");
	test_strdup_case("hey\0!");
	test_strdup_case("");
}

void	test_substr_case(char *name, unsigned int start, size_t len)
{
	char	*s;

	printf("\nft_substr: %s\n", name);
	s = ft_substr(name, start, len);
	printf("GOT:  %s\n", s);
	free(s);
}

void	test_substr(void)
{
	test_substr_case("hello*world", 4, 99);
	test_substr_case("hello*world", 100, 99);
	test_substr_case("hello*world", 0, 99);
	test_substr_case("hello*world", 2, 99);
	test_substr_case("hello*world", 4, 99);
	test_substr_case("hello*world", 0, 99);
	test_substr_case("", 42, 4);
	test_substr_case("", 0, 4);
}

void	test_strjoin_case(char *name, char *s1, char *s2)
{
	char	*s;

	printf("\nft_strjoin: %s\n", name);
	s = ft_strjoin(s1, s2);
	printf("GOT:  %s\n", s);
	free(s);
}

void	test_strjoin(void)
{
	test_strjoin_case("1", "hello ", "world!");
}

void	test_strtrim_case(char *name, char *set)
{
	char	*s;

	printf("\nft_strtrim: %s\n", name);
	s = ft_strtrim(name, set);
	printf("GOT:  %s\n", s);
	free(s);
}

void	test_strtrim(void)
{
	test_strtrim_case(" ! ! hello worl!d! ! ! ", "! ");
	test_strtrim_case(" ! ! hello worl!d! ! ! ", "!");
	test_strtrim_case(" ! ! hello worl!d! ! ! ", " ");
	test_strtrim_case(" ! ! hello worl!d! ! ! ", "");
	test_strtrim_case("", "*");
	test_strtrim_case("*", "");
	test_strtrim_case("", "");
	test_strtrim_case("*", "*");
	test_strtrim_case("123", "321");
	test_strtrim_case("-+-=-+-", "=");
	test_strtrim_case("-+-=-+-", "+-");
	test_strtrim_case("-+-=-+-", "-");
}

void	test_split_case(char *name, char c)
{
	char	**s;
	char	**start;

	printf("\nft_split: %s\n", name);
	s = ft_split(name, c);
	printf("GOT:  ");
	start = s;
	while (*s)
	{
		printf("{%s} ", *s);
		free(*s);
		s++;
	}
	printf("\n");
	free(start);
}

void	test_split(void)
{
	test_split_case("hello*world", 42);
	test_split_case("*hello*world*", 42);
	test_split_case("1*2", 42);
	test_split_case("*1*2*", 42);
	test_split_case("1*2*", 42);
	test_split_case("hello**world", 42);
	test_split_case("hello***world*", 42);
	test_split_case("", 42);
	test_split_case("", 0);
	test_split_case("**1**2***", 42);
	test_split_case("  looong   string  separated   by spaces and   such  ", ' ');
}

void	test_itoa_case(int n)
{
	char	*s;

	printf("\nft_itoa: %d\n", n);
	s = ft_itoa(n);
	printf("GOT:  %s\n", s);
	free(s);
}

void	test_itoa(void)
{
	test_itoa_case(42);
	test_itoa_case(0);
	test_itoa_case(-0);
	test_itoa_case(-456);
	test_itoa_case(INT_MAX);
	test_itoa_case(INT_MIN);
}

char	strmapi_f1(unsigned int i, char c)
{
	char	ret;

	printf("^%d^", i);
	ret = toupper(c);
	return (ret);
}

char	strmapi_f2(unsigned int i, char c)
{
	char	ret;

	printf("^%d^", i);
	ret = tolower(c);
	return (ret);
}

char	strmapi_f3(unsigned int i, char c)
{
	char	ret;

	if (i % 2)
		ret = tolower(c);
	else
		ret = toupper(c);
	return (ret);
}

void	test_strmapi_case(char *name, char *s, char (*f)(unsigned int, char))
{
	char	*m;

	printf("\nft_strmapi: %s\n", name);
	printf("GOT:  ");
	m = ft_strmapi(s, f);
	printf("%s\n", m);
	free(m);
}

void	test_strmapi(void)
{
	test_strmapi_case("apply toupper", "Hello World!", strmapi_f1);
	test_strmapi_case("apply tolower", NULL, strmapi_f2);
	test_strmapi_case("empty function pointer", "Hello World!", 0);
	test_strmapi_case("funny test", "QQQwwwEEErrrTTTyyy", strmapi_f3);
}

void	striteri_f1(unsigned int i, char *c)
{
	printf("^%d^", i);
	*c = toupper(*c);
}

void	striteri_f2(unsigned int i, char *c)
{
	printf("^%d^", i);
	*c = tolower(*c);
}

void	striteri_f3(unsigned int i, char *c)
{
	if (i % 2)
		*c = tolower(*c);
	else
		*c = toupper(*c);
}

void	test_striteri_case(char *name, char *s, void (*f)(unsigned int, char*))
{
	char	*i;

	i = NULL;
	if (s)
		i = strdup(s);
	printf("\nft_striteri: %s\n", name);
	printf("GOT:  ");
	ft_striteri(i, f);
	printf("%s\n", i);
	free(i);
}

void	test_striteri(void)
{
	test_striteri_case("apply toupper", "Hello World!", striteri_f1);
	test_striteri_case("apply tolower", NULL, striteri_f2);
	test_striteri_case("empty function pointer", "Hello World!", 0);
	test_striteri_case("funny test", "QQQwwwEEErrrTTTyyy", striteri_f3);
}

void	test_putchar_fd_case(char *name, char c, char *file)
{
	int	fd;

	fd = 1;
	if (file)
		fd = open(file, O_RDWR);
	printf("\nft_putchar_fd: %s\n", name);
	printf("GOT:  \n");
	ft_putchar_fd(c, fd);
	if (fd != 1)
		close(fd);
	printf("\n");
}

void	test_putchar_fd(void)
{
	test_putchar_fd_case("1", '*', "output.txt");
	test_putchar_fd_case("2", 'c', NULL);
	test_putchar_fd_case("3", '2', NULL);
	test_putchar_fd_case("4", '?', NULL);
}

void	test_putstr_fd_case(char *name, char *c, char *file)
{
	int	fd;

	fd = 1;
	if (file)
		fd = open(file, O_RDWR);
	printf("\nft_putstr_fd: %s\n", name);
	printf("GOT:  \n");
	ft_putstr_fd(c, fd);
	if (fd != 1)
		close(fd);
	printf("\n");
}

void	test_putstr_fd(void)
{
	test_putstr_fd_case("1", "hello world", "output.txt");
	test_putstr_fd_case("2", "test hi", NULL);
	test_putstr_fd_case("3", "blehh blehh", NULL);
	test_putstr_fd_case("4", "?????", NULL);
}

void	test_putendl_fd_case(char *name, char *c, char *file)
{
	int	fd;

	fd = 1;
	if (file)
		fd = open(file, O_RDWR);
	printf("\nft_putendl_fd: %s\n", name);
	printf("GOT:  \n");
	ft_putendl_fd(c, fd);
	if (fd != 1)
		close(fd);
	printf("\n");
}

void	test_putendl_fd(void)
{
	test_putendl_fd_case("1", "hello world", "output.txt");
	test_putendl_fd_case("2", "test hi", NULL);
	test_putendl_fd_case("3", "blehh blehh", NULL);
	test_putendl_fd_case("4", "?????", NULL);
}

void	test_putnbr_fd_case(char *name, int n, char *file)
{
	int	fd;

	fd = 1;
	if (file)
		fd = open(file, O_RDWR);
	printf("\nft_putnbr_fd: %s\n", name);
	printf("GOT:  \n");
	ft_putnbr_fd(n, fd);
	if (fd != 1)
		close(fd);
	printf("\n");
}

void	test_putnbr_fd(void)
{
	test_putnbr_fd_case("87953", 87953, "output.txt");
	test_putnbr_fd_case("-496", -496, NULL);
	test_putnbr_fd_case("-0", -0, NULL);
	test_putnbr_fd_case("0", 0, NULL);
	test_putnbr_fd_case("int max", INT_MAX, NULL);
	test_putnbr_fd_case("int min", INT_MIN, NULL);
	test_putnbr_fd_case("3764", 3764, NULL);
	test_putnbr_fd_case("64643", 64643, NULL);
	test_putnbr_fd_case("-854623", -854623, NULL);
	test_putnbr_fd_case("-5623", -5623, NULL);
}

int	main(void)
{
	test_isalpha();
	test_isdigit();
	test_isalnum();
	test_isascii();
	test_isprint();
	test_strlen();
	test_memset(); // i dont know how to test mem functions
	test_bzero();
	test_memcpy();
	test_memmove();
	test_strlcpy();
	test_strlcat();
	test_toupper();
	test_tolower();
	test_strchr(); // confused about return null
	test_strrchr(); // confused about return null
	test_strncmp();
	test_memchr();
	test_memcmp();
	test_strnstr();
	test_atoi();
	test_calloc();
	test_strdup();

	test_substr();
	test_strjoin();
	test_strtrim();
	test_split(); // needs to free in case of error
	test_itoa();
	test_strmapi();
	test_striteri();
	test_putchar_fd();
	test_putstr_fd();
	test_putendl_fd();
	test_putnbr_fd();

	test_lst(); // in a different file
	return (0);
}
