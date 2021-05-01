/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 10:34:50 by tsomeya           #+#    #+#             */
/*   Updated: 2021/01/28 17:12:12 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max);

int	main(void)
{
	int	*range1;
	int	*range2;
	int	*range3;
	int i = 0;
	int a = ft_ultimate_range(&range1, -2, 5);
	int b = ft_ultimate_range(&range2, 5, 3);
	int c = ft_ultimate_range(&range3, 0, 5);
	while (i < a)
	{
		printf("range1[%d] = %d\n", i, range1[i]);
		i++;
	}
	printf("a = %d\n", a);
	i = 0;
	while (i < b)
	{
		printf("range2[%d] = %d\n", i, range2[i]);
		i++;
	}
	printf("b = %d, pointer = %p\n", b, range2);
	i = 0;
	while (i < c)
	{
		printf("range3[%d] = %d\n", i, range3[i]);
		i++;
	}
	printf("c = %d\n", c);
	free(range1);
	free(range2);
	free(range3);
	return (0);
}
