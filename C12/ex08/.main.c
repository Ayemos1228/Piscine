/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main7.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 22:51:43 by tsomeya           #+#    #+#             */
/*   Updated: 2021/02/01 01:51:43 by tsomeya          ###   ########.fr       */
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

	char *strs[5];
	strs[0] = "data4";
	strs[1] = "data3";
	strs[2] = "data2";
	strs[3] = "data1";
	strs[4] = "data0";
	list = ft_list_push_strs(5, strs);
	ft_list_reverse(&list);
	printf("1 = %s\n",list->data);
	list = list->next;
	printf("2 = %s\n",list->data);
	list = list->next;
	printf("3 = %s\n",list->data);
	list = list->next;
	printf("4 = %s\n",list->data);
	list = list->next;
	printf("5 = %s\n",list->data);
	list = list->next;
	return (0);
}
