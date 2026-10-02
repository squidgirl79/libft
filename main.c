/* ************************************************************************** */
/*                                                                            */
/*                                                       .       42.fr        */
/*   main.c                                             ":"                   */
/*                                                    ___:____     |"\/"|     */
/*   By: embrugge <embrugge@student.codam.nl>       ,'        `.    \  /      */
/*                                                  |  O        \___/  |      */
/*   Created: 2026/10/01 20:11:36 by embrugge     ~^~^~^~^~^~^~^~^~^~^~^~^~   */
/*   Updated: 2026/10/01 20:36:00 by embrugge       ~   ~   ~   ~   ~   ~     */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <bsd/string.h>
#include <stdlib.h>
#include "libft.h"

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
	test_memset_case("bleh", '*', 10);
	test_memset_case("b", 'a', 0);
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

/*void	test_mem(void)*/
/*{*/
/*	//memcpy*/
/*	char	memcpy_dest[] = "hello world";*/
/*	char	memcpy_src[] = "good morning";*/
/*	char	memcpy_n = 8*sizeof(char);*/
/*	printf("memcpy_src: %s\n", memcpy_src);*/
/*	printf("memcpy_dest: %s\n", memcpy_dest);*/
/*	memcpy(memcpy_dest, memcpy_src, memcpy_n);*/
/*	printf("result: %s\n", memcpy_dest);*/
/**/
/*	char	ft_memcpy_dest[] = "hello world";*/
/*	char	ft_memcpy_src[] = "good morning";*/
/*	printf("ft_memcpy_src: %s\n", ft_memcpy_src);*/
/*	printf("ft_memcpy_dest: %s\n", ft_memcpy_dest);*/
/*	ft_memcpy(ft_memcpy_dest, ft_memcpy_src, memcpy_n);*/
/*	printf("result: %s\n", ft_memcpy_dest);*/
/*	//backwards memmove*/
/*	char	memmove_dest[] = "hello world";*/
/*	char	memmove_n = 6*sizeof(char);*/
/*	printf("memmove_dest: %s\n", memmove_dest + memmove_n/2);*/
/*	printf("memmove_src: %s\n", memmove_dest);*/
/*	memmove((memmove_dest + memmove_n/2), memmove_dest, memmove_n);*/
/*	printf("result: %s\n", memmove_dest + memmove_n/2);*/
/**/
/*	char	ft_memmove_dest[] = "hello world";*/
/*	printf("ft_memmove_dest: %s\n", ft_memmove_dest + memmove_n/2);*/
/*	printf("ft_memmove_src: %s\n", ft_memmove_dest);*/
/*	ft_memmove((ft_memmove_dest + memmove_n/2), ft_memmove_dest, memmove_n);*/
/*	printf("result: %s\n", ft_memmove_dest + memmove_n/2);*/
/*	//forwards memmove*/
/*	printf("memmove_src: %s\n", memmove_dest + memmove_n/2);*/
/*	printf("memmove_dest: %s\n", memmove_dest);*/
/*	memmove(memmove_dest, (memmove_dest + memmove_n/2), memmove_n);*/
/*	printf("result: %s\n", memmove_dest + memmove_n/2);*/
/**/
/*	printf("ft_memmove_src: %s\n", ft_memmove_dest + memmove_n/2);*/
/*	printf("ft_memmove_dest: %s\n", ft_memmove_dest);*/
/*	ft_memmove(ft_memmove_dest, (ft_memmove_dest + memmove_n/2), memmove_n);*/
/*	printf("result: %s\n", ft_memmove_dest + memmove_n/2);*/
/*}*/

