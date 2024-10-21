/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokariou <mokariou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 15:00:27 by mokariou          #+#    #+#             */
/*   Updated: 2024/09/07 12:05:45 by mokariou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	smallest_a(l_stack *a)
{
	t_node	*current_a;
	int		smallest;
	int		i;
	int		pos;

	if (a == NULL || a->size < 1)
		return (-1);
	current_a = a->top;
	smallest = current_a->x;
	i = 0;
	pos = 0;
	while (current_a != NULL)
	{
		if (current_a->x < smallest)
		{
			smallest = current_a->x;
			pos = i;
		}
		current_a = current_a->next;
		i++;
	}
	return (pos);
}

int	calc_rotation_needed_a(l_stack *a)
{
	int	pos;
	int	size;
	int	rotation;
	int	revrotate;

	if (a == NULL || a->size < 1)
		return (-1);
	pos = smallest_a(a);
	size = a->size;
	rotation = pos;
	revrotate = size - pos;
	return (rotation < revrotate ? rotation : -revrotate);
}

void	bring_to_top(l_stack *a, l_stack *b)
{
	int		pos;

	if (a == NULL || a->top == NULL || a->size < 1)
		return ;
	pos = calc_rotation_needed_a(a);
	while (pos != 0)
	{
		if (pos > 0)
		{
			rotate(a);
			ft_printf("ra\n");
			pos--;
		}
		else
		{
			rrotate(a);
			ft_printf("rra\n");
			pos++;
		}
	}
	push(a, b);
	ft_printf("pb\n");
}

void	push_to_b(l_stack *a, l_stack *b)
{
	if (a == NULL || a->top == NULL)
		return ;
	if (a->size == 1)
		return ;
	while (a->size != 0)
	{
		bring_to_top(a, b);
	}
	while (b->size != 0)
	{
		push(b, a);
		ft_printf("pa\n");
	}
}
