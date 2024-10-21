/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokariou <mokariou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 20:17:02 by mokariou          #+#    #+#             */
/*   Updated: 2024/08/05 10:43:50 by mokariou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unsitd.h>

void  ft_putchar(char c)
{
  write (1, &c, 1);
}

void  ft_print_alphabet(void)
{
  char c;
  
  c = 'a';
  while (c <= 'z')
  {
    ft_putchar(c);
    c++;
  }
}

/*int main()
{
  ft_print_alphabet();
}*/