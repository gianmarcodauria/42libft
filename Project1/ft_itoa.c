/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-auria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 12:41:31 by gd-auria          #+#    #+#             */
/*   Updated: 2024/02/01 12:10:06 by gd-auria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	lenght(int nb)
{
	int	count;
	int	base;

	base = 10;
	count = 0;
	if (nb <= 0)
		++count;
	while (nb)
	{
		nb /= base;
		++count;
	}
	return (count);
}

char	*ft_itoa(int nb)
{
	int			len;
	char		*s;
	const char	*digits = "0123456789";

	len = lenght(nb);
	s = malloc(sizeof(char) * (len + 1));
	if (s == NULL)
		return (NULL);
	s[len] = '\0';
	if (nb == 0)
		s[0] = '0';
	if (nb < 0)
		s[0] = '-';
	while (nb)
	{
		if (nb > 0)
			s[--len] = digits[nb % 10];
		else
			s[--len] = digits[nb % 10 * -1];
		nb /= 10;
	}
	return (s);
}
