/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_address.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokariou <mokariou@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 21:37:26 by mokariou          #+#    #+#             */
/*   Updated: 2024/10/21 12:26:08 by mokariou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_convert_address(char *buffer, unsigned long address)
{
	const char	*hex = "0123456789abcdef";
	int			i;

	i = 15;
	while (address > 0)
	{
		buffer[i--] = hex[address & 0xf];
		address >>= 4;
	}
	while (i >= 0)
		buffer[i--] = '0';
}

int	ft_address(void *ptr)
{
	char			buffer[18];
	int				i;
	int				count_bytes;
	unsigned long	address;

	count_bytes = 0;
	address = (unsigned long)ptr;
	count_bytes += write(1, "0x", 2);
	if (address == 0)
		return (count_bytes += write(1, "0", 1));
	ft_convert_address(buffer, address);
	i = 0;
	while (i < 16 && buffer[i] == '0')
		i++;
	while (i < 16)
		count_bytes += write(1, &buffer[i++], 1);
	return (count_bytes);
}

/*#include <stdio.h>


int ft_address(void *ptr);

int main()
{
    int num = 42;            
    int *ptr_num = &num;
    char str[] = "hello"; 
    char *ptr_str = str;  
    void *generic_ptr = (void *)ptr_num;

    printf("Address of num: ");
    ft_address(ptr_num); 
    printf("\n");

    printf("Address of str: ");
    ft_address(ptr_str);    
    printf("\n");

    printf("Address of generic_ptr: ");
    ft_address(generic_ptr); 
    printf("\n");

    return 0;
}*/