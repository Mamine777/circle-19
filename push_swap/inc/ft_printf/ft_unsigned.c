/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokariou <mokariou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 13:03:06 by mokariou          #+#    #+#             */
/*   Updated: 2024/09/06 15:48:25 by mokariou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	t_len(long n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		count++;
		n = -n;
	}
	if (n == 0)
	{
		count++;
	}
	while (n > 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

static void	ft_convert(char *tab, long nb, int len)
{
	if (nb < 0)
	{
		tab[0] = '-';
		nb = -nb;
	}
	while (nb > 0)
	{
		tab[len--] = 48 + (nb % 10);
		nb /= 10;
	}
}

static char	*tt_itoa(unsigned int n)
{
	long	nb;
	char	*tab;
	int		len;

	nb = n;
	len = t_len(nb);
	tab = (char *)malloc(sizeof(char) * (len + 1));
	if (!tab)
		return (NULL);
	tab[len--] = '\0';
	if (nb == 0)
	{
		tab[0] = 48;
		tab[1] = '\0';
		return (tab);
	}
	ft_convert(tab, nb, len);
	return (tab);
}

int	ft_unsigned(unsigned int num)
{
	char	*tab;
	int		count_bytes;

	count_bytes = 0;
	if (num == 0)
		count_bytes = write(1, "0", 1);
	else
	{
		tab = tt_itoa(num);
		if (tab)
		{
			count_bytes += ft_print_da_s(tab);
			free(tab);
		}
	}
	return (count_bytes);
}
