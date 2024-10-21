/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokariou <mokariou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 17:30:12 by mokariou          #+#    #+#             */
/*   Updated: 2024/09/06 15:52:48 by mokariou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_prntmod(void)
{
	write(1, "%", 1);
	return (1);
}

int	print_da_c(int c)
{
	int	count_bytes;

	count_bytes = 0;
	count_bytes += write(1, &c, 1);
	return (count_bytes);
}

int	ft_print_da_s(char *s)
{
	int	count_bytes;
	int	i;

	count_bytes = 0;
	if (!s)
		return (write(1, "(null)", 6));
	i = 0;
	while (s[i])
	{
		count_bytes += write(1, &s[i], 1);
		i++;
	}
	return (count_bytes);
}
