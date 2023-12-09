/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 22:37:09 by chrlomba          #+#    #+#             */
/*   Updated: 2023/11/25 20:39:25 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>


int	intlen(int n)
{
	int		i;

	i = 0;
	if (n < 10)
		return (1);
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*neg_check_allocation(int *n, int *i)
{
	char	*str;

	if (*n < 0)
	{
		*n *= -1;
		str = (char *)malloc(intlen(*n) + 1 * sizeof(char));
		str[0] = '-';
		*i = intlen(*n);
	}
	else if (*n > 0)
	{
		str = (char *)malloc(intlen(*n) * sizeof(char));
		(*i)--;
	}
	else if (*n == 0)
	{
		str = (char *)malloc(2 * sizeof(char));
		str[0] = '0';
		str[1] = '\0';
	}
	if (!str)
		return (NULL);
	return (str);
}

char	*ft_itoa(int n)
{
	char	*co;
	int		i;
	int		j;

	i = intlen(n);
	co = neg_check_allocation(&n, &i);
	j = i + 1;
	while (n > 0)
	{
		co[i] = n % 10 + 48;
		n /= 10;
		i--;
	}
	co[j] = '\0';
	return (co);
}

// int	main(void)
// {
// 	char	*str;
// 	int		num;

// 	str = ft_itoa(101010100101011001);
// 	printf("itoa fa :%s\n", str);
// 	free(str);
// }
