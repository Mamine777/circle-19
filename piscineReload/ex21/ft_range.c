/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokariou <mokariou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 13:49:03 by mokariou          #+#    #+#             */
/*   Updated: 2024/08/05 14:10:37 by mokariou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
int *ft_range(int min, int max)
{
    int total;
    int i;
    int *tab;

    if (min > max)
        return (0);
    total = max - min;
    tab = (int *)malloc(sizeof(int) * (total));
    if (!tab)
        return (0);
    i = 0;
    while (i <= total)
    {
        tab[i] = min;
        min++;
        i++;
    }
    return (tab);
}

/*#include <stdio.h>
int main()
{
    int i = 0;
    int min = 0;
    int max = 100;
    int *tab = ft_range(min, max);

    while (i < max - min)
    {
        printf("%d\n", tab[i]);
        i++;
    }
}*/