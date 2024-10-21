/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokariou <mokariou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 20:14:46 by mokariou          #+#    #+#             */
/*   Updated: 2024/10/10 19:07:56 by mokariou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*s;
	size_t			i;

	s = b;
	i = 0;
	while (i < len)
	{
		s[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

// #include <stdio.h>
// #include <stdlib.h>

// int	main()
// {
// 	void	*b;
// 	size_t	i = 2;
// 	int	c = 0;

// 	b = malloc(i);
// 	b = NULL;
// 	b = ft_memset(b, c, i);
// 	for (size_t j = 0 ; j < i ; j++){
// 		printf("%d\n", ((unsigned char *)b)[j]);
// 	}
// }