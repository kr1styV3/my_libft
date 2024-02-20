/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 01:17:40 by chrlomba          #+#    #+#             */
/*   Updated: 2024/02/20 01:18:02 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

void	ft_rrb(t_int_list *ps)
{
	t_int_list	*first;
	t_int_list	*last;

	if (ps->b == NULL || ps->b->next == NULL)
		return ;
	first = ps->b;
	last = ps->b;
	while (last->next->next != NULL)
		last = last->next;
	last->next->next = first;
	ps->b = last->next;
	last->next = NULL;
}
