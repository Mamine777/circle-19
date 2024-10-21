/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokariou <mokariou@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 20:04:53 by mokariou          #+#    #+#             */
/*   Updated: 2024/10/20 16:46:42 by mokariou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	omg_its_conditions(const char c, va_list args)
{
	int	count;

	count = 0;
	if (c == 's')
		count += ft_print_da_s(va_arg(args, char *));
	else if (c == 'c')
		count += print_da_c(va_arg(args, int));
	else if (c == 'd' || c == 'i')
		count += print_num(va_arg(args, int));
	else if (c == 'x' || c == 'X')
	{
		if (c == 'x')
			count += ft_print_hex_low(va_arg(args, unsigned int));
		else
			count += ft_print_hex_cap(va_arg(args, unsigned int));
	}
	else if (c == 'p')
		count += ft_address(va_arg(args, void *));
	else if (c == 'u')
		count += ft_unsigned(va_arg(args, unsigned int));
	else if (c == '%')
		count += ft_prntmod();
	return (count);
}

int	ft_printf(const char *format, ...)
{
	int		count_bytes;
	va_list	args;

	va_start(args, format);
	count_bytes = 0;
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format != '\0')
				count_bytes += omg_its_conditions(*format, args);
		}
		else
		{
			count_bytes += write(1, format, 1);
		}
		format++;
	}
	va_end(args);
	return (count_bytes);
}

// #include <stdio.h>
// int main(void)
// {
// 	int d = ft_printf("Test 1: %s\n", "hellollololooloß");
// 	printf("num_bytes %d\n", d);
// }
