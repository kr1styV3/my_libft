/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_va_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 11:13:01 by chrlomba          #+#    #+#             */
/*   Updated: 2024/10/08 12:15:38 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/my_va_list.h"
#include <stdio.h>

void	ft_va_start(t_va_list *va_list, void *arg)
{
	va_list->arg = (char *)(&arg + 1);
}

void	ft_va_end(t_va_list *va_list)
{
	va_list->arg = NULL;
}

void	*ft_va_arg(t_va_list *va_list, size_t size)
{
	void	*arg;

	arg = va_list->arg;
	va_list->arg = (char *)va_list->arg + size;
	return (arg);
}
