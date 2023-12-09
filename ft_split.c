/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 21:10:27 by chrlomba          #+#    #+#             */
/*   Updated: 2023/12/05 01:10:44 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

typedef struct	contatori
{
	int		w;
	int		j;
	int		pos;
}	cont;
size_t	count_words(char const *s, char c)
{
	int		i;
	int		word_counter;

	i = 0;
	while (s[i] == c)
		i++;
	word_counter = 1;
	while(s[i] != '\0')
	{
		if (s[i] == c)
			word_counter++;
		i++;
	}
	return (word_counter);
}

char *safe_malloc(char *ptr, char **A)
{
	// allocate memory in matrix for each word and then word copy into a[f.w][cont]
	//in case of error make free function
}
char **ft_split(char const *s, char c)
{
	cont	f;
	char	**A;
	size_t	nw;

	f.w = 0;
	f.j = 0;
	f.pos = 0;
	nw = count_words(s, c);
	A = malloc(nw + 1 * sizeof(char *));
	while (s[f.pos] == c)
		f.pos++;
	while (f.w <= nw)
	{
	safe_malloc(&s[f.pos], A, )
	}




}

int	main(void)
{
const char *s = ",,ciao,pippo,cocaine"
}
