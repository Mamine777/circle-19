# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mokariou <mokariou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/13 12:47:30 by mokariou          #+#    #+#              #
#    Updated: 2024/09/04 19:09:02 by mokariou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a

SRC = ft_memset.c ft_bzero.c ft_strlen.c ft_atoi.c ft_isdigit.c ft_isalpha.c \
      ft_isprint.c ft_isascii.c ft_isalnum.c ft_memchr.c ft_memcpy.c ft_memcmp.c \
      ft_memmove.c ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strncmp.c \
      ft_toupper.c ft_tolower.c ft_strnstr.c ft_strrchr.c ft_calloc.c ft_putchar_fd.c \
      ft_putstr_fd.c ft_putnbr_fd.c ft_putendl_fd.c ft_substr.c ft_strjoin.c ft_strtrim.c \
      ft_strmapi.c ft_itoa.c ft_split.c

OFILES = $(SRC:.c=.o)

# Default target to build the library
all: $(NAME)

# Rule to create the static library
$(NAME): $(OFILES)
	ar rcs $(NAME) $(OFILES)

# Rule to compile .c files into .o files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean up object files
clean:
	rm -f $(OFILES)

# Clean up object files and the library
fclean: clean
	rm -f $(NAME)

# Rebuild the library
re: fclean all
