/* ************************************************************************** */
/*                                                                            */
/*                                                       .     codam.nl       */
/*   ft_substr.c                                        ":"                   */
/*                                                    ___:____     |"\/"|     */
/*   By: embrugge <embrugge@student.codam.nl>       ,'        `.    \  /      */
/*                                                  |  v~       \___/  |      */
/*   Created: 2026/10/03 12:21:06 by embrugge     ~^~^~^~^~^~^~^~^~^~^~^~^~   */
/*   Updated: 2026/10/07 18:47:33 by embrugge        ~       ~       ~        */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*casted_s;
	char	*ret;

	casted_s = (char *)s;
	if (start > ft_strlen(casted_s))
		start = ft_strlen(casted_s);
	casted_s += start;
	if (!casted_s)
		return ((char *)malloc(0));
	if (len > ft_strlen(casted_s))
		len = ft_strlen(casted_s);
	ret = (char *)malloc(len + 1);
	if (!ret)
		return (NULL);
	ft_strlcpy(ret, casted_s, len + 1);
	return (ret);
}
