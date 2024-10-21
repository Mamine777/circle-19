/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_map_p1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokariou <mokariou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 20:44:42 by mokariou          #+#    #+#             */
/*   Updated: 2024/09/19 23:21:02 by mokariou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

static void	place_wall(t_data *data, int i, int j)
{
    mlx_put_image_to_window(data->init, data->win,
		data->img_bush, j * TILE_SIZE, i * TILE_SIZE);
}

static void	place_coin(t_data *data, int i, int j)
{
    mlx_put_image_to_window(data->init, data->win,
		data->img_coin, j * TILE_SIZE, i * TILE_SIZE);
}

void	place_player(t_data *data, int i, int j)
{
    mlx_put_image_to_window(data->init, data->win,
		data->img_player, j * TILE_SIZE, i * TILE_SIZE);
}

void	place_exit(t_data *data, int i, int j)
{
	mlx_put_image_to_window(data->init, data->win,
		data->img_exit, j * TILE_SIZE, i * TILE_SIZE);
}


void	read_map(t_data *data)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < data->map_heit - 1)
	{
		while (j < data->map_widt - 1)
		{
			if (data->map[i][j] == '0')
				place_empty(data, i, j);
			else if (data->map[i][j] == '1')
				place_wall(data, i, j);
			else if (data->map[i][j] == 'C')
				place_coin(data, i, j);
			else if (data->map[i][j] == 'E')
				place_exit(data, i, j);
			else if (data->map[i][j] == 'P')
				place_player(data, i, j);
			j++;
		}
		i++;
	}
}
