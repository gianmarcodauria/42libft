/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-auria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 12:14:22 by gd-auria          #+#    #+#             */
/*   Updated: 2024/02/01 12:24:34 by gd-auria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_in_string(char const *str, char c)
{
	while (*str != '\0')
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		k;
	char	*trim;

	if (s1 == NULL || set == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[j] && is_in_string(set, s1[j]))
		j++;
	k = ft_strlen((char *)s1);
	while (k > j && is_in_string(set, s1[k - 1]))
		k--;
	trim = (char *) malloc(sizeof(*s1) * (k - j + 1));
	if (trim == NULL)
		return (NULL);
	i = 0;
	while (j < k)
		trim[i++] = s1[j++];
	trim[i] = '\0';
	return ((char *)trim);
}
