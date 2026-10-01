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
#include "libft.h"

#include <ctype.h>
#include <bsd/string.h>

void	test_ctype(void)
{
	int c;
	
	printf("\n isalpha: \n");
	for(c = -256; c <= 255; ++c)
		if (isalpha(c))
			printf("%c {%i} ", c, isalpha(c));
	printf("\n ft_isalpha: \n");
	for(c = -256; c <= 255; ++c)
		if (ft_isalpha(c))
			printf("%c {%i} ", c, ft_isalpha(c));

	printf("\n isdigit: \n");
	for(c = -256; c <= 255; ++c)
		if (isdigit(c))
			printf("%c {%i} ", c, isdigit(c));
	printf("\n ft_isdigit: \n");
	for(c = -256; c <= 255; ++c)
		if (ft_isdigit(c))
			printf("%c {%i} ", c, ft_isdigit(c));

	printf("\n isalnum: \n");
	for(c = -256; c <= 255; ++c)
		if (isalnum(c))
			printf("%c {%i} ", c, isalnum(c));
	printf("\n ft_isalnum: \n");
	for(c = -256; c <= 255; ++c)
		if (ft_isalnum(c))
			printf("%c {%i} ", c, ft_isalnum(c));

	printf("\n isascii: \n");
	for(c = -256; c <= 255; ++c)
		if (isascii(c))
			printf("%c {%i} ", c, isascii(c));
	printf("\n ft_isascii: \n");
	for(c = -256; c <= 255; ++c)
		if (ft_isascii(c))
			printf("%c {%i} ", c, ft_isascii(c));

	printf("\n isprint: \n");
	for(c = -256; c <= 255; ++c)
		if (isprint(c))
			printf("%c {%i} ", c, isprint(c));
	printf("\n ft_isprint: \n");
	for(c = -256; c <= 255; ++c)
		if (ft_isprint(c))
			printf("%c {%i} ", c, ft_isprint(c));

	printf("\n toupper: \n");
	for(c = -1; c <= 128; ++c)
		if (toupper(c))
			printf("%c {%c} ", c, toupper(c));
	printf("\n tolower: \n");
	for(c = -1; c <= 128; ++c)
		if (tolower(c))
			printf("%c {%c} ", c, tolower(c));
	printf("\n ft_toupper: \n");
	for(c = -1; c <= 128; ++c)
		if (ft_toupper(c))
			printf("%c {%c} ", c, ft_toupper(c));
	printf("\n ft_tolower: \n");
	for(c = -1; c <= 128; ++c)
		if (ft_tolower(c))
			printf("%c {%c} ", c, ft_tolower(c));

	return ;
}

void	print_array(int *arr)
{
	while (*arr)
		printf("{%d} ", *arr++);
}

void	test_string(void)
{
	char	*strlen_s = "Hel\0lo Wor\nld\0!";
	printf("\n\"%s\"\n", strlen_s);
	printf("\n strlen: \n %lu \n", strlen(strlen_s));
	printf("\n ft_strlen: \n %lu \n", ft_strlen(strlen_s));

	char	memset_s[] = "hello world";
	int		memset_i[] = {1, 2, 3, 4, 5, 6, 7, 8};
	size_t	memset_n = 5*sizeof(char);
	printf("\n memset char: \n %s \n", memset_s);
	bzero(memset_s, memset_n);
	printf("\n result: \n %s \n", memset_s);
	memset_n = 9*sizeof(int);
	print_array(memset_i);
	bzero(memset_i, memset_n);
	print_array(memset_i);

	char	ft_memset_s[] = "hello world";
	int		ft_memset_i[] = {1, 2, 3, 4, 5, 6, 7, 8};
	size_t	ft_memset_n = 5*sizeof(char);
	printf("\n ft_memset char: \n %s \n", ft_memset_s);
	ft_bzero(ft_memset_s, ft_memset_n);
	printf("\n result: \n %s \n", ft_memset_s);
	ft_memset_n = 9*sizeof(int);
	print_array(ft_memset_i);
	ft_bzero(ft_memset_i, ft_memset_n);
	print_array(ft_memset_i);

	printf("\n\n");
}

