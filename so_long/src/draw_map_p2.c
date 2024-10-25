/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_map_p2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokariou <mokariou@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 17:23:12 by mokariou          #+#    #+#             */
/*   Updated: 2024/10/25 18:12:13 by mokariou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	place_empty(t_data *data, int i, int j)
{
	mlx_put_image_to_window(data->init, data->win,
		data->img_empty, j * TILE_SIZE, i * TILE_SIZE);
}
