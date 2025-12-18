/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrilomb <chrilomb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 18:53:04 by chrilomb          #+#    #+#             */
/*   Updated: 2025/12/18 19:57:14 by chrilomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"

int	ft_strncmp(const char *str, const char *cmp, size_t n_bytes)
{
	size_t		i;

	i = 0;
	while (i < n_bytes && str[i] != '\0'
		&& cmp[i] != '\0' && str[i] == cmp[i])
		i++;
	if (i == n_bytes)
		return (0);
	return ((unsigned char )str[i] - (unsigned char )cmp[i]);
}

// int	main(void)
// {
// 	const char *s1 = "ciao pasquale  ";
// 	const char *s2 = "ciao pasquale  ";
// 	int res = ft_strncmp(s1, s2, 14);
// 	printf ("il mio coso fa \t%i\n",res);
// 	int res2 = strncmp(s1, s2, 14);
// 	printf ("il suo coso fa \t%i\n",res2);
// }
