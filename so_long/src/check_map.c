/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokariou <mokariou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 12:43:39 by mokariou          #+#    #+#             */
/*   Updated: 2024/10/26 15:59:18 by mokariou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

static int	check_character(char c)
{
	if (c != 'P' && c != '1' && c != 'C' && c != '0' && c != 'E')
	{
		printf("woopwoop🤡, found undefined characters, fix the map please..\n");
		return (1);
	}
	return (0);
}

int	checkmap(int fd)
{
	char	*buffer;
	int		index;
	int		width;

	buffer = get_next_line(fd);
	if (!buffer)
		return (0);
	width = ft_strlen(buffer);
	while (buffer != NULL)
	{
		index = 0;
		while (buffer[index] && buffer[index] != '\n')
		{
			if (buffer[width - 1] != '\n'&& check_character(buffer[index]) == 1)
				return (free(buffer), close(fd), 1);
			index++;
		}
		free(buffer);
		buffer = get_next_line(fd);
		if (buffer && buffer[0] == '\0')
			return (free(buffer), close(fd), 0);
	}
	return (0);
}

// #include <stdio.h>

// int	main(int ac, char **av)
// {
// 	(void) ac;
// 	int		fd;
	
// 	fd = open(av[1], O_RDONLY);
// 	printf("%d", checkmap(fd));	
// }