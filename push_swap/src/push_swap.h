/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokariou <mokariou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 11:17:43 by mokariou          #+#    #+#             */
/*   Updated: 2024/08/27 11:17:43 by mokariou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "../inc/ft_printf/ft_printf.h"
#include "../inc/libft/libft.h"
#include <stdlib.h>
#include <limits.h>

typedef struct t_node
{
	int				x;
	struct t_node*	next;
}	t_node;

typedef struct l_stack
{
	t_node*	top;
	int		size;
}	l_stack;

void    push(l_stack *from, l_stack *to);
void	swap(l_stack* stack);
void	rotate(l_stack *stack);
void	rrotate(l_stack* stack);
void	push_to_b(l_stack* a, l_stack* b);
int		smallest_a(l_stack* a);
int		calc_rotation_needed_a(l_stack* a);
void	bring_to_top(l_stack* a, l_stack* b);
int	is_num(char *str);
void	push_stack(l_stack* stack, int value);
void	init(char* arg, l_stack* a);

#endif