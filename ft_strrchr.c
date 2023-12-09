/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 18:35:40 by chrlomba          #+#    #+#             */
/*   Updated: 2023/11/12 18:52:32 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int charset)
{
	const char		*last_occurrence;

	last_occurrence = NULL;
	while (*str != '\0')
	{
		if (*str == (char)charset)
			last_occurrence = str;
		str++;
	}
	if (charset == '\0')
		return ((char *)str);
	return ((char *)last_occurrence);
}

// int		main(void)
// {
// 	const char	*c = "ciao pasquale";
// 	int		x = 112;
// 	printf("add is : %p\n", c);
// 	ft_strchr(c, x);
// 	printf("il mio coso prima di patire fa :%s\n e il add : %p \n", c, c);
// }
