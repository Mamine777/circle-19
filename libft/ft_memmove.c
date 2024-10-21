/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokariou <mokariou@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 17:37:56 by mokariou          #+#    #+#             */
/*   Updated: 2024/10/14 13:24:01 by mokariou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	copy_forward(unsigned char *d, const unsigned char *s, size_t num)
{
	size_t	i;

	i = 0;
	while (i < num)
	{
		d[i] = s[i];
		i++;
	}
}

static void	copy_backward(unsigned char *d, const unsigned char *s, size_t num)
{
	while (num > 0)
	{
		num--;
		d[num] = s[num];
	}
}

void	*ft_memmove(void *dest_str, const void *src_str, size_t numtes)
{
	const unsigned char	*src;
	unsigned char		*dest;

	src = (const unsigned char *)src_str;
	dest = (unsigned char *)dest_str;
	if (dest_str == src_str || numtes == 0)
		return (dest_str);
	if (dest > src)
		copy_backward(dest, src, numtes);
	else
		copy_forward(dest, src, numtes);
	return (dest_str);
}

// #include <stdio.h>
// int	main()
// {
// 	char dest[50] = "hello";
// 	const char src[50] = "tomaa";
// 	size_t j = 3;

// 	printf("Before ft_memmove: dest = %s\n", dest);
// 	ft_memmove(dest, src, j);
// 	printf("After ft_memmove: dest = %s\n", dest);

// 	return 0;
// }