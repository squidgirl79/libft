/* ************************************************************************** */
/*                                                                            */
/*                                                       .       42.fr        */
/*   ft_atoi.c                                          ":"                   */
/*                                                    ___:____     |"\/"|     */
/*   By: embrugge <embrugge@student.codam.nl>       ,'        `.    \  /      */
/*                                                  |  O        \___/  |      */
/*   Created: 2026/10/02 12:19:17 by embrugge     ~^~^~^~^~^~^~^~^~^~^~^~^~   */
/*   Updated: 2026/10/02 12:19:17 by embrugge       ~   ~   ~   ~   ~   ~     */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	result;
	int	polarity;

	result = 0;
	polarity = 1;
	if (*nptr == '+')
		nptr++;
	else if (*nptr == '-')
	{
		polarity *= -1;
		nptr++;
	}
	while (ft_isdigit(*nptr))
	{
		result = (result * 10) + (*nptr - 48);
		nptr++;
	}
	return (result * polarity);
}
