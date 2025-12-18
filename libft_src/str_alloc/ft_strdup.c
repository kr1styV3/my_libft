/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrilomb <chrilomb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:18:21 by chrilomb          #+#    #+#             */
/*   Updated: 2025/12/18 19:57:14 by chrilomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"

char	*ft_strdup(const char *str)
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
	return (str_copy);
}

// int	main(void)
// {
// 	const char *s = "ciao   \n\n pasquale";
// 	char *f = ft_strdup(s);
// 	printf("%s", f);
// 	free(f);
// }
