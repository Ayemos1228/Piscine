/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main4.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 14:03:07 by tsomeya           #+#    #+#             */
/*   Updated: 2021/01/23 00:30:14 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	ft_fibonacci(int index);

int	main(void)
{
	int i = -2;
	while (i < 15)
	{
		printf("Fibonacci n = %d: %d\n", i, ft_fibonacci(i));
		i++;
	}
	return (0);
}
