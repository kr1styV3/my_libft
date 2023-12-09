/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 19:09:26 by chrlomba          #+#    #+#             */
/*   Updated: 2023/11/12 19:22:13 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *src, int charset, size_t n_bytes)
{
	const unsigned char	*src_holder;

	src_holder = (const unsigned char *)src;
	while (n_bytes--)
	{
		if (*src_holder == (char)charset)
			return ((char *)src_holder);
		src_holder++;
	}
	return (NULL);
}

// int main()
// {
// 	const char *str = "ciao pasquale";
// 	char charset = 'a';
// 	char *result;

// 	result = ft_memchr(str, charset, sizeof(str));
// 	if (result != NULL) {
// 	printf("Character '%c' found at position: %ld\n", charset, result - str);
// 	} else {
// 		printf("Character '%c' not found in the string.\n", charset);
// 	}

// 	return 0;
// }
