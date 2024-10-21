# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mokariou <mokariou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/08 15:29:14 by mokariou          #+#    #+#              #
#    Updated: 2024/08/08 15:44:41 by mokariou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRC = ft_display_file.c

OFILE = ft_display_file.o

all : $(NAME)

$(NAME) :
		gcc -Wall -Wextra -Werror $(SRC)
		gcc $(SRC) -o $(NAME)
fclean :
		rm -rf $(OFILE)
clean :
		rm -rf $(NAME)
re : fclean all
	