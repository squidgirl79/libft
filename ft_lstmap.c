/* ************************************************************************** */
/*                                                                            */
/*                                                       .     codam.nl       */
/*   ft_lstmap.c                                        ":"                   */
/*                                                    ___:____     |"\/"|     */
/*   By: embrugge <embrugge@student.codam.nl>       ,'        `.    \  /      */
/*                                                  |  v~       \___/  |      */
/*   Created: 2026/10/06 16:17:04 by embrugge     ~^~^~^~^~^~^~^~^~^~^~^~^~   */
/*   Updated: 2026/10/07 18:57:03 by embrugge        ~       ~       ~        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*begin;

	begin = NULL;
	while (lst)
	{
		new = ft_lstnew(f(lst->content));
		ft_lstadd_back(&begin, new);
		del(lst->content);
	}
	return (begin);
}
