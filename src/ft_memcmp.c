/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdavi-al <pdavi-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 19:06:17 by pdavi-al          #+#    #+#             */
/*   Updated: 2023/05/01 14:56:07 by pdavi-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char	*ptr1;
	const char	*ptr2;

	ptr1 = (char *)s1;
	ptr2 = (char *)s2;
	while (n--)
	{
		if (*ptr1 != *ptr2)
			return (*ptr2 - *ptr1);
		ptr1++;
		ptr2++;
	}
	return (0);
}
