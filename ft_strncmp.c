/* ************************************************************************** */
/*                                                                            */
/*                                                       .       42.fr        */
/*   ft_strncmp.c                                       ":"                   */
/*                                                    ___:____     |"\/"|     */
/*   By: embrugge <embrugge@student.codam.nl>       ,'        `.    \  /      */
/*                                                  |  O        \___/  |      */
/*   Created: 2026/10/01 17:20:23 by embrugge     ~^~^~^~^~^~^~^~^~^~^~^~^~   */
/*   Updated: 2026/10/01 20:04:21 by embrugge       ~   ~   ~   ~   ~   ~     */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*casted_s1;
	unsigned char	*casted_s2;

	casted_s1 = (unsigned char *)s1;
	casted_s2 = (unsigned char *)s2;
	if (!n)
		return (0);
	while (*casted_s1 && *casted_s2 && n-- - 1)
	{
		if (*casted_s1 != *casted_s2)
			return (*casted_s1 - *casted_s2);
		casted_s1++;
		casted_s2++;
	}
	return (*casted_s1 - *casted_s2);
}
