/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 13:45:58 by tsomeya           #+#    #+#             */
/*   Updated: 2021/01/22 13:51:19 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb);

int	main(void)
{
	int a = ft_recursive_factorial(5);
	printf("%d\n", a);
	int b = ft_recursive_factorial(0);
	printf("%d\n", b);
	// error!
	// int c = ft_recursive_factorial(2147483648);
	// printf("%d\n", c);
	int d = ft_recursive_factorial(-2);
	printf("%d\n", d);

	return (0);
}
