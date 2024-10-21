/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokariou <mokariou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 10:45:11 by mokariou          #+#    #+#             */
/*   Updated: 2024/08/05 10:50:07 by mokariou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void  ft_putchar(char c)
{
  write (1, &c, 1);
}

void  ft_print_numbers(void)
{
  char c;
  
  c = '0';
  while (c <= '9')
  {
    ft_putchar(c);
    c++;
  }
}
