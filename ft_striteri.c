/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 21:13:49 by chrlomba          #+#    #+#             */
/*   Updated: 2023/11/25 21:56:34 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, char *(*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, s);
		i++;
	}
	return ;
}

// char	*putword(unsigned int i, char *ch)
// {
// 	ch[i] = 'p';
// 	return (ch);
// }

// int	main(void)
// {
// 	char	s[4] = "ciao";
// 	ft_striteri(s, putword);
// 	for(int i = 0; i < 4; i++)
// 		printf ("tmp[%i] = %c\n", i, s[i]);
// 	return (0);
// }
