/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokariou <mokariou@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 12:12:55 by mokariou          #+#    #+#             */
/*   Updated: 2024/10/10 18:32:20 by mokariou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

/*
#include <stdio.h>
int main()
{
	t_list *node = ft_lstnew("toma");
	t_list *new_node = ft_lstnew("cazzo");
	ft_lstadd_front(&node, new_node);
	t_list *current = node;
	while (current != NULL)
	{
		printf("%s\n", (char *)current->content);
		current = current->next;
	}

}*/
