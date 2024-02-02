/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-auria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 16:39:28 by gd-auria          #+#    #+#             */
/*   Updated: 2024/02/01 12:16:55 by gd-auria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*u_dest;
	unsigned char		*u_src;

	u_dest = (unsigned char *)dest;
	u_src = (unsigned char *)src;
	if (!u_dest && !u_src)
		return (NULL);
	while (n--)
	{
		*u_dest++ = *u_src++;
	}
	return (dest);
}
