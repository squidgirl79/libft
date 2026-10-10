/* ************************************************************************** */
/*                                                                            */
/*                                                       .     codam.nl       */
/*   ft_isalpha.c                                       ":"                   */
/*                                                    ___:____     |"\/"|     */
/*   By: embrugge <embrugge@student.codam.nl>       ,'        `.    \  /      */
/*                                                  |  v~       \___/  |      */
/*   Created: 2026/09/29 12:39:50 by embrugge     ~^~^~^~^~^~^~^~^~^~^~^~^~   */
/*   Updated: 2026/10/10 13:39:52 by embrugge        ~       ~       ~        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isupper(int c);
static int	ft_islower(int c);

int	ft_isalpha(int c)
{
	return (ft_isupper(c) || ft_islower(c));
}

static int	ft_isupper(int c)
{
	return (c >= 'A' && 'Z' >= c);
}

static int	ft_islower(int c)
{
	return (c >= 'a' && 'z' >= c);
}
