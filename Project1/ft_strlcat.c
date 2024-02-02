/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-auria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 15:57:33 by gd-auria          #+#    #+#             */
/*   Updated: 2024/02/01 12:21:42 by gd-auria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	enddest;
	size_t	endsrc;
	size_t	i;

	i = 0;
	endsrc = ft_strlen(src);
	if (size == 0 || size <= ft_strlen(dest))
		return (size + endsrc);
	enddest = ft_strlen(dest);
	while (i < size - enddest - 1 && src[i])
	{
		dest[i + enddest] = src[i];
		i++;
	}
	dest[i + enddest] = '\0';
	return (enddest + endsrc);
}
