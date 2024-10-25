/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_img.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokariou <mokariou@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:25:57 by mokariou          #+#    #+#             */
/*   Updated: 2024/10/25 12:12:46 by mokariou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	load_img(t_data *data)
{
	data->img_exit = mlx_xpm_file_to_image(data->init, "../img/emgexit.xpm",
			&data->widt_img, &data->heit_img);
	data->img_empty = mlx_xpm_file_to_image(data->init, "../img/fond.xpm",
			&data->widt_img, &data->heit_img);
	data->img_coin = mlx_xpm_file_to_image(data->init, "../img/poke.xpm",
			&data->widt_img, &data->heit_img);
	data->img_bush = mlx_xpm_file_to_image(data->init, "../img/bush.xpm",
			&data->widt_img, &data->heit_img);
	data->img = mlx_xpm_file_to_image(data->init, "../img/npcback.xpm",
			&data->widt_img, &data->heit_img);
}
