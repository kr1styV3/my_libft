/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 01:16:24 by chrlomba          #+#    #+#             */
/*   Updated: 2024/02/20 01:18:08 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

void	ft_pa(t_int_list *ps)
{
	t_int_list	*first;

	if (ps->b == NULL)
		return ;
	first = ps->b;
	ps->b = ps->b->next;
	first->next = ps->a;
	ps->a = first;
}