void	test_mem(void)
{
	//memcpy
	char	memcpy_dest[] = "hello world";
	char	memcpy_src[] = "good morning";
	char	memcpy_n = 8*sizeof(char);
	printf("memcpy_src: %s\n", memcpy_src);
	printf("memcpy_dest: %s\n", memcpy_dest);
	memcpy(memcpy_dest, memcpy_src, memcpy_n);
	printf("result: %s\n", memcpy_dest);

	char	ft_memcpy_dest[] = "hello world";
	char	ft_memcpy_src[] = "good morning";
	printf("ft_memcpy_src: %s\n", ft_memcpy_src);
	printf("ft_memcpy_dest: %s\n", ft_memcpy_dest);
	ft_memcpy(ft_memcpy_dest, ft_memcpy_src, memcpy_n);
	printf("result: %s\n", ft_memcpy_dest);
	//backwards memmove
	char	memmove_dest[] = "hello world";
	char	memmove_n = 6*sizeof(char);
	printf("memmove_dest: %s\n", memmove_dest + memmove_n/2);
	printf("memmove_src: %s\n", memmove_dest);
	memmove((memmove_dest + memmove_n/2), memmove_dest, memmove_n);
	printf("result: %s\n", memmove_dest + memmove_n/2);

	char	ft_memmove_dest[] = "hello world";
	printf("ft_memmove_dest: %s\n", ft_memmove_dest + memmove_n/2);
	printf("ft_memmove_src: %s\n", ft_memmove_dest);
	ft_memmove((ft_memmove_dest + memmove_n/2), ft_memmove_dest, memmove_n);
	printf("result: %s\n", ft_memmove_dest + memmove_n/2);
	//forwards memmove
	printf("memmove_src: %s\n", memmove_dest + memmove_n/2);
	printf("memmove_dest: %s\n", memmove_dest);
	memmove(memmove_dest, (memmove_dest + memmove_n/2), memmove_n);
	printf("result: %s\n", memmove_dest + memmove_n/2);

	printf("ft_memmove_src: %s\n", ft_memmove_dest + memmove_n/2);
	printf("ft_memmove_dest: %s\n", ft_memmove_dest);
	ft_memmove(ft_memmove_dest, (ft_memmove_dest + memmove_n/2), memmove_n);
	printf("result: %s\n", ft_memmove_dest + memmove_n/2);
}

void	test_strl(void)
{
	char	strlcpy_dst[] = "hello world";
	char	strlcpy_src[] = "testing";
	size_t	strlcpy_size = 50*sizeof(char);
	printf("strlcpy_dst: %s\n", strlcpy_dst);
	printf("strlcpy_src: %s\n", strlcpy_src);
	printf("%zu\n", strlcpy(strlcpy_dst, strlcpy_src, strlcpy_size));
	printf("result: %s\n", strlcpy_dst);

	char	ft_strlcpy_dst[] = "hello world";
	char	ft_strlcpy_src[] = "testing";
	printf("ft_strlcpy_dst: %s\n", ft_strlcpy_dst);
	printf("ft_strlcpy_src: %s\n", ft_strlcpy_src);
	printf("%zu\n", ft_strlcpy(ft_strlcpy_dst, ft_strlcpy_src, strlcpy_size));
	printf("result: %s\n", ft_strlcpy_dst);

	char	strlcat_dst[] = "hello world";
	char	strlcat_src[] = "testing";
	size_t	strlcat_size = 50*sizeof(char);
	printf("strlcat_dst: %s\n", strlcat_dst);
	printf("strlcat_src: %s\n", strlcat_src);
	printf("%zu\n", strlcat(strlcat_dst, strlcat_src, strlcat_size));
	printf("result: %s\n", strlcat_dst);

	char	ft_strlcat_dst[] = "hello world";
	char	ft_strlcat_src[] = "testing";
	printf("ft_strlcat_dst: %s\n", ft_strlcat_dst);
	printf("ft_strlcat_src: %s\n", ft_strlcat_src);
	printf("%zu\n", ft_strlcat(ft_strlcat_dst, ft_strlcat_src, strlcat_size));
	printf("result: %s\n", ft_strlcat_dst);
}

