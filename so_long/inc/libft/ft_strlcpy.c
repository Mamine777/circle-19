/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokariou <mokariou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 15:45:36 by mokariou          #+#    #+#             */
/*   Updated: 2024/09/05 12:05:35 by mokariou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest_str, const char *src_str, size_t dst_size)
{
	size_t	i;

	if (!src_str)
		return (0);
	if (dst_size > 0)
	{
		i = 0;
		while (src_str[i] && (dst_size - 1) > i)
		{
			dest_str[i] = src_str[i];
			i++;
		}
		dest_str[i] = '\0';
	}
	return (ft_strlen(src_str));
}

/*#include <stdio.h>
int	main()
{
	char aq[] = "hello";
	char to[] = "tomma";

	ft_strlcpy(aq, to, 3);
	printf("%s\n", aq);
}*/