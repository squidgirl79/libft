/* ************************************************************************** */
/*                                                                            */
/*                                                       .     codam.nl       */
/*   ft_strjoin.c                                       ":"                   */
/*                                                    ___:____     |"\/"|     */
/*   By: embrugge <embrugge@student.codam.nl>       ,'        `.    \  /      */
/*                                                  |  v~       \___/  |      */
/*   Created: 2026/10/03 12:21:19 by embrugge     ~^~^~^~^~^~^~^~^~^~^~^~^~   */
/*   Updated: 2026/10/07 18:10:42 by embrugge        ~       ~       ~        */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*ret;

	len = ft_strlen(s1) + ft_strlen(s2);
	ret = (char *)malloc(len + 1);
	if (!ret)
		return (NULL);
	ft_strlcpy(ret, s1, len + 1);
	ft_strlcat(ret, s2, len + 1);
	return (ret);
}
