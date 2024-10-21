/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokariou <mokariou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 13:44:20 by mokariou          #+#    #+#             */
/*   Updated: 2024/09/05 11:45:39 by mokariou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

const char	*ft_strrchr(const char *str, int c)
{
	size_t			i;
	unsigned char	search_str;

	i = ft_strlen(str);
	search_str = (unsigned char)c;
	while (i > 0)
	{
		if ((unsigned char)str[i] == search_str)
		{
			return ((char *)str + i);
		}
		i--;
	}
	if ((unsigned char)str[0] == search_str)
		return ((char *)str + i);
	return (0);
}

/*#include <stdio.h>
int	main()
{
	char *s = "toma hello ooe ";
	char c = 't';
	printf("%s\n", ft_strrchr(s, c)); // passing str + i to printf it 
									//prints everything from I to \0
}*/