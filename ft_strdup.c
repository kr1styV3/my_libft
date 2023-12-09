/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:18:21 by chrlomba          #+#    #+#             */
/*   Updated: 2023/11/13 15:55:24 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*str_copy;
	size_t	str_len;

	str_len = ft_strlen(str);
	str_copy = malloc(str_len * sizeof(char));
	if (!str_copy)
		return (NULL);
	while (str_len--)
		str_copy[str_len] = str[str_len];
	return (str_copy);
}

// int	main(void)
// {
// 	const char *s = "ciao   \n\n pasquale";
// 	char *f = ft_strdup(s);
// 	printf("%s", f);
// 	free(f);
// }
