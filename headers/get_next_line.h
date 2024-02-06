/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 16:19:05 by chrlomba          #+#    #+#             */
/*   Updated: 2024/02/06 15:42:29 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <fcntl.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

char		*get_next_line(int fd);
char		*process_buffer(char **rimane, char *buffer);
char		*ft_substr(char *s, unsigned int start, size_t len);
char		*ft_strjoin(char **s1, char *s2);
char		*ft_strdup(char *str);
char		*ft_strdup_with_free(char **s);
char		*handle_read(char **rimane, char *buffer);
size_t		ft_strlen(const char *s);
size_t		ft_strlcat(char *dst, const char *src, size_t size);
int			check_buffer(char *buffer, int *i);

#endif