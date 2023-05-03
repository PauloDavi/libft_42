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

size_t	count_split(char const *s, char c)
{
	char const	*start;
	char const	*end;
	size_t		counter;

	counter = 0;
	start = s;
	end = s;
	while (1)
	{
		if (*s == c)
			end = s;
		if (end - start > 1)
			counter++;
		if (*s == '\0')
			break ;
		start = end;
		s++;
	}
	if (end == start)
		return (1);
	return (counter);
}

char	*create_string(char const *s, char const *start, char const *end)
{
	char	*str;

	if (start == s)
		str = malloc((end - start + 1) * sizeof(char));
	else
		str = malloc((end - start) * sizeof(char));
	if (str == NULL)
		return (NULL);
	if (start == s)
		ft_strlcpy(str, start, end - start + 1);
	else
		ft_strlcpy(str, start + 1, end - start);
	return (str);
}

char	**split_strings(char **array, char const *s, char c)
{
	char const	*start;
	char const	*end;
	size_t		count;

	count = 0;
	start = s;
	end = s;
	while (1)
	{
		if (*s == c)
			end = s;
		if (end - start > 1)
		{
			array[count] = create_string(s, start, end);
			if (array[count++] == NULL)
				return (NULL);
		}
		if (*s == '\0')
			break ;
		start = end;
		s++;
	}
	array[count] = NULL;
	return (array);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	array_size;

	array_size = count_split(s, c);
	array = malloc((array_size + 1) * sizeof(char *));
	if (array == NULL)
		return (array);
	if (array_size == 1)
	{
		array[1] = NULL;
		array[0] = ft_strdup(s);
		return (array);
	}
	return (split_strings(array, s, c));
}
