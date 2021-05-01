/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main0.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 20:14:17 by tsomeya           #+#    #+#             */
/*   Updated: 2021/01/29 22:22:02 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_foreach(int *tab, int length, void(*f)(int));

void	putnbr(int n)
{
	printf("%d\n", n);
}

int	main(void)
{
	int tab[5];
	int length = 5;
	int i = -1;

	while (++i < 5)
	{
		tab[i] =  i;
	}

	ft_foreach(tab, length, *putnbr);
	return (0);
}
