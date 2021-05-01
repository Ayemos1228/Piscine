/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main4.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 16:39:44 by tsomeya           #+#    #+#             */
/*   Updated: 2021/01/30 17:12:30 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

int	main(void)
{
	t_list *list;

	char *data1 = "data1";
	char *data2 = "data2";
	char *data3 = "data3";
	char *data4 = "data4";
	char *data5 = "data5";
	char *data6 = "new_data";

	list = ft_create_elem(data5);
	ft_list_push_front(&list, data4);
	ft_list_push_front(&list, data3);
	ft_list_push_front(&list, data2);
	ft_list_push_front(&list, data1);
	ft_list_push_back(&list, data6);
	printf("last_data = %s\n", ft_list_last(list)->data);
	printf("next_ptr = %p", ft_list_last(list)->next);
	return (0);
}
