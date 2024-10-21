# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mokariou <mokariou@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/13 12:47:30 by mokariou          #+#    #+#              #
#    Updated: 2024/10/14 16:34:45 by mokariou         ###   ########.fr        #
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
      ft_strmapi.c ft_itoa.c ft_split.c ft_striteri.c

SRC_BONUS = ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c \
ft_lstclear_bonus.c ft_lstdelone_bonus.c ft_lstiter_bonus.c \
ft_lstlast_bonus.c ft_lstmap_bonus.c ft_lstnew_bonus.c \
ft_lstsize_bonus.c

OFILES = $(SRC:.c=.o)
OFILES_BONUS = $(SRC_BONUS:.c=.o)

all: $(NAME)

$(NAME): $(OFILES)
	ar rc $(NAME) $(OFILES)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

bonus: $(OFILES_BONUS)
	ar rc $(NAME) $(OFILES_BONUS)

clean:
	rm -f $(OFILES) $(OFILES_BONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re