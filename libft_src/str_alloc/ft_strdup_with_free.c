/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_with_free.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrilomb <chrilomb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 15:06:26 by chrilomb          #+#    #+#             */
/*   Updated: 2025/12/18 19:57:14 by chrilomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"

char	*__ft_strdup_with_free(char *str)
{
	char	*str_copy;
	size_t	str_len;

	str_len = ft_strlen(str);
	str_copy = malloc((str_len + 1) * sizeof(char));
	if (!str_copy)
		return (NULL);
	while (str_len--)
		str_copy[str_len] = str[str_len];
	str_len = ft_strlen(str);
	str_copy[str_len] = '\0';
	free(str);
	return (str_copy);
}
