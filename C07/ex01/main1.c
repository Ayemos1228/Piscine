/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 10:10:59 by tsomeya           #+#    #+#             */
/*   Updated: 2021/01/25 10:40:24 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max);

int	main(void)
{
	unsigned long i = 0;
	int *range1;
	int *range2;
	int *range3;

	range1 = ft_range(0, 5);
	range2 = ft_range(-10, -5);
	range3 = ft_range(5, 3);

	while (i < 5)
	{
		printf("range1[%lu] = %d\n",i, range1[i]);
		i++;
	}
	i = 0;
	printf("\n");
	while (i < 5)
	{
		printf("range2[%lu] = %d\n",i, range2[i]);
		i++;
	}
	i = 0;
	printf("\n");
	printf("range3[%lu] = %p\n",i, range3);
	free(range1);
	free(range2);
	free(range3);
	return (0);
}
