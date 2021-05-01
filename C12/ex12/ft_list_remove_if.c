/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 18:11:34 by tsomeya           #+#    #+#             */
/*   Updated: 2021/02/05 04:40:00 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, \
void *data_ref, int (*cmp)(), void (*free_fct)(void *))
{
	t_list	*prev;
	t_list	*tmp;

	prev = 0;
	tmp = *begin_list;
	while (tmp)
	{
		if ((*cmp)(tmp->data, data_ref) == 0)
		{
			(*free_fct)(tmp->data);
			if (prev)
				prev->next = tmp->next;
		}
		prev = tmp;
		tmp = tmp->next;
	}
}
