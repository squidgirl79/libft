/* ************************************************************************** */
/*                                                                            */
/*                                                       .       42.fr        */
/*   ft_strdup.c                                        ":"                   */
/*                                                    ___:____     |"\/"|     */
/*   By: embrugge <embrugge@student.codam.nl>       ,'        `.    \  /      */
/*                                                  |  O        \___/  |      */
/*   Created: 2026/10/01 13:40:41 by embrugge     ~^~^~^~^~^~^~^~^~^~^~^~^~   */
/*   Updated: 2026/10/01 13:40:41 by embrugge       ~   ~   ~   ~   ~   ~     */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	const size_t	len = ft_strlen(s);
	char			*result;

	result = (char *)malloc((len + 1) * sizeof(char));
	ft_strlcpy(result, s, len + 1);
	return (result);
}
