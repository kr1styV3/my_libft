/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 01:17:10 by chrlomba          #+#    #+#             */
/*   Updated: 2024/02/20 01:17:16 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

void	ft_rb(t_int_list *ps)
{
	t_int_list	*first;
	t_int_list	*last;

	if (ps->b == NULL || ps->b->next == NULL)
		return ;
	first = ps->b;
	last = ps->b;
	while (last->next != NULL)
		last = last->next;
	ps->b = first->next;
	last->next = first;
	first->next = NULL;
}
