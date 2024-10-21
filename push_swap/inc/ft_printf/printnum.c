/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printnum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokariou <mokariou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 14:40:14 by mokariou          #+#    #+#             */
/*   Updated: 2024/09/06 14:01:32 by mokariou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
//%d works perfectly
static int	tt_len(long n)
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

static void	ft_convert_to_str(char *tab, long nb, int len)
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

static char	*ft_itoa(int n)
{
	long	nb;
	char	*tab;
	int		len;

	nb = n;
	len = tt_len(nb);
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
	ft_convert_to_str(tab, nb, len);
	return (tab);
}

int	print_num(int num)
{
	char			*tab;
	int				count_bytes;

	tab = NULL;
	count_bytes = 0;
	if (num == 0)
		count_bytes = write(1, "0", 1);
	else
	{
		tab = ft_itoa(num);
		count_bytes += ft_print_da_s(tab);
	}
	free(tab);
	return (count_bytes);
}

/*
#include <stdio.h>

int main()
{
    unsigned int num = 12345;
    char *str = ho_da_itoa(num);
    if (str)
    {
        printf("String: %s\n", str); 
        printf("Length: %d\n", bytes(num)); 
        free(str);
    }
	return 0;
}
*/