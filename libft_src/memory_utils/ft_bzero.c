/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrilomb <chrilomb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 18:31:36 by chrilomb          #+#    #+#             */
/*   Updated: 2025/12/18 19:57:14 by chrilomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"

void	ft_bzero(void *str, size_t n_bytes)
{
	ft_memset(str, '\0', n_bytes);
}
/*
int	main(void)
{
	size_t	n;
	char	s[] = "ciao pasquale";
	char	x[] = "ciao pasquale";

	n = 5;
	ft_bzero(s, n);
	printf("il mio ft_\t%s\n", s);
	bzero(x, n);
	printf("il NON mio ft_\t%s\n", x);
}
*/
