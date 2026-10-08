/* ************************************************************************** */
/*                                                                            */
/*                                                       .     codam.nl       */
/*   ft_lstclear.c                                      ":"                   */
/*                                                    ___:____     |"\/"|     */
/*   By: embrugge <embrugge@student.codam.nl>       ,'        `.    \  /      */
/*                                                  |  v~       \___/  |      */
/*   Created: 2026/10/06 15:14:31 by embrugge     ~^~^~^~^~^~^~^~^~^~^~^~^~   */
/*   Updated: 2026/10/08 15:56:56 by embrugge        ~       ~       ~        */
/*                                                                            */
/* ************************************************************************** */

// #include <stdlib.h>
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next_lst;
	t_list	*current_lst;

	current_lst = *lst;
	if (!current_lst || !del)
		return ;
	while (current_lst)
	{
		next_lst = current_lst->next;
		ft_lstdelone(current_lst, del);
		current_lst = next_lst;
	}
	*lst = NULL;
}
