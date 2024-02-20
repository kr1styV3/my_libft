/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rra.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 01:17:29 by chrlomba          #+#    #+#             */
/*   Updated: 2024/02/20 01:18:03 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

void	ft_rra(t_int_list *ps)
{
	t_int_list	*first;
	t_int_list	*last;

	if (ps->a == NULL || ps->a->next == NULL)
		return ;
	first = ps->a;
	last = ps->a;
	while (last->next->next != NULL)
		last = last->next;
	last->next->next = first;
	ps->a = last->next;
	last->next = NULL;
}
