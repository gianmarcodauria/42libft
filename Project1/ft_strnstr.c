/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-auria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 13:21:24 by gd-auria          #+#    #+#             */
/*   Updated: 2024/02/01 12:23:51 by gd-auria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	temp;

	i = 0;
	j = 0;
	if (!to_find[0] || to_find == NULL)
		return ((char *)(str));
	while (i < len && str[i])
	{
		temp = i;
		while (str[i] == to_find[j] && temp + j < len)
		{
			if (to_find[j + 1] == '\0')
				return ((char *)(str + temp));
			j++;
			i++;
		}
		i = temp + 1;
		j = 0;
	}
	return (NULL);
}
