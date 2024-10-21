/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokariou <mokariou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 12:19:03 by mokariou          #+#    #+#             */
/*   Updated: 2024/09/05 11:52:28 by mokariou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *block1, const char *block2, size_t num )
{
	size_t	i;

	i = 0;
	while (block1[i] && block2[i] && i < num)
	{
		if (block1[i] != block2[i])
			return ((unsigned char)block1[i] - (unsigned char)block2[i]);
		i++;
	}
	if (i < num)
	{
		if (block1[i] != block2[i])
			return ((unsigned char)block1[i] - (unsigned char)block2[i]);
	}
	return (0);
}

/*#include <stdio.h>
#include <string.h>

int	main()
{
	char *s = "tomaaa";
	char s2[] = "hello";
	printf("%d \n", ft_strncmp(s, s2, 6));
	printf("%d \n", strncmp(s, s2, 6));
}*/