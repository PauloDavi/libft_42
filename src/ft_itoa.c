/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdavi-al <pdavi-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 13:30:23 by pdavi-al          #+#    #+#             */
/*   Updated: 2023/05/01 14:09:18 by pdavi-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*nstr;
	long	aux;
	size_t	str_size;

	aux = n;
	str_size = 0;
	if (n < 0)
		str_size++;
	while (n != 0)
	{
		n /= 10;
		str_size++;
	}
	nstr = malloc((str_size + 1) * sizeof(char));
	if (nstr == NULL)
		return (nstr);
	if (aux < 0)
	{
		*nstr++ = '-';
		aux *= -1;
	}
	while (n != 0)
	{
		*nstr = "0123456789"[aux % 10];
		aux /= 10;
	}
	return (nstr);
}
