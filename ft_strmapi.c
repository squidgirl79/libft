/* ************************************************************************** */
/*                                                                            */
/*                                                       .       42.fr        */
/*   ft_strmapi.c                                       ":"                   */
/*                                                    ___:____     |"\/"|     */
/*   By: embrugge <embrugge@student.codam.nl>       ,'        `.    \  /      */
/*                                                  |  O        \___/  |      */
/*   Created: 2026/10/04 23:07:44 by embrugge     ~^~^~^~^~^~^~^~^~^~^~^~^~   */
/*   Updated: 2026/10/04 23:07:44 by embrugge       ~   ~   ~   ~   ~   ~     */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ret;
	int		i;

	ret = (char *)ft_calloc((ft_strlen(s) + 1), sizeof(char));
	if (!f || !ret)
	{
		free (ret);
		return (NULL);
	}
	i = 0;
	while (*s)
	{
		ret[i] = (*f)(i, *s);
		s++;
		i++;
	}
	return (ret);
}
