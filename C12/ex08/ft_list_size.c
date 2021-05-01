/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 16:01:56 by tsomeya           #+#    #+#             */
/*   Updated: 2021/01/30 16:16:25 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int			ft_list_size(t_list *begin_list)
{
	int		size;
	t_list	*next_add;

	next_add = begin_list->next;
	size = 1;
	if (!begin_list)
		return (0);
	while (next_add)
	{
		size++;
		next_add = next_add->next;
	}
	return (size);
}
