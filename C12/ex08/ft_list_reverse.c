/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/31 00:15:36 by tsomeya           #+#    #+#             */
/*   Updated: 2021/02/01 01:43:27 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list *next;
	t_list *tmp;

	tmp = (void *)0;
	while (*begin_list)
	{
		next = (*begin_list)->next;
		(*begin_list)->next = tmp;
		tmp = *begin_list;
		*begin_list = next;
	}
	*begin_list = tmp;
}
