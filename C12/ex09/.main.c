/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main9.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 22:51:43 by tsomeya           #+#    #+#             */
/*   Updated: 2021/02/01 02:17:27 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>
#include <unistd.h>

void	ft_putptr(void *str)
{
	printf("pointer = %p\n", str);
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
	ft_list_foreach(list, ft_putptr);
	return (0);
}
