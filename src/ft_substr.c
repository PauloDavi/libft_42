/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulodavi <paulodavi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 13:32:59 by pdavi-al          #+#    #+#             */
/*   Updated: 2023/05/02 23:56:33 by paulodavi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;
	size_t	s_len;

	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	if (s_len < start)
		return (ft_strdup(""));
	if (s_len - start >= len)
		substring = malloc((len + 1) * sizeof(char));
	else
		substring = malloc((s_len - start + 1) * sizeof(char));
	if (substring == NULL)
		return (NULL);
	ft_strlcpy(substring, (s + start), (len + 1));
	return (substring);
}
