/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_multijoin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 11:25:07 by chrlomba          #+#    #+#             */
/*   Updated: 2024/10/08 11:34:23 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/my_va_list.h"
#include "../../headers/libft.h"

char	*ft_multijoin(int count, ...)
{
	t_va_list	va_list;
	char		*str;
	char		*tmp;
	int			i;

	ft_va_start(&va_list, &count);
	str = ft_strdup("");
	i = 0;
	while (i < count)
	{
		tmp = ft_strjoin(str, ft_va_arg(&va_list, sizeof(char *)));
		free(str);
		str = tmp;
		i++;
	}
	ft_va_end(&va_list);
	return (str);
}
