/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_helper.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 17:30:48 by chrlomba          #+#    #+#             */
/*   Updated: 2024/09/05 20:02:14 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_HELPER_H
# define PUSH_SWAP_HELPER_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>

typedef struct s_int_list
{
	int					content;
	struct s_int_list	*next;
	struct s_int_list	*prev;
}	t_int_list;

// helper_functions
int			ft_check_input(int argc, char **argv);
int			ft_is_valid_input(char *str);

// moves
// swap
void		ft_swap(t_int_list **stack);
void		ft_sa(t_int_list **stack_a);
void		ft_sb(t_int_list **stack_b);
void		ft_ss(t_int_list **stack_a, t_int_list **stack_b);
// push
void		ft_push(t_int_list **from, t_int_list **to);
void		ft_pa(t_int_list **stack_a, t_int_list **stack_b);
void		ft_pb(t_int_list **stack_a, t_int_list **stack_b);
// rotate
void		ft_rotate(t_int_list **stack);
void		ft_ra(t_int_list **stack_a);
void		ft_rb(t_int_list **stack_b);
void		ft_rr(t_int_list **stack_a, t_int_list **stack_b);
// reverse_rotate
void		ft_reverse_rotate(t_int_list **stack);
void		ft_rra(t_int_list **stack_a);
void		ft_rrb(t_int_list **stack_b);
void		ft_rrr(t_int_list **stack_a, t_int_list **stack_b);

#endif
