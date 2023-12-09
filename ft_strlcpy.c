/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 21:52:56 by chrlomba          #+#    #+#             */
/*   Updated: 2023/11/04 00:21:27 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size)
	{
		while (--size && src[i])
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}
/*
int	main (void)
{
	char dst[50];
	char dest[50];
	const char src[] = "ciao pasquale";
	size_t	n = 14;

	ft_strlcpy(dst, src, n);
	printf("il mio ft_\t%s\n", dst);
	strncpy(dest, src, n);
	printf("il suo ft_\t%s\n", dest);
}
*/
