/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main6.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 22:51:43 by tsomeya           #+#    #+#             */
/*   Updated: 2021/01/30 23:15:17 by tsomeya          ###   ########.fr       */
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
	strs[0] = "data1";
	strs[1] = "data2";
	strs[2] = "data3";
	strs[3] = "data4";
	strs[4] = "data5";
	list = ft_list_push_strs(5, strs);
	ft_list_clear(list, my_free);
	// t_list *tmp;
	// tmp = list;
	// my_free(tmp->data);
	// my_free(tmp->next);
	// tmp = tmp->next;
	// my_free(tmp->data);
	// my_free(tmp->next);
	// tmp = tmp->next;
	// free(list);
	return (0);
}
