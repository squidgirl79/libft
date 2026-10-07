/* ************************************************************************** */
/*                                                                            */
/*                                                       .     codam.nl       */
/*   ft_lstsize.c                                       ":"                   */
/*                                                    ___:____     |"\/"|     */
/*   By: embrugge <embrugge@student.codam.nl>       ,'        `.    \   /     */
/*                                                  |  v~       \___/  |      */
/*   Created: 2026/10/06 14:48:32 by embrugge     ~^~^~^~^~^~^~^~^~^~^~^~^~   */
/*   Updated: 2026/10/07 16:28:50 by embrugge        ~       ~       ~        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	ret;

	ret = 0;
	while (lst)
	{
		ret++;
		lst = lst->next;
	}
	return (ret);
}