void	test_strncmp_case(char *name, char *s1, char *s2, size_t n)
{
	printf("ft_strncmp: %s\n", name);
	printf("WANT: %d\n", strncmp(s1, s2, n));
	printf(" GOT: %d\n\n", ft_strncmp(s1, s2, n));
}

void	test_strchr(void)
{
	char	strchr_s[] = "hello\0*world\0hi";
	int		strchr_c = '5';
	printf("strchr_s: %s\n", strchr_s);
	printf("strchr_c: %c\n", strchr_c);
	printf("%s\n", strchr(strchr_s, strchr_c));
	
	char	ft_strchr_s[] = "hello\0*world\0hi";
	printf("ft_strchr_s: %s\n", ft_strchr_s);
	printf("ft_strchr_c: %c\n", strchr_c);
	printf("%s\n", ft_strchr(ft_strchr_s, strchr_c));

	char	strrchr_s[] = "hello\0*world\0hi";
	printf("strrchr_s: %s\n", strrchr_s);
	printf("strrchr_c: %c\n", strchr_c);
	printf("%s\n", strrchr(strrchr_s, strchr_c));
	
	char	ft_strrchr_s[] = "hello\0*world\0hi";
	printf("ft_strrchr_s: %s\n", ft_strrchr_s);
	printf("ft_strrchr_c: %c\n", strchr_c);
	printf("%s\n", ft_strrchr(ft_strrchr_s, strchr_c));

	test_strncmp_case("1", "ABC", "ABC", 9);
	test_strncmp_case("2", "ABC", "AB", 9);
	test_strncmp_case("3", "ABA", "ABZ", 9);
	test_strncmp_case("4", "ABJ", "ABC", 9);
	test_strncmp_case("5", "\201", "A", 9);
	test_strncmp_case("6", "ABC", "AB", 3);
	test_strncmp_case("7", "ABC", "AB", 2);
	test_strncmp_case("8", "ABC", "AB", 0);
}

void	test_memcmp_case(char *name, char *s1, char *s2, size_t n)
{
	printf("ft_memcmp: %s\n", name);
	printf("Want: %d\n", memcmp(s1, s2, n));
	printf("Got:  %d\n\n", ft_memcmp(s1, s2, n));
}

void	test_memchr(void)
{
	char	memchr_s[] = "hello w*rld!";
	int		memchr_c = 42;
	size_t	memchr_n = 10*sizeof(char);
	printf("%s\n", (char *)memchr(memchr_s, memchr_c, memchr_n));
	
	char	ft_memchr_s[] = "hello w*rld!";
	printf("%s\n", (char *)ft_memchr(ft_memchr_s, memchr_c, memchr_n));

	test_memcmp_case("same", "hello!", "hello!", 10);
	test_memcmp_case("1 byte (same)", "hello!", "hello!", 1);
	test_memcmp_case("1 byte (different)", "ello!", "hello!", 1);
	test_memcmp_case("limited (same)", "hello!", "hello!", 4);
	test_memcmp_case("limited (different)", "hello!", "hell!", 4);
	test_memcmp_case("null (different)", "he\0yj", "he\0ll!", 10);
	test_memcmp_case("null", "hello!", "h\0ello!", 10);
	test_memcmp_case("null (same)", "he\0llo!", "he\0llo!", 10);
}

void	test_strnstr_case(char *name, char *s1, char *s2, size_t n)
{
	printf("ft_strnstr: %s\n", name);
	printf("Want: %s\n", strnstr(s1, s2, n));
	printf("Got:  %s\n\n", ft_strnstr(s1, s2, n));
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

int		main(void)
{
	test_ctype();
	test_string();
	test_mem();
	test_strl();
	test_strchr();
	test_memchr();
	test_strnstr();
	return (1);
}
