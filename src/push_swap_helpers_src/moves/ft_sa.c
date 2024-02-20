/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 01:09:09 by chrlomba          #+#    #+#             */
/*   Updated: 2024/02/20 01:18:10 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

void	ft_sa(t_int_list *ps)
{
	t_int_list	*first;
	t_int_list	*second;

	if (ps->a == NULL || ps->a->next == NULL)
		return ;
	first = ps->a;
	second = ps->a->next;
	ps->a = second;
	first->next = second->next;
	second->next = first;
}

