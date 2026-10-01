/* ************************************************************************** */
/*                                                                            */
/*                                                       .       42.fr        */
/*   ft_strlcpy.c                                       ":"                   */
/*                                                    ___:____     |"\/"|     */
/*   By: embrugge <embrugge@student.codam.nl>       ,'        `.    \  /      */
/*                                                  |  O        \___/  |      */
/*   Created: 2026/10/01 10:45:59 by embrugge     ~^~^~^~^~^~^~^~^~^~^~^~^~   */
/*   Updated: 2026/10/01 16:21:36 by embrugge       ~   ~   ~   ~   ~   ~     */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	result;

	result = ft_strlen(src);
	while (size-- - 1 && *src)
		*dst++ = *src++;
	*dst = '\0';
	return (result);
}

// move this later
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	result1;
	size_t	result2;

	result1 = ft_strlen(dst) + ft_strlen(src);
	result2 = size;
	while (*dst++)
		if (!size--)
			return (result2);
	ft_strlcpy(dst - 1, src, size);
	return (result1);
}
