/* ************************************************************************** */
/*                                                                            */
/*                                                       .       42.fr        */
/*   ft_strchr.c                                        ":"                   */
/*                                                    ___:____     |"\/"|     */
/*   By: embrugge <embrugge@student.codam.nl>       ,'        `.    \  /      */
/*                                                  |  O        \___/  |      */
/*   Created: 2026/10/01 16:22:03 by embrugge     ~^~^~^~^~^~^~^~^~^~^~^~^~   */
/*   Updated: 2026/10/01 17:08:19 by embrugge       ~   ~   ~   ~   ~   ~     */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*casted_s;

	casted_s = (char *)s;
	while (*casted_s)
	{
		if (*casted_s == c)
			return (casted_s);
		casted_s++;
	}
	if (*casted_s == c)
		return (casted_s);
	return (NULL);
}

// move this later
char	*ft_strrchr(const char *s, int c)
{
	char	*casted_s;
	size_t	size;

	casted_s = (char *)s;
	size = ft_strlen(casted_s) + 1;
	while (size)
	{
		if (casted_s[size] == c)
			return (&casted_s[size]);
		size--;
	}
	if (casted_s[size] == c)
		return (&casted_s[size]);
	return (NULL);
}
