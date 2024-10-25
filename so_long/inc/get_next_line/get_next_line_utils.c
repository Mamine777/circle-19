/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokariou <mokariou@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 17:51:46 by mokariou          #+#    #+#             */
/*   Updated: 2024/10/17 18:28:34 by mokariou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	len_to_ln(t_stack *stack)
{
	int		i;
	int		len;
	t_gnl	*current;

	if (stack == NULL)
		return (0);
	len = 0;
	current = stack->top;
	while (current != NULL)
	{
		i = 0;
		while (current->str[i])
		{
			if (current->str[i] == '\n')
			{
				len++;
				return (len);
			}
			i++;
			len++;
		}
		current = current->next;
	}
	return (len);
}

char	*ft_strcpy(char *str, t_stack *stack)
{
	int		i;
	int		j;
	t_gnl	*current;

	j = 0;
	current = stack->top;
	while (current != NULL)
	{
		i = 0;
		while (current->str[i])
		{
			if (current->str[i] == '\n')
			{
				str[j++] = '\n';
				str[j] = '\0';
				break ;
			}
			str[j++] = current->str[i++];
		}
		current = current->next;
	}
	str[j] = '\0';
	return (str);
}

void	deallocate(t_stack *list, t_gnl *new_node, char *buffer)
{
	t_gnl	*temp;

	while (list->top != NULL)
	{
		temp = list->top->next;
		free(list->top->str);
		free(list->top);
		list->top = temp;
	}
	list->top = NULL;
	list->size = 0;
	if (new_node && new_node->str && new_node->str[0])
	{
		list->top = new_node;
		list->size = 1;
	}
	else
	{
		free(new_node);
		free(buffer);
	}
}

int	new_line(t_stack *stack)
{
	int		i;
	t_gnl	*current;

	current = stack->top;
	while (current != NULL)
	{
		i = 0;
		while (current->str[i] && i < BUFFER_SIZE)
		{
			if (current->str[i] == '\n')
				return (1);
			i++;
		}
		current = current->next;
	}
	return (0);
}

char	*extract_after_newline(t_stack *stack)
{
	char	*buffer;
	t_gnl	*last;
	int		i;
	int		j;

	i = 0;
	j = 0;
	last = stack->top;
	while (last && last->next != NULL)
		last = last->next;
	buffer = malloc(BUFFER_SIZE + 1);
	if (!last || !buffer)
		return (NULL);
	while (last->str[i] != '\n' && last->str[i] != '\0')
		i++;
	if (last->str[i] == '\n')
		i++;
	while (last->str[i] != '\0')
		buffer[j++] = last->str[i++];
	buffer[j] = '\0';
	return (buffer);
}
