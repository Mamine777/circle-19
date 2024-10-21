/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokariou <mokariou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 10:55:22 by mokariou          #+#    #+#             */
/*   Updated: 2024/08/05 10:55:23 by mokariou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void  ft_putchar(char c)
{
  write (1, &c, 1);
}

void  ft_is_negative(int n)
{
  if (n < 0)
    ft_putchar('N');
  else
    ft_putchar('P');
}