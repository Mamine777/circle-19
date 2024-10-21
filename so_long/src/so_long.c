/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokariou <mokariou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 13:33:51 by mokariou          #+#    #+#             */
/*   Updated: 2024/09/28 14:43:16 by mokariou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	so_long(int fd, t_data *data, char *file)
{
	if (checkmap(fd) || check_angles(fd) || map_boundry(data))
	{
		printf("Error: Invalid map!\n");
		close(fd);
		exit(1);
	}
	fd = open(file, O_RDONLY);
	if (fd < 0)
	{
		printf("Error: file not valid\n");
		return(1);
	}
	init_map(fd, data);
	close(fd);
	data->init = mlx_init();
	data->win = mlx_new_window(data->init, data->map_widt * TILE_SIZE,
					data->map_heit * TILE_SIZE, "So Long");
	load_img(data);
	read_map(data);
	mlx_key_hook(data->win, ft_action, data);
	mlx_loop(data->init);
}

int	main(int ac, char **av)
{
	int		fd;
	t_data	data;

	if (ac != 2)
		return (1);
	fd = open(av[1], O_RDONLY);
	if (fd < 0)
	{
		printf("Error: file not valid\n");
		return(1);
	}
	so_long(fd, &data, av[1]);
	return (0);
}