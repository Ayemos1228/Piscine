/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 15:54:02 by tsomeya           #+#    #+#             */
/*   Updated: 2021/01/30 16:15:31 by tsomeya          ###   ########.fr       */
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

	list = ft_create_elem(data5);
	ft_list_push_front(&list, data4);
	ft_list_push_front(&list, data3);
	ft_list_push_front(&list, data2);
	ft_list_push_front(&list, data1);
	printf("list_size = %d", ft_list_size(list));
	return (0);
}
