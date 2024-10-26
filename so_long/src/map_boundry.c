/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_boundry.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokariou <mokariou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 21:12:55 by mokariou          #+#    #+#             */
/*   Updated: 2024/10/25 19:02:11 by mokariou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

static int	check_walls(t_data *data)
{
	int	i;
	int	j;

	i = 0;
	while (i < data->map_widt)
	{
		if (data->map[0][i] != '1' || data->map[data->map_heit - 1][i] != 1)
			return (printf("YO brodie put the walls right\n"), 1);
		i++;
	}
	j = 1;
	while (j < data->map_heit - 1)
	{
		if (data->map[j][0] != '1' || data->map[j][data->map_widt - 1] != '1')
			return (printf("YO brodie put the walls right\n"), 1);
		j++;
	}
	return (0);
}

void	check_p_e_c2(t_data *data, int c_coin, int c_exit, int c_player)
{
	int	i;
	int	j;

	i = 0;
	while (i < data->map_heit)
	{
		j = 0;
		while (j++ < data->map_widt)
		{
			if (data->map[i][j] == 'P')
				c_player++;
			if (data->map[i][j] == 'E')
				c_exit++;
			if (data->map[i][j] == 'C')
				c_coin++;
			j++;
		}
		i++;
	}
}

static int	check_p_e_c(t_data *data)
{
	int	count_player;
	int	count_exit;
	int	count_coin;

	count_player = 0;
	count_exit = 0;
	count_coin = 0;
	check_p_e_c2(data, count_coin, count_exit, count_player);
	if (count_exit != 1 || count_player != 1 || count_coin == 0)
		return (printf("there is more than 1 player or 1 exit or no C\n"), 1);
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
