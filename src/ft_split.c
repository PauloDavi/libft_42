/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulodavi <paulodavi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 13:31:45 by pdavi-al          #+#    #+#             */
/*   Updated: 2023/05/03 02:28:54 by paulodavi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t count_words(char const *s, char c);
char **split_words(char **words, size_t words_len, char const *s, char c);
size_t count_letters(char const *s, char c);

char	**ft_split(char const *s, char c)
{
	char	**words;
	size_t	words_len;

	words_len = count_words(s, c);
	words = malloc((words_len + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);
	return (split_words(words, words_len, s, c));
}

size_t count_letters(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
		i++;
	return (i);
}

char **split_words(char **words, size_t words_len, char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	current_char;

	i = 0;
	current_char = 0;
	while (i < words_len)
	{
		j = 0;
		while (s[current_char] == c)
			current_char++;
		words[i] = malloc((count_letters((s + current_char), c) + 1) * sizeof(char));
		if (words[i] == NULL)
			return (NULL);
		while (s[current_char] != c && s[current_char] != '\0')
			words[i][j++] = s[current_char++];
		words[i][j] = '\0';
		i++;
	}
	words[words_len] = NULL;
	return (words);
}

size_t count_words(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	if (s[i] != c && s[i] != '\0')
		count++;
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			count++;
		i++;
	}
	return (count);
}
