/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main7.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 17:37:41 by tsomeya           #+#    #+#             */
/*   Updated: 2021/01/18 19:45:42 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size);

int		main(void)
{
	int tab[5];
	for (int i=0; i< 5; i++)
	{
		tab[i] = i;
	}
	printf("Before:\n");
	for (int j=0; j < 5; j++)
	{
		printf("tab[%d] = %d ",j , tab[j]);
	}
	ft_rev_int_tab(tab,5);
	printf("\nAfter:\n");
	for (int k=0; k < 5; k++)
	{
		printf("tab[%d] = %d ",k , tab[k]);
	}
}
