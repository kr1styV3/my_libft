#ifndef MY_VA_LIST_H
# define MY_VA_LIST_H

#include <stddef.h>

typedef struct	s_my_va_list
{
	void		*arg;
}				t_va_list;

/**
 * @brief Initializes the variadic argument list.
 *
 * This function sets up the `t_va_list` structure to point to the first variadic argument
 * after the named parameters.
 *
 * @param va_list A pointer to the `t_va_list` structure.
 * @param arg A reference to the last named argument before the variadic arguments.
 */
void ft_va_start(t_va_list *va_list, void *arg);

/**
 * @brief Retrieves the next argument in the variadic argument list.
 *
 * This function returns a pointer to the next argument in the list and advances the
 * pointer within `t_va_list` by the size of the argument type.
 *
 * @param va_list A pointer to the `t_va_list` structure.
 * @param size The size (in bytes) of the argument type being retrieved.
 * @return A pointer to the next argument in the list, cast to `void*`.
 */
void *ft_va_arg(t_va_list *va_list, size_t size);

/**
 * @brief Ends the variadic argument list processing.
 *
 * This function cleans up the variadic argument list by setting the pointer to `NULL`.
 * It is a good practice to call this function after processing all arguments.
 *
 * @param va_list A pointer to the `t_va_list` structure.
 */
void ft_va_end(t_va_list *va_list);
/**
 * @brief Joins multiple strings into a single string.
 *
 * This function takes a variable number of string arguments and concatenates them
 * into one resulting string. The function allocates memory for the resulting string,
 * which the caller is responsible for freeing after use.
 *
 * @param count The number of strings to be concatenated.
 *              The function expects `count` strings to be passed as variadic arguments.
 *
 * @return A newly allocated string containing the concatenation of all input strings,
 *         or an empty string if no strings are passed.
 *         The caller must free the returned string when it is no longer needed.
 *
 * Example usage:
 * @code
 *     char *joined = ft_multijoin(3, "Hello", " ", "world!");
 *     printf("%s\n", joined);  // Output: "Hello world!"
 *     free(joined);
 * @endcode
 */
char	*ft_multijoin(int count, ...);

# endif
