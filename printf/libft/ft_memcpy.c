/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokariou <mokariou@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 13:45:40 by mokariou          #+#    #+#             */
/*   Updated: 2024/10/18 11:07:57 by mokariou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest_str, const void *src_str, size_t n)
{
	unsigned char		*dest;
	const unsigned char	*src;
	size_t				i;

	dest = (unsigned char *)dest_str;
	src = (const unsigned char *)src_str;
	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

// #include <stdio.h>
// #include <string.h>
// int	main()
// {
// 	char dest[50] = "cazzo";
// 	char src[50] = "tomam";
// 	printf("%s\n", (char *)ft_memcpy(NULL, src, strlen(src) + 1));
// 	printf("%s\n", (char *)memcpy(NULL, src, strlen(src) + 1));
// }
