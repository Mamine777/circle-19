/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokariou <mokariou@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 12:49:14 by mokariou          #+#    #+#             */
/*   Updated: 2024/10/15 10:45:50 by mokariou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int search_str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == (unsigned char)search_str)
		{
			return ((char *)str + i);
		}
		i++;
	}
	if ((unsigned char)search_str == '\0')
		return ((char *)str + i);
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>
// int	main()
// {
// 	printf("%p\n", ft_strchr("test\0", 1024));
// 	printf("%p\n", strchr("test\0", 1024));
// }