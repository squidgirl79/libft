/* ************************************************************************** */
/*                                                                            */
/*                                                       .     codam.nl       */
/*   ft_strlcat.c                                       ":"                   */
/*                                                    ___:____      |"\/"|    */
/*   By: embrugge <embrugge@student.codam.nl>       ,'        `.    \   /     */
/*                                                  |  v~       \___/  |      */
/*   Created: 2026/10/06 15:09:59 by embrugge     ~^~^~^~^~^~^~^~^~^~^~^~^~   */
/*   Updated: 2026/10/06 15:11:29 by embrugge        ~       ~       ~        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	ret1;
	size_t	ret2;

	ret1 = ft_strlen(dst) + ft_strlen(src);
	ret2 = size;
	while (*dst++)
		if (!size--)
			return (ret2);
	ft_strlcpy(dst - 1, src, size);
	return (ret1);
}
