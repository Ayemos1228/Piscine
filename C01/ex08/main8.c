/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main8.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 19:24:14 by tsomeya           #+#    #+#             */
/*   Updated: 2021/01/18 20:11:12 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int		main(void)
{
	int tab[15] = {13, 5, 1, 9, 10, 2, 4, 8, 7, 11, 14, 6, 3, 0, 12};
	printf("Before:\n");
	for (int i=0; i< 15; i++)
	{
		printf("tab[%d] is %d\n",i, tab[i]);
	}
	ft_sort_int_tab(tab, 15);
	printf("After:\n");
	for (int j = 0; j < 15; j++)
	{
		printf("tab[%d] is %d\n", j, tab[j]);
	}
	return (0);
}
