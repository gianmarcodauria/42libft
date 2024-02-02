/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-auria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 13:57:44 by gd-auria          #+#    #+#             */
/*   Updated: 2024/02/01 12:15:25 by gd-auria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*elem;

	elem = (t_list *) malloc(sizeof(*elem));
	if (elem == NULL)
		return (NULL);
	elem->content = content;
	elem->next = 0;
	return (elem);
}
