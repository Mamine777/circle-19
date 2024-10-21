/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_coins.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokariou <mokariou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 22:46:40 by mokariou          #+#    #+#             */
/*   Updated: 2024/09/19 16:25:47 by mokariou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	count_coins(t_data *data)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	j = 0;
	while (i < data->map_heit)
	{
		while (j < data->map_widt)
		{
			if (data->map[i][j] == 0)
				count++;
			j++;
		}
		i++;
	}
	return (count);
}
