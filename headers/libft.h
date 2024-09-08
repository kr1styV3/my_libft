/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 21:00:07 by chrlomba          #+#    #+#             */
/*   Updated: 2024/09/07 16:36:21 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include "push_swap_helper.h"

// List structure
typedef struct s_list
{
    void			*content;
    struct s_list	*next;
}	t_list;

// arr_to_num

/**
 * @brief Converts a string to an integer.
 * @param number_str The string representation of the integer.
 * @return The integer value of the string.
 */
int ft_atoi(const char *number_str);
/**
 * @brief Converts a string to a long integer.
 * @param number_str The string representation of the long integer.
 * @return The long integer value of the string.
 */
long ft_atol(const char *number_str);
/**
 * @brief Converts a string to a long long integer.
 * @param number_str The string representation of the long long integer.
 * @return The long long integer value of the string.
 */
long long ft_atoll(const char *number_str);
/**
 * @brief Converts a string to a short integer.
 * @param number_str The string representation of the short integer.
 * @return The short integer value of the string.
 */
short ft_atos(const char *number_str);
/**
 * @brief Converts a string to an unsigned integer.
 * @param number_str The string representation of the unsigned integer.
 * @return The unsigned integer value of the string.
 */
unsigned int ft_atoui(const char *number_str);

// error_management
/**
 * @brief Prints an error message to standard error and exits the program.
 * @param msg The error message to be printed.
 * @return This function does not return; it exits the program.
 */
void ft_error(const char *msg);

// file_descriptor
/**
 * @brief Writes a character to the specified file descriptor.
 * @param c The character to be written.
 * @param fd The file descriptor where the character will be written.
 * @return This function does not return; it writes directly to the file descriptor.
 */
void ft_putchar_fd(char c, int fd);
/**
 * @brief Writes a string to the specified file descriptor.
 * @param s The string to be written.
 * @param fd The file descriptor where the string will be written.
 * @return This function does not return; it writes directly to the file descriptor.
 */
void ft_putstr_fd(const char *s, int fd);
/**
 * @brief Writes a string followed by a newline to the specified file descriptor.
 * @param s The string to be written.
 * @param fd The file descriptor where the string and newline will be written.
 * @return This function does not return; it writes directly to the file descriptor.
 */
void ft_putendl_fd(const char *s, int fd);
/**
 * @brief Writes an integer to the specified file descriptor.
 * @param n The integer to be written.
 * @param fd The file descriptor where the integer will be written.
 * @return This function does not return; it writes directly to the file descriptor.
 */
void ft_putnbr_fd(int n, int fd);

// is_char
/**
 * @brief Checks if the given character is an alphanumeric character.
 * @param chr The character to be checked.
 * @return 1 if the character is alphanumeric, 0 otherwise.
 */
int ft_isalnum(int chr);
/**
 * @brief Checks if the given character is an alphabetic character.
 * @param chr The character to be checked.
 * @return 1 if the character is alphabetic, 0 otherwise.
 */
int ft_isalpha(int chr);
/**
 * @brief Checks if the given character is an ASCII character.
 * @param chr The character to be checked.
 * @return 1 if the character is ASCII, 0 otherwise.
 */
int ft_isascii(int chr);
/**
 * @brief Checks if the given character is a digit.
 * @param chr The character to be checked.
 * @return 1 if the character is a digit, 0 otherwise.
 */
int ft_isdigit(int chr);
/**
 * @brief Checks if the given character is printable.
 * @param chr The character to be checked.
 * @return 1 if the character is printable, 0 otherwise.
 */
int ft_isprint(int chr);
/**
 * @brief Checks if the given character is a whitespace character.
 * @param chr The character to be checked.
 * @return 1 if the character is a whitespace character, 0 otherwise.
 */
int ft_isspace(int chr);
/**
 * @brief Converts a character to its lowercase equivalent.
 * @param chr The character to be converted.
 * @return The lowercase equivalent of the character if applicable, or the original character if not.
 */
int ft_tolower(int chr);
/**
 * @brief Converts a character to its uppercase equivalent.
 * @param chr The character to be converted.
 * @return The uppercase equivalent of the character if applicable, or the original character if not.
 */
int ft_toupper(int chr);

// list
/**
 * @brief Creates a new list element.
 * @param content The content to be stored in the new list element.
 * @return A pointer to the newly created list element.
 */
t_list *ft_lstnew(void *content);
/**
 * @brief Adds a new element to the beginning of the list.
 * @param lst A pointer to the pointer to the first element of the list.
 * @param new The new element to be added.
 * @return This function does not return; it modifies the list.
 */
void ft_lstadd_front(t_list **lst, t_list *new);
/**
 * @brief Counts the number of elements in the list.
 * @param lst The list to be counted.
 * @return The number of elements in the list.
 */
