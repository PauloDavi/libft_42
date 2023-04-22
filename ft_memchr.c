/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdavi-al <pdavi-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 19:06:12 by pdavi-al          #+#    #+#             */
/*   Updated: 2023/04/25 20:22:36 by pdavi-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memchr(const void *ptr, int value, size_t num)
{
	char	*p;

	p = ptr;
	while (num--)
	{
		if (*p == value)
			return (p);
		p++;
	}
	return (NULL);
}
