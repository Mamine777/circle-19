/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokariou <mokariou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 13:20:36 by mokariou          #+#    #+#             */
/*   Updated: 2024/09/05 18:29:23 by mokariou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>

int			ft_toupper(int c);
int			ft_tolower(int c);
int			ft_atoi(const char *str);
int			ft_isalnum(int c);
int			ft_isalpha(int c);
int			ft_isascii(int c);
int			ft_isdigit(int num);
int			ft_isprint(int c);
void		ft_bzero(void *s, size_t n);
void		*ft_memset(void *b, int c, size_t len);
size_t		ft_strlen(const char *str);
void		*ft_memcpy(void *dest_str, const void *src_str, size_t n);
void		*ft_memmove(void *dest_str, const void *src_str, size_t numtes);
size_t		ft_strlcpy(char *dest_str, const char *src_str, size_t dst_size);
void		*ft_calloc(size_t element, size_t size_of_ele);
void		*ft_memchr(const void *s, int c, size_t n);
const char	*ft_strrchr(const char *str, int search_str);
char		*ft_strchr(const char *str, int search_str);
int			ft_strncmp(const char *block1, const char *block2, size_t num );
int			ft_memcmp(const void *str1, const void *str2, size_t num_bytes);
char		*ft_strnstr(const char *str, const char *find, size_t len);
char		*ft_strjoin(char const *s1, char const *s2);
char		**ft_split(char const *s, char c);
char		*ft_strdup(char const *src);
char		*ft_substr(char const *s, unsigned int start, size_t len);
char		*ft_strtrim(char const *s1, char const *set);
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char		*ft_itoa(int n);
void		ft_putchar_fd(char c, int fd);
void		ft_putendl_fd(char *s, int fd);
void		ft_putnbr_fd(int n, int fd);
void		ft_putstr_fd(char *str, int fd);
void		ft_putnbr_fd(int n, int fd);
size_t		ft_strlcat(char *dest, const char *src, size_t size);

#endif