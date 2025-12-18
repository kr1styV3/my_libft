/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freejoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrilomb <chrilomb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 22:53:07 by chrilomb          #+#    #+#             */
/*   Updated: 2025/12/18 19:57:14 by chrilomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"

static void	copy_chars(char *dest, const char *src,
		size_t *dest_counter, size_t src_len)
{
	size_t	i;

	i = 0;
	while (i < src_len)
	{
		dest[*dest_counter] = src[i];
		(*dest_counter)++;
		i++;
	}
}

char	*ft_freejoin(char *str1, char const *str2)
{
	size_t		new_str_counter;
	size_t		str1_len;
	size_t		str2_len;
	char		*new_str;

	if (!str1 && !str2)
		return (NULL);
	str1_len = ft_strlen(str1);
	str2_len = ft_strlen(str2);
	new_str = ft_calloc(((str1_len + str2_len) + 1), sizeof(char));
	if (!new_str)
		return (NULL);
	new_str_counter = 0;
	if (str1)
		copy_chars(new_str, str1, &new_str_counter, str1_len);
	if (str2)
		copy_chars(new_str, str2, &new_str_counter, str2_len);
	free(str1);
	return (new_str);
}
