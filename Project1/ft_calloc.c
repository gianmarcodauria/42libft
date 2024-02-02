/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-auria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 13:40:23 by gd-auria          #+#    #+#             */
/*   Updated: 2024/02/01 13:47:46 by gd-auria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	len;

	len = count * size;
	if (count && size && count > (4294967295U / size))
		return (NULL);
	ptr = (void *)malloc(len);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, len);
	return (ptr);
}
