/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 10:26:07 by tsomeya           #+#    #+#             */
/*   Updated: 2021/01/28 17:13:20 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int *ans;
	int num;

	i = 0;
	num = min;
	if (min >= max)
	{
		range = (void *)0;
		return (0);
	}
	ans = (int *)malloc(sizeof(int) * (max - min));
	if (ans == (void *)0)
		return (-1);
	while (num < max)
	{
		ans[i] = num;
		num++;
		i++;
	}
	*range = ans;
	return (max - min);
}
