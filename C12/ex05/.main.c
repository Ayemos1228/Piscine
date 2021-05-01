/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main5.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 16:39:44 by tsomeya           #+#    #+#             */
/*   Updated: 2021/01/30 22:40:21 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

int	main(void)
{
	t_list *list;

	char *strs[5];
	strs[0] = "data1";
	strs[1] = "data2";
	strs[2] = "data3";
	strs[3] = "data4";
	strs[4] = "data5";
	list = ft_list_push_strs(5, strs);

	printf("pointer = %p\n", list);
	int i = 0;
	while (i < 5)
	{
		printf("data[%d] = %s, ", i, list->data);
		printf("next_ptr[%d] = %p\n", i, list->next);
		list = list->next;
		i++;
	}
	return (0);
}
