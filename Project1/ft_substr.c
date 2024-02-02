/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-auria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 11:49:42 by gd-auria          #+#    #+#             */
/*   Updated: 2024/02/01 12:24:55 by gd-auria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t		i;
	size_t		j;
	char		*s2;

	i = 0;
	j = 0;
	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len + start > ft_strlen(s))
		len = ft_strlen(s + start);
	s2 = (char *)ft_calloc(sizeof(char), (len + 1));
	if (s2 == NULL)
		return (NULL);
	while (s[i])
	{
		if (i >= start && j < len && s[i])
		{
			s2[j++] = s[i];
		}
		i++;
	}
	s2[j] = '\0';
	return (s2);
}
