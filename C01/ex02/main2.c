/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 15:59:04 by tsomeya           #+#    #+#             */
/*   Updated: 2021/01/19 00:42:55 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int a;
	int b;

	a = 5;
	b = 10;
	printf("%d, %d\n", a, b);
	ft_swap(&a, &b);
	printf("%d, %d", a, b);
	return (0);
}
