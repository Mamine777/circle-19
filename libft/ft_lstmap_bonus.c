/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokariou <mokariou@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 12:34:43 by mokariou          #+#    #+#             */
/*   Updated: 2024/10/16 13:27:21 by mokariou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstadd_new(t_list **new_list, t_list **last_elem,
			void *n_content, void (*del)(void *))
{
	t_list	*new_elem;

	new_elem = ft_lstnew(n_content);
	if (!new_elem)
	{
		del(n_content);
		ft_lstclear(new_list, del);
		return (NULL);
	}
	if (!*new_list)
		*new_list = new_elem;
	else
		(*last_elem)->next = new_elem;
	*last_elem = new_elem;
	return (new_elem);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*last_elem;
	void	*n_content;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	last_elem = NULL;
	while (lst != NULL)
	{
		n_content = f(lst->content);
		if (!ft_lstadd_new(&new_list, &last_elem, n_content, del))
			return (NULL);
		lst = lst->next;
	}
	return (new_list);
}

// #include <string.h>
// #include <stdlib.h>
// #include <stdio.h>
// int main()
// {
// 	t_list *lst = ft_lstnew("coco");
// 	t_list	*second_node = ft_lstnew("cazzo");

// 	lst->next = second_node;
// 	t_list	*new_list = ft_lstmap(lst, ft_toupper, delete_content);

// 	printf("Original list:\n");
// 	t_list	*temp = lst;
// 	while (temp)
// 	{
// 		printf("%s\n", (char *)temp->content);
// 		temp = temp->next;
// 	}

// 	printf("\nMapped list (uppercase):\n");
// 	temp = new_list;
// 	while (temp)
// 	{
// 		printf("%s\n", (char *)temp->content);
// 		temp = temp->next;
// 	}

// 	ft_lstclear(&lst, delete_content);
// 	ft_lstclear(&new_list, delete_content);
// }