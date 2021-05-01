/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 14:17:54 by tsomeya           #+#    #+#             */
/*   Updated: 2021/02/04 09:09:59 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list	*ans;

	ans = (t_list *)malloc(sizeof(t_list));
	if (ans)
	{
		ans->data = data;
		ans->next = (void *)0;
	}
	return (ans);
}
