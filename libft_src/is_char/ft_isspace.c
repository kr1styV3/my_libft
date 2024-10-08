/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 16:15:03 by chrlomba          #+#    #+#             */
/*   Updated: 2024/09/07 16:18:00 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"

int ft_isspace(int chr)
{
	return (chr == ' ' || chr == '\t' || chr == '\n' || chr == '\v' || chr == '\f' || chr == '\r' || chr == '\a');
}
