/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main4.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 16:15:54 by tsomeya           #+#    #+#             */
/*   Updated: 2021/01/18 16:17:30 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int main(void)
{
	int a = 10;
	int b = 3;

	printf("a = %d, b = %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("a = %d, b = %d\n", a, b);
}
