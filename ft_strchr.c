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
	char			*casted_s;
	unsigned char	casted_c;

	casted_s = (char *)s;
	casted_c = (unsigned char)c;
	while (*casted_s)
	{
		if (*casted_s == casted_c)
			return (casted_s);
		casted_s++;
	}
	if (*casted_s == casted_c)
		return (casted_s);
	return (NULL);
}
