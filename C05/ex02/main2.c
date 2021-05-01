/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 13:55:09 by tsomeya           #+#    #+#             */
/*   Updated: 2021/01/25 01:06:57 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	ft_iterative_power(int nb, int power);

int	main(void)
{
	int a = ft_iterative_power(5, 2);
	printf("%d\n", a);
	int b = ft_iterative_power(0, 1);
	printf("%d\n", b);
	int c = ft_iterative_power(0, 0);
	printf("%d\n", c);
	int d = ft_iterative_power(5, 0);
	printf("%d\n", d);
	printf("%d\n", ft_iterative_power(-7, 7));
	printf("%d\n", ft_iterative_power(-2, 10));
	printf("%d\n", ft_iterative_power(5, -2));
	return (0);
}
