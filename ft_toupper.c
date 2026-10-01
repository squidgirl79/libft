/* ************************************************************************** */
/*                                                                            */
/*                                                       .       42.fr        */
/*   ft_toupper.c                                       ":"                   */
/*                                                    ___:____     |"\/"|     */
/*   By: embrugge <embrugge@student.codam.nl>       ,'        `.    \  /      */
/*                                                  |  O        \___/  |      */
/*   Created: 2026/10/01 10:58:56 by embrugge     ~^~^~^~^~^~^~^~^~^~^~^~^~   */
/*   Updated: 2026/10/01 11:01:08 by embrugge       ~   ~   ~   ~   ~   ~     */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && 'z' >= c)
		c -= 32;
	return (c);
}

// move this later
int	ft_tolower(int c)
{
	if (c >= 'A' && 'Z' >= c)
		c += 32;
	return (c);
}
