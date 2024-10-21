/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokariou <mokariou@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 13:44:20 by mokariou          #+#    #+#             */
/*   Updated: 2024/10/14 14:47:26 by mokariou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *string, int c)
{
	size_t			i;
	unsigned char	search_char;
	char			*str;

	str = (char *)string;
	i = ft_strlen(string);
	search_char = (unsigned char)c;
	if (search_char == '\0')
		return (&str[i]);
	while (i > 0)
	{
		if ((unsigned char)str[i - 1] == search_char)
			return (&str[i - 1]);
		i--;
	}
	return (NULL);
}

/*#include <stdio.h>
int	main()
{
	char *s = "toma \0hello ooe ";
	char c = '\0';
	printf("%s\n", ft_strrchr(s, c)); // passing str + i to printf it 
									//prints everything from I to \0
}*/