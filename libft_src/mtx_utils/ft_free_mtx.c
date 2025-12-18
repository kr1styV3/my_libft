/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_mtx.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrilomb <chrilomb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 18:10:32 by chrilomb          #+#    #+#             */
/*   Updated: 2024/02/20 01:18:15 by chrilomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>


void	ft_free_mtx(char **split)
{
	int	i;

	i = 0;
	if (split != NULL)
	{
		while (split[i])
		{
			if (split[i] == NULL)
				break ;
			if (split[i])
				free(split[i]);
			i++;
		}
	}
	free(split);
	split = NULL;
}
