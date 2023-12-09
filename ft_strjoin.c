/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 17:12:42 by chrlomba          #+#    #+#             */
/*   Updated: 2023/11/23 22:28:47 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *str1, char const *str2)
{
	size_t		str1_counter;
	size_t		str2_counter;
	char	*new_str;

	str1_counter = 0;
	str2_counter = 0;
	new_str = malloc(((ft_strlen(str1) + ft_strlen(str2)) + 1) * sizeof(char));
	if (!new_str)
		return (NULL);
	while (str1_counter <= ft_strlen(str1))
	{
		new_str[str1_counter] = str1[str1_counter];
		str1_counter++;
	}
	while (str2_counter <= ft_strlen(str2))
	{
		new_str[str1_counter + str2_counter] = str2[str2_counter];
		str2_counter++;
	}
	new_str[str1_counter + str2_counter] = '\0';
	return (new_str);
}

// int	main(void)
// {
// 	char *s1 = "ciao";
// 	char *s2 = " pasquale";
// 	char *s3 = ft_strjoin(s1, s2);
// 	printf ("%s",s3);
// 	free(s3);
// }