/*void	test_strl(void)*/
/*{*/
/*	char	strlcpy_dst[50] = "hello world";*/
/*	char	strlcpy_src[] = "testing";*/
/*	size_t	strlcpy_size = 50*sizeof(char);*/
/*	printf("strlcpy_dst: %s\n", strlcpy_dst);*/
/*	printf("strlcpy_src: %s\n", strlcpy_src);*/
/*	printf("%zu\n", strlcpy(strlcpy_dst, strlcpy_src, strlcpy_size));*/
/*	printf("result: %s\n", strlcpy_dst);*/
/**/
/*	char	ft_strlcpy_dst[50] = "hello world";*/
/*	char	ft_strlcpy_src[] = "testing";*/
/*	printf("ft_strlcpy_dst: %s\n", ft_strlcpy_dst);*/
/*	printf("ft_strlcpy_src: %s\n", ft_strlcpy_src);*/
/*	printf("%zu\n", ft_strlcpy(ft_strlcpy_dst, ft_strlcpy_src, strlcpy_size));*/
/*	printf("result: %s\n", ft_strlcpy_dst);*/
/**/
/*	char	strlcat_dst[50] = "hello world";*/
/*	char	strlcat_src[] = "testing";*/
/*	size_t	strlcat_size = 50*sizeof(char);*/
/*	printf("strlcat_dst: %s\n", strlcat_dst);*/
/*	printf("strlcat_src: %s\n", strlcat_src);*/
/*	printf("%zu\n", strlcat(strlcat_dst, strlcat_src, strlcat_size));*/
/*	printf("result: %s\n", strlcat_dst);*/
/**/
/*	char	ft_strlcat_dst[50] = "hello world";*/
/*	char	ft_strlcat_src[] = "testing";*/
/*	printf("ft_strlcat_dst: %s\n", ft_strlcat_dst);*/
/*	printf("ft_strlcat_src: %s\n", ft_strlcat_src);*/
/*	printf("%zu\n", ft_strlcat(ft_strlcat_dst, ft_strlcat_src, strlcat_size));*/
/*	printf("result: %s\n", ft_strlcat_dst);*/
/*}*/

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
	/*printf("WANT: %s\n", strchr(s, c));*/
	/*printf("GOT:  %s\n", ft_strchr(s, c));*/
	if (strchr(s, c))
		printf("WANT: %s\n", strchr(s, c));
	else
		printf("WANT: NULL\n");
	if (ft_strchr(s, c))
		printf("GOT:  %s\n", ft_strchr(s, c));
	else
		printf("GOT:  NULL\n");
}

void	test_strchr(void)
{
	test_strchr_case("normal", "hello*world*hi", 42);
	test_strchr_case("no result", "hello world hi", 42);
}

void	test_strrchr_case(char *name, char *s, char c)
{
	printf("\nft_strrchr: %s\n", name);
	if (strrchr(s, c))
		printf("WANT: %s\n", strrchr(s, c));
	else
		printf("WANT: NULL\n");
	if (ft_strrchr(s, c))
		printf("GOT:  %s\n", ft_strrchr(s, c));
	else
		printf("GOT:  NULL\n");
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
	printf(" GOT: %d\n", ft_strncmp(s1, s2, n));
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

void	test_memchr_case(void)
{
	return ;
}

void	test_memchr(void)
{
	test_memchr_case();
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
}

void	test_strnstr_case(char *name, char *s1, char *s2, size_t n)
{
	printf("\nft_strnstr: %s\n", name);
	printf("Want: %s\n", strnstr(s1, s2, n));
	printf("Got:  %s\n", ft_strnstr(s1, s2, n));
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
	test_atoi_case("5a");
	test_atoi_case("bleh");
	test_atoi_case("--99");
	test_atoi_case("+42");
	test_atoi_case("79-79");
	test_atoi_case("-84");
	test_atoi_case("+-12");
	test_atoi_case("++300");
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
	test_calloc_case("overflow", 2000000000, sizeof(int));
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
	test_substr_case("hello*world", 42, 4);
	test_substr_case("hello*world", 'e', 1);
	test_substr_case("hello*world", 42, 0);
	test_substr_case("hello*world", 'o', 10);
	test_substr_case("hello*world", 'x', 4);
	test_substr_case("hello*world", 0, 4);
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
	test_strtrim_case("hello world!", "lrh !ed");
}

int	main(void)
{
	test_isalpha();
	test_isdigit();
	test_isalnum();
	test_isascii();
	test_isprint(); // NOT WORKING
	test_strlen();
	test_memset();
	test_bzero();
	/*test_memcpy();*/
	/*test_memmove();*/
	/*test_strlcpy();*/
	/*test_strlcat();*/
	test_toupper();
	test_tolower();
	test_strchr(); // CANT RETURN NULL?
	test_strrchr(); // CANT RETURN NULL?
	test_strncmp();
	/*test_memchr();*/
	/*test_memcmp(); // NOT WORKING*/
	test_strnstr();
	test_atoi();
	test_calloc();
	test_strdup();
//	THE FOLLOWING CAN'T BE COMPARED
	test_substr();
	test_strjoin();
	test_strtrim();
	return (1);
}
