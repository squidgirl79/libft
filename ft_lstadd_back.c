/* ************************************************************************** */
/*                                                                            */
/*                                                       .     codam.nl       */
/*   ft_lstadd_back.c                                   ":"                   */
/*                                                    ___:____     |"\/"|     */
/*   By: embrugge <embrugge@student.codam.nl>       ,'        `.    \   /     */
/*                                                  |  v~       \___/  |      */
/*   Created: 2026/10/06 14:59:20 by embrugge     ~^~^~^~^~^~^~^~^~^~^~^~^~   */
/*   Updated: 2026/10/07 18:25:15 by embrugge        ~       ~       ~        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}
