/* ************************************************************************** */
/*                                                                            */
/*                                                       .       42.fr        */
/*   ft_split.c                                         ":"                   */
/*                                                    ___:____     |"\/"|     */
/*   By: embrugge <embrugge@student.codam.nl>       ,'        `.    \  /      */
/*                                                  |  O        \___/  |      */
/*   Created: 2026/10/03 13:22:39 by embrugge     ~^~^~^~^~^~^~^~^~^~^~^~^~   */
/*   Updated: 2026/10/04 19:26:07 by embrugge       ~   ~   ~   ~   ~   ~     */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include <stdio.h>

static size_t	wordlen(char const *s, char c);

static int		loop_s(char const *s, char c, int i);

char	**ft_split(char const *s, char c)
{
	char		**result;
	int			i;

	i = 0;
	i = loop_s(s, c, i);
	result = (char **)malloc((i + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (wordlen(s, c))
		{
			result[i] = (char *)malloc((wordlen(s, c) + 1) * sizeof(char));
			if (!result[i])
				return (NULL);
			ft_strlcpy(result[i++], s, wordlen(s, c) + 1);
		}
		s += wordlen(s, c);
	}
	result[i] = NULL;
	return (result);
}

static int	loop_s(char const *s, char c, int i)
{
	while (*s)
	{
		while (*s == c)
			s++;
		if (wordlen(s, c))
			i++;
		s += wordlen(s, c);
	}
	return (i);
}

static size_t	wordlen(char const *s, char c)
{
	size_t	result;

	result = 0;
	while (*s && *s++ != c)
		result++;
	return (result);
}
