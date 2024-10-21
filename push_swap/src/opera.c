/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   opera.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokariou <mokariou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 11:42:43 by mokariou          #+#    #+#             */
/*   Updated: 2024/08/27 11:42:43 by mokariou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    push(l_stack *from, l_stack *to)
{
    t_node* temp;

    if (from == NULL || from->top == NULL || from->size == 0)
		return ;
	temp = from->top;
	from->top = from->top->next;
	temp->next = to->top;
	to->top = temp;
	from->size--;
	to->size++;
}

void	swap(l_stack* stack)
{
	t_node*	current1;
	t_node*	current2;
	if (stack == NULL || stack->size < 2)
		return ;
	
	current1 = stack->top;
	current2 = stack->top->next;
	current1->next = current2->next;
	current2->next = current1;
	stack->top = current2;
}
//bring first to last
void	rotate(l_stack* stack)
{
	t_node* first;
	t_node*	last;

	if (stack == NULL || stack->top == NULL || stack->size < 2)
		return ;
	first = stack->top;
	last = stack->top;
	while (last->next != NULL)
		last = last->next;
	last->next = first;
	stack->top = stack->top->next;
	first->next = NULL;
	
}
//bring last to first
void	rrotate(l_stack* stack)
{
	t_node* first;
	t_node*	last;
	t_node* prev;

	if (stack == NULL || stack->top == NULL || stack->size < 2)
		return ;
	first = stack->top;
	last = stack->top;
	while (last->next != NULL)
		last = last->next;
	prev = stack->top;
	while (prev->next->next != NULL)
		prev = prev->next;
	last->next = first;
	prev->next = NULL;
	stack->top = last;
}