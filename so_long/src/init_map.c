/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokariou <mokariou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 13:31:12 by mokariou          #+#    #+#             */
/*   Updated: 2024/10/05 13:17:45 by mokariou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	count_dimensions(int fd, t_data *data)
{
	char	*buffer;

	buffer = get_next_line(fd);
	if (!buffer)
		return ;
	if (buffer[ft_strlen(buffer) - 1] == '\n')
		data->map_widt = ft_strlen(buffer) - 1;
	else
		data->map_widt = ft_strlen(buffer);
	data->map_heit = 0;
	while (buffer != NULL && buffer[0] != '\0')
	{
		data->map_heit++;
		free(buffer);
		buffer = get_next_line(fd);
	}
	free(buffer);
}

void	locate_memory(t_data *data)
{
	int	i;

	data->map = (char **)malloc(sizeof(char *) * (data->map_heit));
	if (!data->map)
	{
		printf("memory allocation failed in init_map!");
		exit(1);
	}
	i = 0;
	while (i < data->map_heit)
	{
		data->map[i] = (char *)malloc(sizeof(char) * (data->map_widt + 1));
		if (!data->map)
		{
			printf("memory allocation failed in init_map!\n");
			exit(1);
		}
		i++;
	}
}

void	fill_map(int fd, t_data *data)
{
	char	*buffer;
	int		i;

	buffer = get_next_line(fd);
	if (!buffer)
		exit(1);
	i = 0;
	while (buffer != NULL && buffer[0] != '\0')
	{
		ft_strlcpy(data->map[i], buffer, data->map_widt + 1);
		i++;
		free(buffer);
		buffer = get_next_line(fd);
	}
}

void	init_map(int fd, t_data *data)
{
	count_dimensions(fd, data);
	locate_memory(data);
	fill_map(fd, data);
}