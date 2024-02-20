/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 01:16:52 by chrlomba          #+#    #+#             */
/*   Updated: 2024/02/20 01:18:06 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

void	ft_ra(t_int_list *ps)
{
	t_int_list	*first;
	t_int_list	*last;

	if (ps->a == NULL || ps->a->next == NULL)
		return ;
	first = ps->a;
	last = ps->a;
	while (last->next != NULL)
		last = last->next;
	ps->a = first->next;
	last->next = first;
	first->next = NULL;
}
