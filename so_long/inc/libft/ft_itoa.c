/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokariou <mokariou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 16:03:58 by mokariou          #+#    #+#             */
/*   Updated: 2024/09/05 18:37:43 by mokariou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

char	*ft_itoa(int n)
{
	long	nb;
	char	*tab;
	int		len;

	nb = n;
	len = tt_len(nb);
	tab = (char *)malloc(sizeof(char) * (len + 1));
	if (!tab)
		return (0);
	tab[len--] = '\0';
	if (nb == 0)
	{
		tab[0] = 48;
		return (tab);
	}
	ft_convert_to_str(tab, nb, len);
	return (tab);
}

/*#include <stdio.h>

int main(){
	int len = 1000;
    printf("%s\n", ft_itoa(len));
}*/