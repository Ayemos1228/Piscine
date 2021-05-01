/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 17:15:34 by tsomeya           #+#    #+#             */
/*   Updated: 2021/02/05 04:32:50 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_list_push_strs(int size, char **strs)
{
	t_list	*list;
	int		i;

	i = 1;
	if (size == 0)
		return ((void *)0);
	list = ft_create_elem(strs[0]);
	while (i < size)
	{
		ft_list_push_front(&list, strs[i]);
		i++;
	}
	return (list);
}
