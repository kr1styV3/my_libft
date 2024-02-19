/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_helper.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 17:30:48 by chrlomba          #+#    #+#             */
/*   Updated: 2024/02/19 18:22:40 by chrlomba         ###   ########.fr       */
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
	int				content;
	struct s_list	*next;
}	t_int_list;

// lst_functions
t_int_list	*ft_int_lstnew(int content);
void		ft_int_lstclear(t_int_list *stack);
// helper_functions
void		ft_free_split(char **split);
int			ft_check_input(int argc, char **argv);
int			ft_is_valid_input(char *str);

#endif
