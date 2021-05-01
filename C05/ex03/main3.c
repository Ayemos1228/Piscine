/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 13:58:08 by tsomeya           #+#    #+#             */
/*   Updated: 2021/01/23 00:54:19 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	ft_recursive_power(int nb, int power);

int	main(void)
{
	int a = ft_recursive_power(5, 2);
	printf("%d\n", a);
	int b = ft_recursive_power(0, 1);
	printf("%d\n", b);
	int c = ft_recursive_power(0, 0);
	printf("%d\n", c);
	int d = ft_recursive_power(5, 0);
	printf("%d\n", d);
	printf("%d\n", ft_recursive_power(-7, 7));
	printf("%d\n", ft_recursive_power(-2, 10));

	return (0);
}
