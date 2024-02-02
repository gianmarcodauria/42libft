/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-auria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 17:21:23 by gd-auria          #+#    #+#             */
/*   Updated: 2024/02/01 12:17:16 by gd-auria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*from;
	unsigned char	*to;
	int				i;

	from = (unsigned char *)src;
	to = (unsigned char *)dest;
	if (from == to || n == 0)
		return (dest);
	else if (to > from && to - from < (int)n)
	{
		i = n - 1;
		while (i >= 0)
		{
			to[i] = from[i];
			i--;
		}
		return (dest);
	}
	else
	{
		ft_memcpy(dest, src, n);
		return (dest);
	}
}
