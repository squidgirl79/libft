/* ************************************************************************** */
/*                                                                            */
/*                                                       .     codam.nl       */
/*   ft_strdup.c                                        ":"                   */
/*                                                    ___:____     |"\/"|     */
/*   By: embrugge <embrugge@student.codam.nl>       ,'        `.    \  /      */
/*                                                  |  v~       \___/  |      */
/*   Created: 2026/10/01 13:40:41 by embrugge     ~^~^~^~^~^~^~^~^~^~^~^~^~   */
/*   Updated: 2026/10/07 18:09:54 by embrugge        ~       ~       ~        */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	const size_t	len = ft_strlen(s);
	char			*ret;

	ret = (char *)malloc((len + 1) * sizeof(char));
	if (!ret)
		return (NULL);
	ft_strlcpy(ret, s, len + 1);
	return (ret);
}
