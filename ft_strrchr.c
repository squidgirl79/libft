/* ************************************************************************** */
/*                                                                            */
/*                                                       .     codam.nl       */
/*   ft_strrchr.c                                       ":"                   */
/*                                                    ___:____      |"\/"|    */
/*   By: embrugge <embrugge@student.codam.nl>       ,'        `.    \   /     */
/*                                                  |  v~       \___/  |      */
/*   Created: 2026/10/06 15:05:26 by embrugge     ~^~^~^~^~^~^~^~^~^~^~^~^~   */
/*   Updated: 2026/10/06 15:05:38 by embrugge        ~       ~       ~        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*casted_s;
	size_t	size;

	casted_s = (char *)s;
	size = ft_strlen(casted_s) + 1;
	while (size)
	{
		if (casted_s[size] == c)
			return (&casted_s[size]);
		size--;
	}
	if (casted_s[size] == c)
		return (&casted_s[size]);
	return (NULL);
}
