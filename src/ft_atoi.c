/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdavi-al <pdavi-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 19:05:36 by pdavi-al          #+#    #+#             */
/*   Updated: 2023/04/26 20:50:54 by pdavi-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char *str)
{
	int	i;
	int	number;
	int	multiplyer;

	i = 0;
	number = 0;
	multiplyer = 1;
	while (str[i] != '\0' && str[i] == ' ')
		i++;
	if (i == ft_strlen(str))
		return (number);
	while (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			multiplyer *= -1;
	while (ft_isdigit(str[i]))
	{
		number *= 10;
		number += str[i] - '0';
		i++;
	}
	return (number * multiplyer);
}
