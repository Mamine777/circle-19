/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokariou <mokariou@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 17:30:12 by mokariou          #+#    #+#             */
/*   Updated: 2024/10/20 17:04:27 by mokariou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_prntmod(void)
{
	return (write(1, "%", 1));
}

int	print_da_c(int c)
{
	return (write(1, &c, 1));
}

int	ft_print_da_s(char *s)
{
	int	count_bytes;
	int	i;

	if (!s)
		return (write(1, "(null)", 6));
	count_bytes = 0;
	i = 0;
	while (s[i])
	{
		count_bytes += write(1, &s[i], 1);
		i++;
	}
	return (count_bytes);
}
