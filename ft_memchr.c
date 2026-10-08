/* ************************************************************************** */
/*                                                                            */
/*                                                       .       42.fr        */
/*   ft_memchr.c                                        ":"                   */
/*                                                    ___:____     |"\/"|     */
/*   By: embrugge <embrugge@student.codam.nl>       ,'        `.    \  /      */
/*                                                  |  O        \___/  |      */
/*   Created: 2026/10/01 17:57:27 by embrugge     ~^~^~^~^~^~^~^~^~^~^~^~^~   */
/*   Updated: 2026/10/01 18:23:23 by embrugge       ~   ~   ~   ~   ~   ~     */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*casted_ptr;
	unsigned char	casted_char;

	casted_ptr = (unsigned char *) s;
	casted_char = (unsigned char) c;
	while (n--)
		if (*casted_ptr++ == casted_char)
			return (casted_ptr - 1);
	return (NULL);
}
