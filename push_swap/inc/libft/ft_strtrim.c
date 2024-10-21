/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokariou <mokariou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 13:56:47 by mokariou          #+#    #+#             */
/*   Updated: 2024/09/05 17:42:21 by mokariou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	char	*tab;
	size_t	end;
	size_t	t;
	size_t	len;

	i = 0;
	t = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	end = ft_strlen(s1);
	while (i < end && ft_strchr(set, s1[end - 1]))
		end--;
	len = end - i + 1;
	tab = malloc(sizeof(char) * (len));
	if (!tab)
		return (NULL);
	while (i < end)
	{
		tab[t] = s1[i];
		t++;
		i++;
	}
	tab[t] = '\0';
	return (tab);
}

/*#include <stdio.h>
int	main()
{
	const char *s = "kkkkkkkkkkkkkkkkkkkktoma 3lal popkkkkkk";
	const char *set = "k";
	printf("%s", ft_strtrim(s, set));
}*/