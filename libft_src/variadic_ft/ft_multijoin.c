/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_multijoin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 11:25:07 by chrlomba          #+#    #+#             */
/*   Updated: 2024/10/08 12:46:51 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/my_va_list.h"
#include "../../headers/libft.h"

static int calculate_total_length(t_join *join)
{
    int total_size;

    total_size = ft_strlen(join->blue) + ft_strlen("[") + ft_strlen(join->nc);
    total_size += ft_strlen(join->green) + ft_strlen(join->user) + ft_strlen(join->nc);
    total_size += ft_strlen("@") + ft_strlen(join->cyan) + ft_strlen(join->host_name);
    total_size += ft_strlen(join->nc) + ft_strlen(join->blue) + ft_strlen("]") + ft_strlen(join->nc);
    total_size += ft_strlen(" - ") + ft_strlen("[") + ft_strlen(join->bold) + ft_strlen(join->pwd);
    total_size += ft_strlen(join->nc) + ft_strlen(join->blue) + ft_strlen("]") + ft_strlen(join->nc);
    total_size += ft_strlen("\n") + ft_strlen(join->yellow) + ft_strlen("Minishell");
    total_size += ft_strlen(join->nc) + ft_strlen(join->pink) + ft_strlen(" $ ") + ft_strlen(join->nc) + 1;

    return total_size;
}
static void copy_to_result_part1(char *result, t_join *join)
{
    char *ptr = result;

    ptr += ft_strlen(ft_memcpy(ptr, join->blue, ft_strlen(join->blue)));
    ptr += ft_strlen(ft_memcpy(ptr, "[", ft_strlen("[")));
    ptr += ft_strlen(ft_memcpy(ptr, join->nc, ft_strlen(join->nc)));
    ptr += ft_strlen(ft_memcpy(ptr, join->green, ft_strlen(join->green)));
    ptr += ft_strlen(ft_memcpy(ptr, join->user, ft_strlen(join->user)));
    ptr += ft_strlen(ft_memcpy(ptr, join->nc, ft_strlen(join->nc)));
    ptr += ft_strlen(ft_memcpy(ptr, "@", ft_strlen("@")));
    ptr += ft_strlen(ft_memcpy(ptr, join->cyan, ft_strlen(join->cyan)));
    ptr += ft_strlen(ft_memcpy(ptr, join->host_name, ft_strlen(join->host_name)));
    ptr += ft_strlen(ft_memcpy(ptr, join->nc, ft_strlen(join->nc)));
    ptr += ft_strlen(ft_memcpy(ptr, join->blue, ft_strlen(join->blue)));
    ptr += ft_strlen(ft_memcpy(ptr, "]", ft_strlen("]")));
    ptr += ft_strlen(ft_memcpy(ptr, join->nc, ft_strlen(join->nc)));
    ptr += ft_strlen(ft_memcpy(ptr, " - ", ft_strlen(" - ")));
}

static void copy_to_result_part2(char *result, t_join *join)
{
    char *ptr = result + ft_strlen(result);  // Continue from where part1 left off

	ptr += ft_strlen(ft_memcpy(ptr, join->blue, ft_strlen(join->blue)));
    ptr += ft_strlen(ft_memcpy(ptr, "[", ft_strlen("[")));
	ptr += ft_strlen(ft_memcpy(ptr, join->nc, ft_strlen(join->nc)));
    ptr += ft_strlen(ft_memcpy(ptr, join->bold, ft_strlen(join->bold)));
    ptr += ft_strlen(ft_memcpy(ptr, join->pwd, ft_strlen(join->pwd)));
    ptr += ft_strlen(ft_memcpy(ptr, join->nc, ft_strlen(join->nc)));
    ptr += ft_strlen(ft_memcpy(ptr, join->blue, ft_strlen(join->blue)));
    ptr += ft_strlen(ft_memcpy(ptr, "]", ft_strlen("]")));
    ptr += ft_strlen(ft_memcpy(ptr, join->nc, ft_strlen(join->nc)));
    ptr += ft_strlen(ft_memcpy(ptr, "\n", ft_strlen("\n")));
    ptr += ft_strlen(ft_memcpy(ptr, join->yellow, ft_strlen(join->yellow)));
    ptr += ft_strlen(ft_memcpy(ptr, "Minishell", ft_strlen("Minishell")));
    ptr += ft_strlen(ft_memcpy(ptr, join->nc, ft_strlen(join->nc)));
    ptr += ft_strlen(ft_memcpy(ptr, join->pink, ft_strlen(join->pink)));
    ptr += ft_strlen(ft_memcpy(ptr, " $ ", ft_strlen(" $ ")));
    ptr += ft_strlen(ft_memcpy(ptr, join->nc, ft_strlen(join->nc)));
}


char *ft_multijoin(t_join *join)
{
    int total_size;
    char *result;

    total_size = calculate_total_length(join);
    result = (char *)malloc(total_size * sizeof(char));
    if (!result)
        return NULL;
    result[0] = '\0';

	copy_to_result_part1(result, join);  // Copy the first half
    copy_to_result_part2(result, join);
    return result;
}
