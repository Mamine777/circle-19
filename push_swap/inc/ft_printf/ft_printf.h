/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokariou <mokariou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 21:34:01 by mokariou          #+#    #+#             */
/*   Updated: 2024/09/06 15:55:50 by mokariou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdint.h> 

int		ft_printf(const char *format, ...);
int		ft_print_da_s(char *s);
int		print_da_c(int c);
int		print_num(int num);
int		ft_print_hex_low(unsigned int n);
int		ft_print_hex_cap(unsigned int num);
int		ft_prntmod(void);
int		ft_address(void *ptr);
int		ft_unsigned(unsigned int num);
#endif