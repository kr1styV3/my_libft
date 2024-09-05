/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 22:00:53 by chrlomba          #+#    #+#             */
/*   Updated: 2024/09/05 21:34:50 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"

void	ft_putstr_fd(const char *s, int fd)
{
	int		i;

	i = 0;
	while (s[i] != '\0')
		ft_putchar_fd(s[i++], fd);
}