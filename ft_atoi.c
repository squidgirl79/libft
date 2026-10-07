/* ************************************************************************** */
/*                                                                            */
/*                                                       .       42.fr        */
/*   ft_atoi.c                                          ":"                   */
/*                                                    ___:____     |"\/"|     */
/*   By: embrugge <embrugge@student.codam.nl>       ,'        `.    \  /      */
/*                                                  |  O        \___/  |      */
/*   Created: 2026/10/02 12:19:17 by embrugge     ~^~^~^~^~^~^~^~^~^~^~^~^~   */
/*   Updated: 2026/10/04 16:26:33 by embrugge       ~   ~   ~   ~   ~   ~     */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_space(char c);

int	ft_atoi(const char *nptr)
{
	int	result;
	int	polarity;

	result = 0;
	polarity = 1;
	while (is_space(*nptr))
		nptr++;
	if (*nptr == '+')
		nptr++;
	else if (*nptr == '-')
	{
		polarity *= -1;
		nptr++;
	}
	while (ft_isdigit(*nptr))
	{
		result = (result * 10) + (*nptr - '0');
		nptr++;
	}
	return (result * polarity);
}

static int	is_space(char c)
{
	return ((c >= 9 && 13 >= c) || c == 32);
}
