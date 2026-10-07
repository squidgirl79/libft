/* ************************************************************************** */
/*                                                                            */
/*                                                       .     codam.nl       */
/*   ft_lstlast.c                                       ":"                   */
/*                                                    ___:____     |"\/"|     */
/*   By: embrugge <embrugge@student.codam.nl>       ,'        `.    \   /     */
/*                                                  |  v~       \___/  |      */
/*   Created: 2026/10/06 14:58:28 by embrugge     ~^~^~^~^~^~^~^~^~^~^~^~^~   */
/*   Updated: 2026/10/07 16:46:25 by embrugge        ~       ~       ~        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}
