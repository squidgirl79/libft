/* ************************************************************************** */
/*                                                                            */
/*                                                       .       42.fr        */
/*   ft_memmove.c                                       ":"                   */
/*                                                    ___:____     |"\/"|     */
/*   By: embrugge <embrugge@student.codam.nl>       ,'        `.    \  /      */
/*                                                  |  O        \___/  |      */
/*   Created: 2026/10/01 09:54:18 by embrugge     ~^~^~^~^~^~^~^~^~^~^~^~^~   */
/*   Updated: 2026/10/01 10:42:56 by embrugge       ~   ~   ~   ~   ~   ~     */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*casted_dest;
	char	*casted_src;

	if (dest == src)
		return (dest);
	casted_dest = (char *)dest;
	casted_src = (char *)src;
	if (dest > src)
		while (n--)
			casted_dest[n] = casted_src[n];
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
