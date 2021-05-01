/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 23:37:08 by tsomeya           #+#    #+#             */
/*   Updated: 2021/01/31 00:05:05 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int i;

	i = 0;
	if (nbr < 0)
		return ((void *)0);
	while (i != nbr)
	{
		if (!(begin_list = begin_list->next))
			return ((void *)0);
		i++;
	}
	return (begin_list);
}
