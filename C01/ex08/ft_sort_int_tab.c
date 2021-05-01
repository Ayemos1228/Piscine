/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 19:23:34 by tsomeya           #+#    #+#             */
/*   Updated: 2021/01/18 20:11:25 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	arr2arr(int *arr1, int *arr2, int size)
{
	int counter;

	counter = 0;
	while (counter < size)
	{
		*(arr2 + counter) = *(arr1 + counter);
		counter++;
	}
}

void	ft_sort_int_tab(int *tab, int size)
{
	int tmp[size];
	int i;
	int j;
	int tmp_int;

	i = 0;
	j = 0;
	arr2arr(tab, tmp, size);
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tmp[i] > tmp[j])
			{
				tmp_int = tmp[i];
				tmp[i] = tmp[j];
				tmp[j] = tmp_int;
			}
			j++;
		}
		i++;
	}
	arr2arr(tmp, tab, size);
}
