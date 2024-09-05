/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 21:00:07 by chrlomba          #+#    #+#             */
/*   Updated: 2024/09/05 20:46:13 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include "push_swap_helper.h"

// List structure
typedef struct s_list
{
    void			*content;
    struct s_list	*next;
}	t_list;

// arr_to_num
int		ft_atoi(const char *number_str);
long	ft_atol(const char *number_str);
long long ft_atoll(const char *number_str);
short	ft_atos(const char *number_str);
unsigned int ft_atoui(const char *number_str);

// is_char
int		ft_isalnum(int chr);
int		ft_isalpha(int chr);
int		ft_isascii(int chr);
int		ft_isdigit(int chr);
int		ft_isprint(int chr);
int		ft_tolower(int chr);
int		ft_toupper(int chr);

// mem_alloc
void	*ft_calloc(size_t num_elems, size_t byte_size);
void	*ft_realloc(void *ptr, size_t old_size, size_t new_size);

// memory_utils
void	ft_bzero(void *str, size_t n_bytes);
void	*ft_memchr(const void *src, int charset, size_t n_bytes);
void	*ft_memcpy(void *dest, const void *src, size_t n_bytes);
void	*ft_memmove(void *dest, const void *src, size_t n_bytes);
int		ft_memcmp(const void *src1, const void *src2, size_t n_bytes);
void	*ft_memset(void *str, int c, size_t n_bytes);

// str_alloc
char	*ft_strdup(const char *src);
char	*ft_substr(const char *s, unsigned int start, size_t len);
char	*ft_strjoin(const char *s1, const char *s2);
char	*ft_strtrim(const char *s1, const char *set);
char	*ft_itoa(int n);

//mtx utils
char	**ft_split(const char *s, char c);
void	ft_free_mtx(char **split);

// str_utils
size_t	ft_strlen(const char *str);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int		ft_strncmp(const char *str, const char *cmp, size_t n_bytes);
char	*ft_strmapi(const char *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));

// file_descriptor
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(const char *s, int fd);
void	ft_putendl_fd(const char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

// list
t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void*));
void	ft_lstclear(t_list **lst, void (*del)(void*));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
t_int_list	*ft_int_lstnew(int content);
void		ft_int_lstclear(t_int_list *stack);
void		ft_int_lstadd_back(t_int_list **lst, t_int_list *new);
int			ft_int_lstsize(t_int_list *lst);

#endif