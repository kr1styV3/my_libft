/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoll.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:37:03 by chrlomba          #+#    #+#             */
/*   Updated: 2024/02/07 17:11:52 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"

long long	ft_atoll(const char *number_str)
{
	int		        i;
	int		        minus_sign;
	long long		converted_result;

	i = 0;
	converted_result = 0;
	minus_sign = 0;
	while ((number_str[i] >= 9 && number_str[i] <= 13) || number_str[i] == 32)
		i++;
	if (number_str[i] == '+' || number_str[i] == '-')
	{
		if (number_str[i] == '-')
			minus_sign++;
		i++;
	}
	while (number_str[i] >= '0' && number_str[i] <= '9')
	{
		converted_result *= 10;
		converted_result += number_str[i] - 48;
		i++;
	}
	if (minus_sign)
		return (converted_result * -1);
	return (converted_result);
}