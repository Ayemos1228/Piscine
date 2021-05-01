/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 22:41:24 by tsomeya           #+#    #+#             */
/*   Updated: 2021/01/30 23:17:27 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	t_list *tmp;

	while (begin_list)
	{
		free_fct(begin_list);
		tmp = begin_list;
		begin_list = begin_list->next;
		tmp = (void *)0;
	}
}
