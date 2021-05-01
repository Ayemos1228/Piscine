/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 15:13:36 by tsomeya           #+#    #+#             */
/*   Updated: 2021/01/30 15:50:12 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

int	main(void)
{
	t_list *elem1;

	char *str1 = "data1";
	char *str2 = "data2";
	elem1 = ft_create_elem(str1);
	ft_list_push_front(&elem1, str2);
	printf("list[0]->data = %s", elem1->data);
	printf("\nlist[1]->data = %p", elem1-> next);
	printf("\nlist[1]->data = %s", (elem1-> next)->data);
	return (0);

}
