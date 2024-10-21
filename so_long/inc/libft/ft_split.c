/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokariou <mokariou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 20:02:18 by mokariou          #+#    #+#             */
/*   Updated: 2024/09/05 17:30:45 by mokariou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	find_da_sep(char s, char c)
{
	return (c == s);
}

static int	calcu_da_len(char const *str, char sep)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && find_da_sep(str[i], sep))
			i++;
		if (str[i])
			count++;
		while (str[i] && !find_da_sep(str[i], sep))
			i++;
	}
	return (count);
}

static int	len_for_dup(char const *str, char sep)
{
	int	i;

	i = 0;
	while (str[i] && !find_da_sep(str[i], sep))
		i++;
	return (i);
}

static char	*dup_it(char const *str, char c)
{
	int		i;
	int		len;
	char	*tab;

	len = len_for_dup(str, c);
	i = 0;
	tab = malloc(sizeof(char) * (len + 1));
	if (!tab)
		return (NULL);
	while (i < len)
	{
		tab[i] = str[i];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;

	i = 0;
	tab = (char **)malloc(sizeof(char *) * (calcu_da_len(s, c) + 1));
	if (!tab)
		return (NULL);
	while (*s)
	{
		while (*s && find_da_sep(*s, c))
			s++;
		if (*s)
		{
			tab[i] = dup_it(s, c);
			if (!tab[i++])
			{
				free(tab);
				return (NULL);
			}
		}
		while (*s && !find_da_sep(*s, c))
			s++;
	}
	tab[i] = NULL;
	return (tab);
}

/*int main()
{
    char **tab;
    char *c1 = "helloKWorld";
    char x = 'K';
    tab = ft_split(c1, x);

    for (int j = 0; tab[j] != NULL; j++)
    {
        printf("%s\n", tab[j]); 
        free(tab[j]);           
    }
    free(tab);      

    return 0;
}*/