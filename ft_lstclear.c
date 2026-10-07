/* ************************************************************************** */
/*                                                                            */
/*                                                       .     codam.nl       */
/*   ft_lstclear.c                                      ":"                   */
/*                                                    ___:____     |"\/"|     */
/*   By: embrugge <embrugge@student.codam.nl>       ,'        `.    \  /      */
/*                                                  |  v~       \___/  |      */
/*   Created: 2026/10/06 15:14:31 by embrugge     ~^~^~^~^~^~^~^~^~^~^~^~^~   */
/*   Updated: 2026/10/07 18:57:02 by embrugge        ~       ~       ~        */
/*                                                                            */
/* ************************************************************************** */

// #include <stdlib.h>
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next_lst;
	t_list	*start;

	start = *lst;
	if (!start)
		return ;
	while (start)
	{
		next_lst = start->next;
		ft_lstdelone(start, del);
		start = next_lst;
	}
}
