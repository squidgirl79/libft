/* ************************************************************************** */
/*                                                                            */
/*                                                       .       42.fr        */
/*   ft_calloc.c                                        ":"                   */
/*                                                    ___:____     |"\/"|     */
/*   By: embrugge <embrugge@student.codam.nl>       ,'        `.    \  /      */
/*                                                  |  O        \___/  |      */
/*   Created: 2026/10/01 13:14:52 by embrugge     ~^~^~^~^~^~^~^~^~^~^~^~^~   */
/*   Updated: 2026/10/04 19:18:34 by embrugge       ~   ~   ~   ~   ~   ~     */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ret;

	if (!nmemb || !size || __SIZE_MAX__ / nmemb < size)
		return (NULL);
	ret = malloc(nmemb * size);
	ft_bzero(ret, nmemb * size);
	return (ret);
}
