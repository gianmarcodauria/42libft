/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-auria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 17:47:16 by gd-auria          #+#    #+#             */
/*   Updated: 2024/02/01 12:03:29 by gd-auria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	res;
	int	sign;

	sign = 1;
	res = 0;
	while ((*str >= '\t' && *str <= '\r')
		|| *str == ' ')
		++str;
	if (*str == '+' || *str == '-')
		if (*(str++) == '-')
			sign *= -1;
	while (ft_isdigit(*str))
	{
		res = res * 10;
		res += (*str++ - '0');
	}
	return (sign * res);
}
