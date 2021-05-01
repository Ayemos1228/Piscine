/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 17:08:27 by tsomeya           #+#    #+#             */
/*   Updated: 2021/02/04 11:15:46 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	*begin_list =
}

t_list	*merge_sort(t_list **begin_list, int (*cmp)())
{
	t_list *begin;

	begin = *begin_list;
	if (begin->data == NULL || begin->next == NULL)
		return *begin;
}
