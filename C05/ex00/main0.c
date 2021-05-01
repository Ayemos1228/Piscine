/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main0.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 13:41:02 by tsomeya           #+#    #+#             */
/*   Updated: 2021/01/25 14:03:53 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	ft_iterative_factorial(int nb);

int	main(void)
{
	int a = ft_iterative_factorial(100);
	printf("%d\n", a);
	int b = ft_iterative_factorial(0);
	printf("%d\n", b);
	// error!
	// int c = ft_iterative_factorial(2147483648);
	// printf("%d\n", c);
	int d = ft_iterative_factorial(5);
	printf("%d\n", d);

	return (0);
}
