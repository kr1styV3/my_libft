/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 01:15:00 by chrlomba          #+#    #+#             */
/*   Updated: 2024/02/20 01:15:06 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

void	ft_sb(t_int_list *ps)
{
	t_int_list	*first;
	t_int_list	*second;

	if (ps->b == NULL || ps->b->next == NULL)
		return ;
	first = ps->b;
	second = ps->b->next;
	ps->b = second;
	first->next = second->next;
	second->next = first;
}
