/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdavi-al <pdavi-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 19:06:12 by pdavi-al          #+#    #+#             */
/*   Updated: 2023/05/01 13:37:36 by pdavi-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*ptr;

	c = c % 256;
	ptr = (char *)s;
	while (n--)
	{
		if (*ptr == c)
			return ((void *)ptr);
		ptr++;
	}
	return (NULL);
}
