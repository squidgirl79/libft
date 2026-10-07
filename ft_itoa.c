/* ************************************************************************** */
/*                                                                            */
/*                                                       .     codam.nl       */
/*   ft_itoa.c                                          ":"                   */
/*                                                    ___:____     |"\/"|     */
/*   By: embrugge <embrugge@student.codam.nl>       ,'        `.    \  /      */
/*                                                  |  v~       \___/  |      */
/*   Created: 2026/10/04 14:04:11 by embrugge     ~^~^~^~^~^~^~^~^~^~^~^~^~   */
/*   Updated: 2026/10/07 18:11:28 by embrugge        ~       ~       ~        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	loop_n(int n, int size, char *ret);

char	*ft_itoa(int n)
{
	char	*ret;
	char	*start;
	int		size;
	int		sign;

	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	size = 1;
	sign = 0;
	if (n < 0)
	{
		n *= -1;
		sign = 1;
	}
	size = loop_n(n, size, NULL);
	ret = (char *)ft_calloc(size + sign + 1, sizeof(char));
	if (!ret)
		return (NULL);
	start = ret;
	if (sign)
		*ret = '-';
	ret += size + sign - 1;
	loop_n(n, 0, ret);
	return (start);
}

static int	loop_n(int n, int size, char *ret)
{
	while (n / 10)
	{
		if (size)
			size++;
		if (ret)
			*ret-- = (n % 10) + 48;
		n /= 10;
	}
	if (ret)
		*ret = (n % 10) + 48;
	return (size);
}
