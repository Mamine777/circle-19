/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokariou <mokariou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 14:32:31 by mokariou          #+#    #+#             */
/*   Updated: 2024/09/06 13:20:24 by mokariou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex_cap(unsigned int n)
{
	unsigned long int	num;
	char				*hex;
	char				buffer[9];
	int					i;
	int					count_bytes;

	num = n;
	hex = "0123456789ABCDEF";
	count_bytes = 0;
	i = 0;
	if (num == 0)
	{
		count_bytes += write(1, "0", 1);
		return (count_bytes);
	}
	while (num > 0)
	{
		buffer[i++] = hex[num % 16];
		num /= 16;
	}
	while (i > 0)
	{
		count_bytes += write(1, &buffer[i--], 1);
	}
	return (count_bytes);
}

int	ft_print_hex_low(unsigned int n)
{
	unsigned long int	num;
	char				*hex;
	char				buffer[9];
	int					i;
	int					count_bytes;

	num = n;
	hex = "0123456789abcdef";
	count_bytes = 0;
	i = 0;
	if (num == 0)
	{
		count_bytes += write(1, "0", 1);
		return (count_bytes);
	}
	while (num > 0)
	{
		buffer[i++] = hex[num % 16];
		num /= 16;
	}
	while (i > 0)
	{
		count_bytes += write(1, &buffer[--i], 1);
	}
	return (count_bytes);
}
