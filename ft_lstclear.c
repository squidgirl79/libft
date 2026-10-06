/* ************************************************************************** */
/*                                                                            */
/*                                                       .     codam.nl       */
/*   ft_lstclear.c                                      ":"                   */
/*                                                    ___:____     |"\/"|     */
/*   By: embrugge <embrugge@student.codam.nl>       ,'        `.    \  /      */
/*                                                  |  v~       \___/  |      */
/*   Created: 2026/10/06 15:14:31 by embrugge     ~^~^~^~^~^~^~^~^~^~^~^~^~   */
/*   Updated: 2026/10/06 16:14:30 by embrugge        ~       ~       ~        */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next_lst;
	t_list	*tmp;

	while (*lst)
	{
		tmp = *lst;
		next_lst = tmp->next;
		del(tmp->content);
		free(tmp);
		*lst = next_lst;
	}
	free(lst);
}
