/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 10:11:01 by tsomeya           #+#    #+#             */
/*   Updated: 2021/01/27 15:34:58 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *range;
	int size;
	int num;
	int i;

	num = min;
	i = 0;
	size = max - min;
	range = (int *)malloc(size * sizeof(int));
	if (min >= max)
		return ((void *)0);
	else
	{
		while (num < max)
		{
			range[i] = num;
			num++;
			i++;
		}
		return (range);
	}
}
