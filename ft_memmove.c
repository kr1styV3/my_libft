/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 21:45:36 by chrlomba          #+#    #+#             */
/*   Updated: 2023/11/13 16:53:51 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n_bytes)
{
	const unsigned char		*src_holder;
	unsigned char			*dest_holder;

	if (!dest || !src)
		return (NULL);
	src_holder = (const unsigned char *)src;
	dest_holder = (unsigned char *)dest;
	while (n_bytes--)
		*dest_holder++ = *src_holder++;
	return (dest);
}

/*
int	main(void)
{
	const char *src = "ciao pasquale";
	char dest[13] = "ciao    ";
	char dst[13] = "hellooo ccc ";
	size_t n = 13;

	ft_memmove(dest, src, n);
	dest[n] = '\0';
	printf("my ft_\t%s", dest);
	memmove(dst, src, n);
	dst[n] = '\0';
	printf("\nhis ft_\t%s", dst);
}
*/
