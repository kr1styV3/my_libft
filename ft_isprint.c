/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 19:18:46 by chrlomba          #+#    #+#             */
/*   Updated: 2023/11/23 22:26:36 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int chr)
{
	unsigned char	chr_holder;

	chr_holder = (unsigned char )chr;
	if (chr_holder >= 32 && chr_holder <= 126)
		return (16384);
	return (0);
}
