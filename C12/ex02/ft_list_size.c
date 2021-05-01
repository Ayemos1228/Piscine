/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 16:01:56 by tsomeya           #+#    #+#             */
/*   Updated: 2021/02/05 02:32:02 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int			ft_list_size(t_list *begin_list)
{
	int		size;
	t_list	*next_addr;

	next_addr = begin_list->next;
	size = 1;
	if (!begin_list)
		return (0);
	while (next_addr)
	{
		size++;
		next_addr = next_addr->next;
	}
	return (size);
}
