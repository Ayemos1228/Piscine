/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 21:50:18 by tsomeya           #+#    #+#             */
/*   Updated: 2021/01/25 21:56:05 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_point.h"
#include <stdio.h>

void		set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;
}

int			main(void)
{
	t_point	point;

	set_point(&point);
	printf("point(x) = %d, point(y) = %d", point.x, point.y);
	return (0);
}
