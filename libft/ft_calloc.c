/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokariou <mokariou@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 18:15:46 by mokariou          #+#    #+#             */
/*   Updated: 2024/10/14 18:33:23 by mokariou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num_elements, size_t size_of_ele)
{
	void	*res;
	size_t	total;

	total = num_elements * size_of_ele;
	res = malloc(total);
	if (!res)
		return (NULL);
	ft_memset(res, 0, total);
	return (res);
}

// #include <stdio.h>
// int	main(void)
// {
// 	size_t	*tab;
// 	size_t	count = 6;

// 	tab = ft_calloc(SIZE_MAX, sizeof(SIZE_MAX));

// 	for (size_t i = 0; i < count; i++){
// 		printf("%zu", tab[i]);
// 	}
// }