/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokariou <mokariou@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 15:45:36 by mokariou          #+#    #+#             */
/*   Updated: 2024/10/10 19:00:39 by mokariou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest_str, const char *src_str, size_t dst_size)
{
	size_t	i;

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

// #include <stdio.h>
// int	main()
// {
// 	char aq[] = "hello";
// 	char to[] = "tomma";

// 	ft_strlcpy(aq, NULL, 3);
// 	printf("%s\n", aq);
// }