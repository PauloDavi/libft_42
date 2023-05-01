/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdavi-al <pdavi-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 13:31:45 by pdavi-al          #+#    #+#             */
/*   Updated: 2023/05/01 19:18:13 by pdavi-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int size)
// {
// 	unsigned int	i;
// 	unsigned int	src_len;

// 	i = 0;
// 	src_len = 0;
// 	while (src[src_len] != '\0')
// 		src_len++;
// 	if (size != 0)
// 	{
// 		while (src[i] != '\0' && i < (size - 1))
// 		{
// 			dest[i] = src[i];
// 			i++;
// 		}
// 		dest[i] = '\0';
// 	}
// 	return (src_len);
// }

int	count_split(char const *s, char c)
{
	char const	*start;
	char const	*end;
	int			counter;

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

	array = malloc((count_split(s, c) + 1) * sizeof(char *));
	if (array == NULL)
		return (array);
	return (split_strings(array, s, c));
}

// int	main(void)
// {
// 	char	**tab;

// 	tab = ft_split("tripouille", 0);
// }
