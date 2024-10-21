/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokariou <mokariou@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 19:12:20 by mokariou          #+#    #+#             */
/*   Updated: 2024/10/09 13:21:24 by mokariou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

/*int	main()
#include <stdio.h>
{
	t_list *node = ft_lstnew("toma");
	
	//node->content = (char *)"toma";
	//node->next = malloc(sizeof(t_list));
	//node->next->content = (char *)"hello";
	//node->next->next = NULL;

	t_list *current = node;
	while (current != NULL)
	{
		printf("%s\n", current->content);
		current = current->next;
	}
}*/
