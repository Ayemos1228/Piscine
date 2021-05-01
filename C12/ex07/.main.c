/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main7.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 22:51:43 by tsomeya           #+#    #+#             */
/*   Updated: 2021/01/31 00:04:04 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

void	my_free(void * data)
{
	free(data);
}

int	main(void)
{
	t_list *list;
	t_list *ans;

	char *strs[5];
	strs[0] = "data4";
	strs[1] = "data3";
	strs[2] = "data2";
	strs[3] = "data1";
	strs[4] = "data0";
	list = ft_list_push_strs(5, strs);
	if ((ans= ft_list_at(list, -1)) == (void *)0)
		printf("third is null pointer.");
	else
		printf("ans = %s", ans->data);
	return (0);
}
