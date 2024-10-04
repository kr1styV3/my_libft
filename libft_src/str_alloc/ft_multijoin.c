/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_multijoin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr> >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 16:09:30 by chrlomba          #+#    #+#             */
/*   Updated: 2024/10/04 16:12:42 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"
#include <stdarg.h>


char *ft_multijoin(int n_elems, ...)
{
    va_list args;
    int total_length;
    char *result;
    char *temp_str;
    int i;

	total_length = 0;
	i = 0;
    va_start(args, n_elems);
	while (i < n_elems)
	{
		temp_str = va_arg(args, char *);
		if (temp_str)
			total_length += ft_strlen(temp_str);
		i++;
	}
	va_end(args);
	result = ft_calloc(total_length + 1, sizeof(char));
	if (!result)
		return NULL;
	va_start(args, n_elems);
	i = 0;
	while (i < n_elems)
	{
		temp_str = va_arg(args, char *);
		if (temp_str)
			ft_strncpy(result + ft_strlen(result), temp_str, ft_strlen(temp_str));
		i++;
	}
    va_end(args);
    return result;
}