int ft_lstsize(t_list *lst);
/**
 * @brief Returns the last element of the list.
 * @param lst The list to be searched.
 * @return A pointer to the last element of the list.
 */
t_list *ft_lstlast(t_list *lst);
/**
 * @brief Adds a new element to the end of the list.
 * @param lst A pointer to the pointer to the first element of the list.
 * @param new The new element to be added.
 * @return This function does not return; it modifies the list.
 */
void ft_lstadd_back(t_list **lst, t_list *new);
/**
 * @brief Deletes a single list element and frees its content.
 * @param lst The element to be deleted.
 * @param del Function to free the content of the element.
 * @return This function does not return; it modifies and frees the element.
 */
void ft_lstdelone(t_list *lst, void (*del)(void*));
/**
 * @brief Clears the entire list and frees its content.
 * @param lst A pointer to the pointer to the first element of the list.
 * @param del Function to free the content of each element.
 * @return This function does not return; it modifies and frees the list.
 */
void ft_lstclear(t_list **lst, void (*del)(void*));
/**
 * @brief Applies a function to each element of the list.
 * @param lst The list to be iterated.
 * @param f The function to apply to each element.
 * @return This function does not return; it modifies each element through the provided function.
 */
void ft_lstiter(t_list *lst, void (*f)(void *));
/**
 * @brief Applies a function to each element of the list and creates a new list with the results.
 * @param lst The list to be mapped.
 * @param f The function to apply to each element to create new content.
 * @param del Function to free the content of elements if necessary.
 * @return A new list with the results of applying the function.
 */
t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
/**
 * @brief Creates a new integer list element.
 * @param content The integer content to be stored in the new list element.
 * @return A pointer to the newly created integer list element.
 */
t_int_list *ft_int_lstnew(int content);
/**
 * @brief Clears the entire integer list and frees its content.
 * @param stack The integer list to be cleared.
 * @return This function does not return; it modifies and frees the list.
 */
void ft_int_lstclear(t_int_list *stack);
/**
 * @brief Adds a new integer element to the end of the integer list.
 * @param lst A pointer to the pointer to the first element of the integer list.
 * @param new The new integer element to be added.
 * @return This function does not return; it modifies the list.
 */
void ft_int_lstadd_back(t_int_list **lst, t_int_list *new);
/**
 * @brief Counts the number of elements in the integer list.
 * @param lst The integer list to be counted.
 * @return The number of elements in the integer list.
 */
int ft_int_lstsize(t_int_list *lst);

// mem_alloc
/**
 * @brief Allocates and zeroes out memory for an array of elements.
 * @param num_elems The number of elements to allocate.
 * @param byte_size The size of each element in bytes.
 * @return A pointer to the allocated memory, or NULL if the allocation fails.
 */
void *ft_calloc(size_t num_elems, size_t byte_size);
/**
 * @brief Reallocates memory, resizing it to the new size.
 * @param ptr A pointer to the existing memory block to be resized.
 * @param old_size The current size of the memory block.
 * @param new_size The new size of the memory block.
 * @return A pointer to the reallocated memory block, or NULL if the reallocation fails.
 */
void *ft_realloc(void *ptr, size_t old_size, size_t new_size);

// memory_utils
/**
 * @brief Sets the first n bytes of the memory area to zero.
 * @param str A pointer to the memory area to be zeroed.
 * @param n_bytes The number of bytes to be set to zero.
 * @return This function does not return; it modifies the memory area in place.
 */
void ft_bzero(void *str, size_t n_bytes);
/**
 * @brief Searches for the first occurrence of a character in a memory area.
 * @param src A pointer to the memory area to be searched.
 * @param charset The character to search for.
 * @param n_bytes The number of bytes to search.
 * @return A pointer to the first occurrence of the character, or NULL if not found.
 */
void *ft_memchr(const void *src, int charset, size_t n_bytes);
/**
 * @brief Copies n bytes from one memory area to another.
 * @param dest A pointer to the destination memory area.
 * @param src A pointer to the source memory area.
 * @param n_bytes The number of bytes to copy.
 * @return A pointer to the destination memory area.
 */
void *ft_memcpy(void *dest, const void *src, size_t n_bytes);
/**
 * @brief Moves n bytes from one memory area to another, handling overlap.
 * @param dest A pointer to the destination memory area.
 * @param src A pointer to the source memory area.
 * @param n_bytes The number of bytes to move.
 * @return A pointer to the destination memory area.
 */
void *ft_memmove(void *dest, const void *src, size_t n_bytes);
/**
 * @brief Compares two memory areas byte by byte.
 * @param src1 A pointer to the first memory area.
 * @param src2 A pointer to the second memory area.
 * @param n_bytes The number of bytes to compare.
 * @return An integer less than, equal to, or greater than zero, depending on whether the first memory area is less than, equal to, or greater than the second memory area.
 */
