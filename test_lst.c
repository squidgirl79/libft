/* ************************************************************************** */
/*                                                                            */
/*                                                       .     codam.nl       */
/*   test_lst.c                                         ":"                   */
/*                                                    ___:____     |"\/"|     */
/*   By: embrugge <embrugge@student.codam.nl>       ,'        `.    \  /      */
/*                                                  |  v~       \___/  |      */
/*   Created: 2026/10/06 16:12:03 by embrugge     ~^~^~^~^~^~^~^~^~^~^~^~^~   */
/*   Updated: 2026/10/07 15:48:53 by embrugge        ~       ~       ~        */
/*                                                                            */
/* ************************************************************************** */

// #include <stdlib.h>
#include <stdio.h>
#include "libft.h"


void	print_lst(t_list *lst)
{
	printf("\n  LIST: %p {\n", lst);
	printf("    content: %s\n", (char *)lst->content);
	printf("    next: %p\n  }\n", lst->next);
}

void	print_all(t_list **lst)
{
	t_list	*current;

	current = *lst;
	print_lst(current);
	while (current->next)
	{
		current = current->next;
		print_lst(current);
	}
}

void	test_lst(void)
{
	t_list	*lst;
	t_list	**start;

	printf("\nTESTING LINKED LIST\n");
	printf("\n1: adding new list\n");
	lst = ft_lstnew(ft_strdup("new list!"));
	start = &lst;
	print_all(start);
	printf("\n2: adding new list back\n");
	ft_lstadd_back(start, ft_lstnew(ft_strdup("added to back!")));
	print_all(start);
	printf("\n3: getting last list\n");
	print_lst(ft_lstlast(lst));

	// unsure if list needs to be shifted when added to front
	printf("\n4: adding new list front\n");
	t_list	*new_lst = ft_lstnew(ft_strdup("added to front!"));
	ft_lstadd_front(start, new_lst);
	start = &new_lst;
	print_all(start);
	printf("\n5: printing list size: %d\n", ft_lstsize(*start));
}
