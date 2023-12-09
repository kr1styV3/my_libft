/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:33:16 by chrlomba          #+#    #+#             */
/*   Updated: 2023/11/12 18:21:40 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int chr)
{
	unsigned char	chr_holder;

	chr_holder = (unsigned char )chr;
	if (chr_holder >= 48 && chr_holder <= 57)
		return (2048);
	else
		return (0);
}
/*
int	main(int ac, char **av)
{
	int		i;
	int		val;

	i = 1;
	while (i <= ac - 1)
	{
		val = ft_isdigit(av[i][0]);
		printf("il valore del mio ft_\t%i\n", val);
		val = isdigit(av[i][0]);
		printf("il valore del NON mio ft_\t%i\n", val);
		i++;
	}
}
*/
