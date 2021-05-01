/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 16:39:29 by tsomeya           #+#    #+#             */
/*   Updated: 2021/02/05 02:40:08 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	t_list *tmp;

	tmp = begin_list;
	while (tmp->next)
		tmp = tmp->next;
	return (tmp);
}

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *last_elem;

	last_elem = ft_list_last(*begin_list);
	last_elem->next = ft_create_elem(data);
}
