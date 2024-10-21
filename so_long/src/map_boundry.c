/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_boundry.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokariou <mokariou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 21:12:55 by mokariou          #+#    #+#             */
/*   Updated: 2024/10/01 17:02:46 by mokariou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

static int	check_walls(t_data *data)
{
	int	i;
	int	j;

	for (i = 0; i < data->map_widt; i++)
	{
		if (data->map[0][i] != '1' || data->map[data->map_heit - 1][i])
		{
			printf("YO brodie put the walls right\n");
			return (1);
		}
	}
	for (j = 1; j < data->map_heit - 1; j++)
	{
		if (data->map[j][0] != '1' || data->map[j][data->map_widt - 1] != '1')
		{
			printf("YO brodie put the walls right\n");
			return (1);
		}
	}
	return (0);
}

static int	check_p_e_c(t_data *data)
{
	int	i;
	int	j;
	int	count_player;
	int	count_exit;
	int	count_coin;

	count_player = 0;
	count_exit = 0;
	count_coin = 0;
	for (i = 0; i < data->map_heit; i++)
	{
		for (j = 0; j < data->map_widt; j++)
		{
			if (data->map[i][j] == 'P')
				count_player++;
			if (data->map[i][j] == 'E')
				count_exit++;
			if (data->map[i][j] == 'C')
				count_coin++;
		}
	}
	if (count_exit != 1 || count_player != 1 || count_coin == 0)
	{
		printf("YOO G, there is more than 1 player or 1 exit or no coins\n");
		return (1);
	}
	return (0);
}

int	map_boundry(t_data *data)
{
	if (check_walls(data) == 1)
		return (1);
	if (check_p_e_c(data) == 1)
		return (1);
	return (0);
}
