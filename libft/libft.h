/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokariou <mokariou@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 13:20:36 by mokariou          #+#    #+#             */
/*   Updated: 2024/10/14 17:37:53 by mokariou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

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
void		ft_striteri(char *s, void (*f)(unsigned int, char*));
void		*ft_memmove(void *dest_str, const void *src_str, size_t numtes);
size_t		ft_strlcpy(char *dest_str, const char *src_str, size_t dst_size);
void		*ft_calloc(size_t num_elements, size_t size_of_ele);
void		*ft_memchr(const void *s, int c, size_t n);
char		*ft_strrchr(const char *string, int search_str);
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
t_list		*ft_lstnew(void *content);
void		ft_lstadd_front(t_list **lst, t_list *new);
int			ft_lstsize(t_list *lst);
t_list		*ft_lstlast(t_list *lst);
void		ft_lstadd_back(t_list **lst, t_list *new);
void		ft_lstdelone(t_list *lst, void (*del)(void *));
void		ft_lstclear(t_list **lst, void (*del)(void *));
void		ft_lstiter(t_list *lst, void (*f)(void *));
t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif
