/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrilomb <chrilomb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 13:52:46 by chrilomb          #+#    #+#             */
/*   Updated: 2025/12/18 19:57:14 by chrilomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"

size_t	ft_strcspn(const char *s1, const char *s2)
{
	size_t		my_strcspn_count;
	const char	*my_strcspn_ptr1;
	const char	*my_strcspn_ptr2;

	my_strcspn_count = 0;
	my_strcspn_ptr1 = s1;
	while (*my_strcspn_ptr1 != '\0')
	{
		my_strcspn_ptr2 = s2;
		while (*my_strcspn_ptr2 != '\0')
		{
			if (*my_strcspn_ptr1 == *my_strcspn_ptr2)
				return (my_strcspn_count);
			my_strcspn_ptr2++;
		}
		my_strcspn_count++;
		my_strcspn_ptr1++;
	}
	return (my_strcspn_count);
}
