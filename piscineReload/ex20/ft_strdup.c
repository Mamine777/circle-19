/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokariou <mokariou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 13:24:59 by mokariou          #+#    #+#             */
/*   Updated: 2024/08/05 13:46:58 by mokariou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <string.h>

char    *ft_strdup(char *src)
{
    int		i;
	int		j;
	char	*tab;

	i = 0;
	while (src[i])
		i++;
	tab = (char *)malloc(sizeof(char) * (i + 1));
	if (!tab)
		return (0);
	j = 0;
	while (j < i)
	{
		tab[j] = src[j];
		j++;
	}
	tab[j] = '\0';
	return (tab);
}

/*#include <stdio.h>

int	main()
{
	int	i = 0;
	char *tot = "hello";
		printf("%s\n", ft_strdup(tot));
}*/