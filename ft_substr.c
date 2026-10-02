#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*casted_s;
	char	*result;

	casted_s = (char *)s;
	casted_s = ft_strchr(casted_s, start);
	if (!casted_s)
		return (NULL);
	if (len > ft_strlen(casted_s))
		len = ft_strlen(casted_s);
	result = (char *)malloc(len + 1);
	ft_strlcpy(result, casted_s, len + 1);
	return (result);
}
