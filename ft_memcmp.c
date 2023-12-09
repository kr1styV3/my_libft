/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 11:52:05 by chrlomba          #+#    #+#             */
/*   Updated: 2023/11/13 13:06:04 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *src1, const void *src2, size_t n_bytes)
{
	const unsigned char	*src1_holder;
	const unsigned char	*src2_holder;
	size_t				i;

	i = 0;
	src1_holder = (const unsigned char *)src1;
	src2_holder = (const unsigned char *)src2;
	while (i < n_bytes && src1_holder[i] != '\0' && src2_holder[i] != '\0'
		&& src1_holder[i] == src2_holder[i])
		i++;
	if (i < n_bytes)
		return (src1_holder[i] - src2_holder[i]);
	else
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
