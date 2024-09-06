/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 21:47:56 by chrlomba          #+#    #+#             */
/*   Updated: 2024/09/06 15:40:46 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"

void ft_error(const char *msg)
{
    ft_putstr_fd("Error: ", 2);
    ft_putendl_fd(msg, 2);
    exit(EXIT_FAILURE);
}
