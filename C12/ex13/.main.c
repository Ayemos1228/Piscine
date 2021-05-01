/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 16:55:49 by tsomeya           #+#    #+#             */
/*   Updated: 2021/02/02 17:05:00 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

int		main(void)
{
	t_list *list1;
	t_list *list2;

	char *strs1[5];
	strs1[0] = "data4";
	strs1[1] = "data3";
	strs1[2] = "data2";
	strs1[3] = "data1";
	strs1[4] = "data0";

	char *strs2[5];
	strs2[0] = "data9";
	strs2[1] = "data8";
	strs2[2] = "data7";
	strs2[3] = "data6";
	strs2[4] = "data5";
	list1 = ft_list_push_strs(5, strs1);
	list2 = ft_list_push_strs(5, strs2);
	ft_list_merge(&list1, list2);
	printf("1: %s\n", list1->data);
	list1 = list1->next;
	printf("2: %s\n", list1->data);
	list1 = list1->next;
	printf("3: %s\n", list1->data);
	list1 = list1->next;
	printf("4: %s\n", list1->data);
	list1 = list1->next;
	printf("5: %s\n", list1->data);
	list1 = list1->next;
	printf("6: %s\n", list1->data);
	list1 = list1->next;
	printf("7: %s\n", list1->data);
	list1 = list1->next;
	printf("8: %s\n", list1->data);
	list1 = list1->next;
	printf("9: %s\n", list1->data);
	list1 = list1->next;
	return (0);
}
