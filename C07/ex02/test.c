/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 14:22:14 by tsomeya           #+#    #+#             */
/*   Updated: 2021/01/28 14:29:06 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
// int	ft_ultimate_range(int **range, int min, int max)
// {
// 	int i;

// 	i = 0;
// 	if (min >= max)
// 	{
// 		*range = (void *)0;
// 		printf("bug");
// 		return (0);
// 	}
// 	*range = (int *)malloc(sizeof(int) * (max - min));
// 	if (*range == (void *)0)
// 		return (-1);
// 	while (min < max)
// 	{
// 		(*range)[i] = min;
// 		min++;
// 		i++;
// 	}
// 	return (max - min);
// }

int	main(void)
{
	int i;
	int min = 0;
	int max = 5;
	int *ans;

	int ** u_range;
	int *range;
	u_range = &range;

	i = 0;
	if (min >= max)
	{
		ans  = (void *)0;
		printf("return 0");
	}
	ans = (int *)malloc(sizeof(int) * 5);
	if (ans == (void *)0)
		printf("return -1");
	while (min < max)
	{
		ans[i] = min;
		min++;
		i++;
	}
	printf("%d", max - min);
	*u_range = ans;
	i = 0;
	while (i < 5)
	{
		printf("range2[%d] = %d\n", i, range[i]);
		i++;
	}
	return (0);
}
