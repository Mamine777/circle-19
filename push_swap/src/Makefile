# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mokariou <mokariou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/16 17:38:28 by mokariou          #+#    #+#              #
#    Updated: 2024/09/06 18:43:23 by mokariou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRC = $(wildcard ../inc/libft/*.c ../inc/ft_printf/*.c *.c)

OBJ = $(SRC:.c=.o)

AFILE = pushswap.a

all: $(AFILE) $(NAME)

$(AFILE): $(OBJ)
	ar rc $(AFILE) $(OBJ)
	ranlib $(AFILE)

$(NAME): $(OBJ)
	@echo "Compiling .."
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	@echo "Done !"

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@echo "Remove .o  ..."
	rm -f $(OBJ)
	@echo "Done !"

fclean: clean
	@echo "Remove lib ..."
	rm -f $(AFILE) $(NAME)
	@echo "Done !"

