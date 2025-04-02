/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 16:05:21 by chrlomba          #+#    #+#             */
/*   Updated: 2025/04/02 16:05:49 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/libft.h"

char	*ft_strndup(const char *s, size_t n)
{
	char	*new;
	size_t	i;

	new = malloc(n + 1);
	if (!new)
		return (NULL);
	i = 0;
	while (i < n && s[i])
	{
		new[i] = s[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}
