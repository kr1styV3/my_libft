/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 01:16:40 by chrlomba          #+#    #+#             */
/*   Updated: 2024/02/20 01:16:49 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

void	ft_pb(t_int_list *ps)
{
	t_int_list	*first;

	if (ps->a == NULL)
		return ;
	first = ps->a;
	ps->a = ps->a->next;
	first->next = ps->b;
	ps->b = first;
}
