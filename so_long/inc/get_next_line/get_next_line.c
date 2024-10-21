/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokariou <mokariou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 12:11:41 by mokariou          #+#    #+#             */
/*   Updated: 2024/09/04 15:33:52 by mokariou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	next_call(t_stack *stack)
{
	t_gnl	*new_node;
	char	*buffer;

	if (!stack || !stack->top)
		return ;
	buffer = extract_after_newline(stack);
	if (!buffer)
		return ;
	new_node = malloc(sizeof(t_gnl));
	if (!new_node)
	{
		free(buffer);
		return ;
	}
	new_node->str = buffer;
	new_node->next = NULL;
	deallocate(stack, new_node, buffer);
}

char	*get_line(t_stack *stack)
{
	int		len;
	char	*str_ln;

	len = len_to_ln(stack);
	str_ln = malloc(len + 1);
	if (!str_ln)
		return (NULL);
	ft_strcpy(str_ln, stack);
	return (str_ln);
}

void	add_stack(t_stack *stack, char *buffer)
{
	t_gnl	*new_node;
	t_gnl	*last;

	new_node = malloc(sizeof(t_gnl));
	if (new_node == NULL)
		return ;
	if (stack->size < 1)
		stack->top = new_node;
	else
	{
		last = stack->top;
		while (last->next != NULL)
			last = last->next;
		last->next = new_node;
	}
	new_node->next = NULL;
	new_node->str = buffer;
	stack->size++;
}
// read buffer

void	create(t_stack *list, int fd)
{
	char	*buffer;
	int		char_read;

	while (!new_line(list))
	{
		buffer = malloc(BUFFER_SIZE + 1);
		if (!buffer)
			return ;
		char_read = read(fd, buffer, BUFFER_SIZE);
		if (!char_read)
		{
			free(buffer);
			return ;
		}
		buffer[char_read] = '\0';
		add_stack(list, buffer);
	}
}

char	*get_next_line(int fd)
{
	static t_stack	*node = NULL;
	char			*get_next_ln;

	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, &get_next_ln, 0) < 0)
		return (NULL);
	if (!node)
	{
		node = malloc(sizeof(t_stack));
		if (!node)
			return (NULL);
		node->top = NULL;
		node->size = 0;
	}
	create(node, fd);
	get_next_ln = get_line(node);
	next_call(node);
	return (get_next_ln);
}
