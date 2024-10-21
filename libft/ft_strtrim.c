/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokariou <mokariou@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 13:56:47 by mokariou          #+#    #+#             */
/*   Updated: 2024/10/16 13:40:06 by mokariou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	end;
	char	*trimmed_str;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	end = ft_strlen(s1);
	while (end > i && ft_strchr(set, s1[end - 1]))
		end--;
	trimmed_str = (char *)malloc(sizeof(char) * (end - i + 1));
	if (!trimmed_str)
		return (NULL);
	ft_strlcpy(trimmed_str, &s1[i], end - i + 1);
	return (trimmed_str);
}

/*#include <stdio.h>
int	main()
{
	const char *s = "kkkkkkkkkkkkkkkkkkkktoma 3lal popkkkkkk";
	const char *set = "k";
	printf("%s", ft_strtrim(s, set));
}*/