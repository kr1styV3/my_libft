/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrilomb <chrilomb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 15:45:26 by chrilomb          #+#    #+#             */
/*   Updated: 2025/12/18 19:57:14 by chrilomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"

t_list	*ft_lstmap(t_list *lst, void *(f)(void *), void (*del)(void *))
{
	t_list	*tmp_lst;
	t_list	*returned_lst;
	t_list	*newnode;

	if (!lst || !f || !del)
		return (NULL);
	tmp_lst = lst;
	returned_lst = NULL;
	while (tmp_lst)
	{
		newnode = ft_lstnew((*f)(tmp_lst->content));
		if (newnode == NULL)
		{
			ft_lstclear(&returned_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&returned_lst, newnode);
		tmp_lst = tmp_lst->next;
	}
	return (returned_lst);
}
