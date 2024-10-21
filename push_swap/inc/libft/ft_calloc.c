/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokariou <mokariou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 18:15:46 by mokariou          #+#    #+#             */
/*   Updated: 2024/09/05 14:26:42 by mokariou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t element, size_t size_of_ele)
{
	void	*res;
	size_t	total;

	if (element == 0 || size_of_ele == 0 || SIZE_MAX / element < size_of_ele)
		return (NULL);
	total = element * size_of_ele;
	res = malloc(total);
	if (!res)
	{
		free(res);
		return (NULL);
	}
	ft_memset(res, 0, total);
	return (res);
}

/*#include <stdio.h>
int	main(void)
{
	int	*tab;
	size_t	count = 6;

	tab = ft_calloc(count, sizeof(count));

	for (size_t i = 0; i < count; i++){
		printf("%d", tab[i]);
	}
}*/