/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recrusive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokariou <mokariou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 11:28:06 by mokariou          #+#    #+#             */
/*   Updated: 2024/08/05 11:44:36 by mokariou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recrusive_factorial(int nb)
{
	if (nb == 0)
        return (1);
    if (nb < 0)
        return (0);
	else
		return (ft_recrusive_factorial(nb - 1) * (nb));
}

/*#include <stdio.h>

int main()
{me
    printf("this  %d\n",ft_recrusive_factorial(10));
}*/