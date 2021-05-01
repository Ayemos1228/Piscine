/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main0.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 15:10:30 by tsomeya           #+#    #+#             */
/*   Updated: 2021/02/05 04:16:51 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"

int	main(void)
{
	t_list *list;
	char *str = "abc";

	list = ft_create_elem(str);
	printf("list->data = %s", (char *)list->data);
	return (0);
}
