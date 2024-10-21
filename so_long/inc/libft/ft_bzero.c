/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokariou <mokariou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 13:16:23 by mokariou          #+#    #+#             */
/*   Updated: 2024/09/05 13:52:08 by mokariou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*toma;

	toma = (unsigned char *)s;
	while (0 < n)
	{
		toma[n - 1] = 0;
		n--;
	}
}

/*#include <stdio.h>
#include <stdlib.h>

int	main()
{
	void	*b;
	size_t	i = 10;

	b = malloc(i);
	ft_bzero(b, i);
	while (0 < i)
	{
		printf("%d\n", ((unsigned char *)b)[i]);
		i--;
	}
}*/