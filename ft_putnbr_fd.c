/* ************************************************************************** */
/*                                                                            */
/*                                                       .     codam.nl       */
/*   ft_putnbr_fd.c                                     ":"                   */
/*                                                    ___:____     |"\/"|     */
/*   By: embrugge <embrugge@student.codam.nl>       ,'        `.    \  /      */
/*                                                  |  v~       \___/  |      */
/*   Created: 2026/10/05 16:21:24 by embrugge     ~^~^~^~^~^~^~^~^~^~^~^~^~   */
/*   Updated: 2026/10/08 15:08:49 by embrugge        ~       ~       ~        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == INT_MIN)
		return (ft_putstr_fd("-2147483648", fd));
	if (n < 0)
	{
		n *= -1;
		ft_putchar_fd('-', fd);
	}
	if (n / 10 > 0)
		ft_putnbr_fd(n / 10, fd);
	ft_putchar_fd((n % 10) + 48, fd);
}
