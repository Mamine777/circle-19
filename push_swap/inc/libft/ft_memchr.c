/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokariou <mokariou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 00:17:27 by mokariou          #+#    #+#             */
/*   Updated: 2024/09/05 17:41:02 by mokariou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *mem_block, int byte, size_t n)
{
	const unsigned char	*s;
	unsigned char		c;
	size_t				i;

	s = (const unsigned char *)mem_block;
	c = (unsigned char)byte;
	i = 0;
	while (i < n)
	{
		if (s[i] == c)
			return ((void *)s + i);
		i++;
	}
	return (0);
}

/*#include <stdio.h>
#include <string.h>
int main()
{
    char *s = "GAllo";
    int c = 65;
    
    printf("%p\n", ft_memchr(s, c, ft_strlen(s)));
    printf("%p\n", memchr(s, c, ft_strlen(s)));
}
*/