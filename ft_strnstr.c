/* ************************************************************************** */
/*                                                                            */
/*                                                       .       42.fr        */
/*   ft_strnstr.c                                       ":"                   */
/*                                                    ___:____     |"\/"|     */
/*   By: embrugge <embrugge@student.codam.nl>       ,'        `.    \  /      */
/*                                                  |  O        \___/  |      */
/*   Created: 2026/10/01 20:11:18 by embrugge     ~^~^~^~^~^~^~^~^~^~^~^~^~   */
/*   Updated: 2026/10/01 21:02:13 by embrugge       ~   ~   ~   ~   ~   ~     */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	const size_t	little_len = ft_strlen(little);

	if (little_len > len)
	{
		return (NULL);
	}
	if (!*little)
		return ((char *)big);
	while (*big && len)
	{
		if (little_len > len)
		{
			return (NULL);
		}
		if (!ft_strncmp(big, little, little_len))
			return ((char *)big);
		big++;
		len--;
	}
	return (NULL);
}
