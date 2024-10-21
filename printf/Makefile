# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mokariou <mokariou@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/16 17:38:28 by mokariou          #+#    #+#              #
#    Updated: 2024/10/21 12:09:26 by mokariou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
LIBFTNAME = libft.a
CC = cc
CFLAGS = -Wall -Werror -Wextra
LIBFTDIR = ./libft

SRCS = 	ft_address.c \
		ft_print_hex.c \
		ft_printf.c \
		ft_unsigned.c \
		printnum.c \
		putstr.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

makelibft:
	@make -C $(LIBFTDIR)
	@cp $(LIBFTDIR)/$(LIBFTNAME) .
	@mv $(LIBFTNAME) $(NAME)

$(NAME): makelibft $(OBJS)
	@ar -r $(NAME) $(OBJS)

clean:
	@rm -f $(OBJS)
	@cd $(LIBFTDIR) && make clean
	
fclean: clean
	@rm -f $(NAME)
	@cd $(LIBFTDIR) && make fclean
	
re: fclean all[po]
# NAME = ft_printf

# CC = gcc

# CFLAGS = -Wall -Wextra -Werror

# SRC = src/ft_address.c src/ft_print_hex.c src/ft_printf.c /
# 		src/ft_unsigned.c src/printnum.c src/putstr.c

# OBJ = $(SRC:.c=.o)

# AFILE = libftprintf.a

# all: $(AFILE) $(NAME)

# $(AFILE): $(OBJ)
# 	ar rc $(AFILE) $(OBJ)
# 	ranlib $(AFILE)

# $(NAME): $(OBJ)
# 	@echo "Compiling .."
# 	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
# 	@echo "Done !"

# %.o: %.c
# 	$(CC) $(CFLAGS) -c $< -o $@

# clean:
# 	@echo "Remove .o  ..."
# 	rm -f $(OBJ)
# 	@echo "Done !"

# fclean: clean
# 	@echo "Remove lib ..."
# 	rm -f $(AFILE) $(NAME)
# 	@echo "Done !"

# re: fclean all