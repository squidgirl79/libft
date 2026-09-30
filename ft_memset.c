/* ************************************************************************** */
/*                                                                            */
/*                                                       .       42.fr        */
/*   ft_memset.c                                        ":"                   */
/*                                                    ___:____     |"\/"|     */
/*   By: embrugge <embrugge@student.codam.nl>       ,'        `.    \  /      */
/*                                                  |  O        \___/  |      */
/*   Created: 2026/09/30 17:37:13 by embrugge     ~^~^~^~^~^~^~^~^~^~^~^~^~   */
/*   Updated: 2026/09/30 17:37:18 by embrugge       ~   ~   ~   ~   ~   ~     */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*casted_ptr;

	casted_ptr = s;
	while (n--)
	{
		*casted_ptr++ = c;
	}
	return (s);
}
//	line 20: add protection for negative n ??
