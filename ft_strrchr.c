/* ************************************************************************** */
/*                                                                            */
/*                                                       .     codam.nl       */
/*   ft_strrchr.c                                       ":"                   */
/*                                                    ___:____     |"\/"|     */
/*   By: embrugge <embrugge@student.codam.nl>       ,'        `.    \   /     */
/*                                                  |  v~       \___/  |      */
/*   Created: 2026/10/06 15:05:26 by embrugge     ~^~^~^~^~^~^~^~^~^~^~^~^~   */
/*   Updated: 2026/10/07 18:06:41 by embrugge        ~       ~       ~        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char			*casted_s;
	unsigned char	casted_c;
	size_t			size;

	casted_s = (char *)s;
	casted_c = (unsigned char)c;
	size = ft_strlen(casted_s);
	while (size)
	{
		if (casted_s[size] == casted_c)
			return (&casted_s[size]);
		size--;
	}
	if (casted_s[size] == casted_c)
		return (&casted_s[size]);
	return (NULL);
}
