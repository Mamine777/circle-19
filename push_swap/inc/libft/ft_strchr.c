/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokariou <mokariou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 12:49:14 by mokariou          #+#    #+#             */
/*   Updated: 2024/09/05 11:19:32 by mokariou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int search_str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == (unsigned char)search_str)
		{
			return ((char *)str + i);
		}
		i++;
	}
	if (search_str == '\0')
		return ((char *)str + i);
	return (0);
}

/*#include <stdio.h>
int	main()
{
	char *s = "toma hello ooe ";
	char c = 'o';
	printf("%s\n", ft_strchr(s, c + 200)); // passing str + i to printf it 
	//prints everything from I to \0
}*/