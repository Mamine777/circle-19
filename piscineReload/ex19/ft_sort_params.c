/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokariou <mokariou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 12:23:42 by mokariou          #+#    #+#             */
/*   Updated: 2024/08/05 13:20:01 by mokariou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
    write(1, &c, 1);
}

void	ft_put_it(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	swap(char *a, char *b)
{
	char	temp;
	
	temp = *a;
	*a = *b;
	*b = temp;
}

int	ft_comp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int	main(int ac, char **av)
{
	int	i;
	int	len = ac - 1;

	i = 1;
	while (i < len)
	{
		if (ft_comp(av[i], av[i + 1]) > 0)
			swap(av[i], av[i + 1]);
		i++;
	}
	i = 1;
	while (i < len)
	{
		ft_put_it(av[i]);
		write(1, "\n", 1);
		i++;
	}
}