/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_until_nl.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 12:17:27 by chrlomba          #+#    #+#             */
/*   Updated: 2025/04/11 13:18:11 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"

static void	copy_chars(char *dest, const char *src,
		size_t *dest_counter, size_t src_len)
{
	size_t	i;

	i = 0;
	while (i < src_len && src[i] != '\n')
	{
		dest[*dest_counter] = src[i];
		(*dest_counter)++;
		i++;
	}
	dest[*dest_counter] = ' ';
	(*dest_counter)++;
}

static size_t	ft_strlen_nl(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str && str[i] != '\0' && str[i] != 32)
		i++;
	return (i);
}

char	*ft_strjoin_until_nl(char const *str1, char const *str2)
{
	size_t		new_str_counter;
	size_t		str1_len;
	size_t		str2_len;
	char		*new_str;

	if (!str1 && !str2)
		return (NULL);
	str1_len = ft_strlen(str1);
	str2_len = ft_strlen_nl(str2);
	new_str = (char *)ft_calloc(((str1_len + str2_len) + 1), sizeof(char ));
	if (!new_str)
		return (NULL);
	new_str_counter = 0;
	if (str1)
		copy_chars(new_str, str1, &new_str_counter, str1_len);
	if (str2)
		copy_chars(new_str, str2, &new_str_counter, str2_len);
	return (new_str);
}
