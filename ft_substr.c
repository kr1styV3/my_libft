/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:55:29 by chrlomba          #+#    #+#             */
/*   Updated: 2023/11/13 16:28:57 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sx;
	size_t	i;

	i = 0;
	sx = (char *)malloc(len * sizeof(char));
	if (!sx)
		return (NULL);
	if ((unsigned int)start > len)
		return ('\0');
	while (i <= len - start)
	{
		sx[i] = s[start + i];
		i++;
	}
	sx[i] = '\0';
	return (sx);
}

// int	main(void)
// {
// 	char const	*s;

// 	s = ft_calloc(14, sizeof(char const));
// 	char *sub;
// 	sub = ft_substr(s, 1, 14);
// 	printf("%s", sub);
// 	free(sub);
// }
