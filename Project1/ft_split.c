/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-auria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 17:31:10 by gd-auria          #+#    #+#             */
/*   Updated: 2024/02/01 12:19:49 by gd-auria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_words(const char *s, char c)
{
	size_t	count;

	count = 0;
	if (s == NULL)
		return (0);
	while (*s)
	{
		if (*s != c)
		{
			++count;
			while (*s && *s != c)
				++s;
		}
		else
			++s;
	}
	return (count);
}

char	**ft_split(const char *s, char c)
{
	size_t		i;
	size_t		len;
	char		**count;

	if (!s)
		return (0);
	i = 0;
	count = malloc(sizeof(char *) * (get_words(s, c) + 1));
	if (!count)
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (*s && *s != c && ++len)
				++s;
			count[i++] = ft_substr(s - len, 0, len);
		}
		else
			++s;
	}
	count[i] = NULL;
	return (count);
}
