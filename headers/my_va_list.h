/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_va_list.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 16:16:08 by chrlomba          #+#    #+#             */
/*   Updated: 2025/04/10 16:17:19 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MY_VA_LIST_H
# define MY_VA_LIST_H

# include <stddef.h>

typedef struct s_my_va_list
{
	void		*arg;
}				t_va_list;

typedef struct s_join
{
	const char	*blue;
	const char	*nc;
	const char	*green;
	const char	*user;
	const char	*cyan;
	const char	*host_name;
	const char	*bold;
	const char	*pwd;
	const char	*yellow;
	const char	*pink;
}				t_join;

/**
 * @brief Initializes the variadic argument list.
 *
 * This function sets up the `t_va_list` structu
 * re to point to the first variadic argument
 * after the named parameters.
 *
 * @param va_list A pointer to the `t_va_list` structure.
 * @param arg A reference to the last named argum
 * ent before the variadic arguments.
 */
void	ft_va_start(t_va_list *va_list, void *arg);

/**
 * @brief Retrieves the next argument in the variadic argument list.
 *
 * This function returns a pointer to the next
 * argument in the list and advances the
 * pointer within `t_va_list` by the size of the argument type.
 *
 * @param va_list A pointer to the `t_va_list` structure.
 * @param size The size (in bytes) of the argument type being retrieved.
 * @return A pointer to the next argument in the list, cast to `void*`.
 */
void	*ft_va_arg(t_va_list *va_list, size_t size);

/**
 * @brief Ends the variadic argument list processing.
 *
 * This function cleans up the variadic argument
 *  list by setting the pointer to `NULL`.
 * It is a good practice to call this function after processing all arguments.
 *
 * @param va_list A pointer to the `t_va_list` structure.
 */
void	ft_va_end(t_va_list *va_list);
/**
 * @brief Concatenates multiple strings into a single string to form the prompt.
 *
 * This function concatenates several com
 * ponents (such as colors, user info, host, and path)
 * to build a formatted shell prompt. The
 *  total length of the resulting string is calculated,
 * and memory is allocated dynamically to hold the final string.
 *
 * The concatenation is split into t
 * wo helper functions to ensure no function exceeds 25 lines,
 * as per the project constraints.
 *
 * @param join A pointer to a `t_join` str
 * uct containing all the strings (colors, user, host, etc.)
 *             that will be concatenated.
 *
 * @return A pointer to the dynamically
 *  allocated string containing the final concatenated result.
 *         The caller is responsible for freeing t
 * he memory when it is no longer needed.
 *
 * @note The resulting string will inc
 * lude color codes and other prompt components.
 *       If memory allocation fails, the function will return `NULL`.
 *
 * Example:
 * @code
 * t_join join;
 * join.blue = BLUE;
 * join.nc = NC;
 * // Set other components...
 *
 * char *prompt = ft_multijoin(&join);
 * printf("%s", prompt);
 * free(prompt);
 * @endcode
 */
char	*ft_multijoin(t_join *join);

#endif
