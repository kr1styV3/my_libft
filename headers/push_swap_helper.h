/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_helper.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 17:30:48 by chrlomba          #+#    #+#             */
/*   Updated: 2024/02/20 01:19:40 by chrlomba         ###   ########.fr       */
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
}	t_int_list;

// lst_functions
t_int_list	*ft_int_lstnew(int content);
void		ft_int_lstclear(t_int_list *stack);
void		ft_int_lstadd_back(t_int_list **lst, t_int_list *new);
// helper_functions
void		ft_free_split(char **split);
int			ft_check_input(int argc, char **argv);
int			ft_is_valid_input(char *str);

// moves
void		ft_sa(t_int_list **stack_a);
void		ft_sb(t_int_list **stack_b);
void		ft_ss(t_int_list **stack_a, t_int_list **stack_b);
void		ft_pa(t_int_list **stack_a, t_int_list **stack_b);
void		ft_pb(t_int_list **stack_a, t_int_list **stack_b);
void		ft_ra(t_int_list **stack_a);
void		ft_rb(t_int_list **stack_b);
void		ft_rr(t_int_list **stack_a, t_int_list **stack_b);
void		ft_rra(t_int_list **stack_a);
void		ft_rrb(t_int_list **stack_b);
void		ft_rrr(t_int_list **stack_a, t_int_list **stack_b);


#endif
