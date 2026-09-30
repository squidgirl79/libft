/* ************************************************************************** */
/*                                                                            */
/*                                                       .       42.fr        */
/*   ft_memcpy.c                                        ":"                   */
/*                                                    ___:____     |"\/"|     */
/*   By: embrugge <embrugge@student.codam.nl>       ,'        `.    \  /      */
/*                                                  |  O        \___/  |      */
/*   Created: 2026/09/30 17:07:53 by embrugge     ~^~^~^~^~^~^~^~^~^~^~^~^~   */
/*   Updated: 2026/09/30 17:14:50 by embrugge       ~   ~   ~   ~   ~   ~     */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*casted_src;
	char	*casted_dest;

	casted_src = (char *)src;
	casted_dest = (char *)dest;
	while (n--)
	{
		*casted_dest++ = *casted_src++;
	}
	return (dest);
}
