/* ************************************************************************** */
/*                                                                            */
/*                                                       .       42.fr        */
/*   ft_bzero.c                                         ":"                   */
/*                                                    ___:____     |"\/"|     */
/*   By: embrugge <embrugge@student.codam.nl>       ,'        `.    \  /      */
/*                                                  |  O        \___/  |      */
/*   Created: 2026/09/30 17:36:52 by embrugge     ~^~^~^~^~^~^~^~^~^~^~^~^~   */
/*   Updated: 2026/09/30 17:37:02 by embrugge       ~   ~   ~   ~   ~   ~     */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*casted_ptr;

	casted_ptr = s;
	while (n--)
		*casted_ptr++ = '\0';
}
//	ft_memset(s, '\0', n);
