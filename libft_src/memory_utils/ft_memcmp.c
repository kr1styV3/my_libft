/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrilomb <chrilomb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 11:52:05 by chrilomb          #+#    #+#             */
/*   Updated: 2025/12/18 19:57:14 by chrilomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"

int	ft_memcmp(const void *src1, const void *src2, size_t n_bytes)
{
	unsigned char	*src1_holder;
	unsigned char	*src2_holder;
	size_t			i;

	i = 0;
	src1_holder = (unsigned char *)src1;
	src2_holder = (unsigned char *)src2;
	while (i < n_bytes)
	{
		if (src1_holder[i] != src2_holder[i])
			return ((int)(src1_holder[i] - src2_holder[i]));
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	const char *s1 = "ciao pasquale  ";
// 	const char *s2 = "ciao pfsquale  ";
// 	int res = ft_memcmp(s1, s2, 14);
// 	printf ("il mio coso fa \t%i\n",res);
// 	int res2 = memcmp(s1, s2, 14);
// 	printf ("il suo coso fa \t%i\n",res2);
// }
