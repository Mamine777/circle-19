/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokariou <mokariou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 13:00:04 by mokariou          #+#    #+#             */
/*   Updated: 2024/09/07 12:04:13 by mokariou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_num(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	if (str[i] == '\0')
		return (0);
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

void	push_stack(l_stack* stack, int value)
{
	t_node*	new_node;

	new_node = malloc(sizeof(t_node));
	if (!new_node)
		return ;
	new_node->x = value;
	new_node->next = stack->top;
	stack->top = new_node;
	stack->size++;
}

void	init(char *arg, l_stack *a)
{
	int		num;
	int		i;
	char	**token;

	token = ft_split(arg, ' ');
	i = 0;
	while (token[i] != NULL)
	{
		if (!is_num(token[i]))
		{
			ft_printf("Error\n");
			exit(1);
		}
		num = ft_atoi(token[i]);
		if (num > INT_MAX || num < INT_MIN)
		{
			ft_printf("Error\n");
			exit(1);
		}
		push_stack(a, num);
		i++;
	}
	i = 0;
	while (token[i] != NULL)
	{
		free(token[i]);
		i++;
	}
	free(token);
}

int main(int ac, char** av)
{
	l_stack*	a;
	l_stack*	b;

	a = (l_stack *)malloc(sizeof(l_stack));
	b = (l_stack *)malloc(sizeof(l_stack));
	if (!a)
	{
		ft_printf("Error\n");
		exit(1);
	}
	b->top = NULL;
	b->size = 0;
	a->top = NULL;
	a->size = 0;
	if (ac < 2)
	{
		ft_printf("Error\n");
		exit(1);
	}
	for (int i = 1; i < ac; i++)
	{
		init(av[i], a);
	}
	push_to_b(a, b);
}
