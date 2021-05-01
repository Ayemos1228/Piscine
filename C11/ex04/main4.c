/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main4.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 23:53:27 by tsomeya           #+#    #+#             */
/*   Updated: 2021/02/01 10:29:50 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_is_sort(int *tab, int length, int (*f)(int, int));

int numcmp(int a, int b)
{
	if (a < b)
		return (a - b);
	else if (a == b)
		return (0);
	else
		return (a - b);
}

int	main(int ac, char **av)
{
	int tab[ac - 1];
	int i = 1;
	while (i < ac)
	{
		tab[i - 1] = atoi(av[i]);
		i++;
	}
	i = 1;
	while (i < ac)
	{
		printf("%d value: %d\n",i, atoi(av[i]));
		i++;
	}
	int ans = ft_is_sort(tab, ac - 1, *numcmp);
	printf("Returned value: %d", ans);
	return (0);
}