int ft_memcmp(const void *src1, const void *src2, size_t n_bytes);
/**
 * @brief Sets the first n bytes of a memory area to a specified value.
 * @param str A pointer to the memory area to be set.
 * @param c The value to set.
 * @param n_bytes The number of bytes to set.
 * @return A pointer to the memory area.
 */
void *ft_memset(void *str, int c, size_t n_bytes);

// mtx_utils
/**
 * @brief Splits a string into an array of substrings based on a delimiter.
 * @param s The string to be split.
 * @param c The delimiter character used to split the string.
 * @return A pointer to an array of strings (the substrings), or NULL if the allocation fails.
 */
char **ft_split(const char *s, char c);
/**
 * @brief Frees the memory allocated for an array of strings.
 * @param split A pointer to the array of strings to be freed.
 * @return This function does not return; it frees the memory used by the array.
 */
void ft_free_mtx(char **split);

// str_alloc
/**
 * @brief Duplicates a string by allocating new memory and copying the content.
 * @param src The string to be duplicated.
 * @return A pointer to the newly allocated string, or NULL if the allocation fails.
 */
char *ft_strdup(const char *src);
/**
 * @brief Extracts a substring from a string.
 * @param s The string from which to extract the substring.
 * @param start The starting index of the substring.
 * @param len The length of the substring to extract.
 * @return A pointer to the newly allocated substring, or NULL if the allocation fails.
 */
char *ft_substr(const char *s, unsigned int start, size_t len);
/**
 * @brief Concatenates two strings into a newly allocated string.
 * @param s1 The first string.
 * @param s2 The second string.
 * @return A pointer to the newly allocated concatenated string, or NULL if the allocation fails.
 */
char *ft_strjoin(const char *s1, const char *s2);
/**
 * @brief Trims a string by removing characters from the start and end based on a set of characters.
 * @param s1 The string to be trimmed.
 * @param set The set of characters to be removed.
 * @return A pointer to the newly allocated trimmed string, or NULL if the allocation fails.
 */
char *ft_strtrim(const char *s1, const char *set);
/**
 * @brief Converts an integer to a string.
 * @param n The integer to be converted.
 * @return A pointer to the newly allocated string representation of the integer, or NULL if the allocation fails.
 */
char *ft_itoa(int n);


// str_utils

/**
 * @brief Computes the length of a string.
 * @param str The string whose length is to be computed.
 * @return The length of the string.
 */
size_t ft_strlen(const char *str);

/**
 * @brief Copies up to dstsize - 1 characters from the source string to the destination string.
 * @param dst The destination buffer.
 * @param src The source string to copy from.
 * @param dstsize The size of the destination buffer.
 * @return The total length of the source string.
 */
size_t ft_strlcpy(char *dst, const char *src, size_t dstsize);
/**
 * @brief Appends up to dstsize - strlen(dst) - 1 characters from the source string to the destination string.
 * @param dst The destination buffer.
 * @param src The source string to append.
 * @param dstsize The size of the destination buffer.
 * @return The total length of the string it tried to create.
 */
size_t ft_strlcat(char *dst, const char *src, size_t dstsize);
/**
 * @brief Finds the first occurrence of a character in a string.
 * @param s The string to be searched.
 * @param c The character to search for.
 * @return A pointer to the first occurrence of the character, or NULL if not found.
 */
char *ft_strchr(const char *s, int c);
/**
 * @brief Finds the last occurrence of a character in a string.
 * @param s The string to be searched.
 * @param c The character to search for.
 * @return A pointer to the last occurrence of the character, or NULL if not found.
 */
char *ft_strrchr(const char *s, int c);
/**
 * @brief Compares the first n bytes of two strings.
 * @param str The first string.
 * @param cmp The second string to compare.
 * @param n_bytes The number of bytes to compare.
 * @return An integer less than, equal to, or greater than zero, depending on whether the first string is less than, equal to, or greater than the second string.
 */
int ft_strncmp(const char *str, const char *cmp, size_t n_bytes);
/**
 * @brief Applies a function to each character of a string to create a new string.
 * @param s The string to be mapped.
 * @param f The function to apply to each character.
 * @return A pointer to the newly allocated string resulting from applying the function, or NULL if the allocation fails.
 */
char *ft_strmapi(const char *s, char (*f)(unsigned int, char));
/**
 * @brief Applies a function to each character of a string with its index.
 * @param s The string to be iterated.
 * @param f The function to apply to each character and its index.
 * @return This function does not return; it modifies each character through the provided function.
 */
void ft_striteri(char *s, void (*f)(unsigned int, char*));


#endif
