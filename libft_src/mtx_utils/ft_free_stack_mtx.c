/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_stack_mtx.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr> >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 17:19:22 by chrlomba          #+#    #+#             */
/*   Updated: 2024/10/01 17:27:51 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"

void	ft_free_stack_mtx(char **mtx)
{
	int i;

	i = 0;
	while (mtx[i])
	{
		if (mtx[i])
			free(mtx[i]);
		i++;
	}
}
