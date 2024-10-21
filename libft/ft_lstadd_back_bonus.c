/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokariou <mokariou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 14:40:27 by mokariou          #+#    #+#             */
/*   Updated: 2024/10/14 11:11:28 by mokariou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	if (*lst == NULL)
		*lst = new;
	else
		ft_lstlast(*lst)->next = new;
}

/*
#include <stdio.h>
int	main()
{
	t_list	*node;
	t_list	*new;

	node = malloc(sizeof(t_list));
	new = malloc(sizeof(t_list));
	node->content = "hello";
	node->next = NULL;
	new->content = "trim";
	new->next = NULL;
	ft_lstadd_back(&node, new);
	t_list	*current = node;
	while (current != NULL)
	{
		printf("%s\n", (char *)current->content);
		current = current->next;
	}
}*/