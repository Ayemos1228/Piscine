/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 22:09:21 by tsomeya           #+#    #+#             */
/*   Updated: 2021/01/29 22:26:19 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		*ft_map(int *tab, int length, int (*f)(int));
void	ft_foreach(int *tab, int length, void (*f)(int));

int	squared(int n)
{
	return (n * n);
}

void	putnbr(int n)
{
	printf("%d\n", n);
}

int	main(void)
{
	int	tab[5];
	int *ans;
	int i;

	i = 0;
	while (i < 5)
	{
		tab[i] = i;
		i++;
	}
	ans = ft_map(tab, 5, *squared);
	ft_foreach(ans, 5, *putnbr);
	return (0);
}
