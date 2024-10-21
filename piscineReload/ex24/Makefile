# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mokariou <mokariou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/06 15:51:55 by mokariou          #+#    #+#              #
#    Updated: 2024/08/06 16:15:44 by mokariou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

AFILE = libft.a

SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c

OFILE = srcs/ft_putchar.o srcs/ft_putstr.o srcs/ft_strcmp.o srcs/ft_strlen.o srcs/ft_swap.o

all : $(AFILE)

$(AFILE) :
		gcc -Wall -Wextra -Werror $(SRC) && ar rc $(AFILE) $(OFILE)

clean : 
	rm -f $(OFILE)
fclean : clean
	rm -f $(AFILE)
re : fclean all
