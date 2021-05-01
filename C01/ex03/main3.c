/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 16:09:46 by tsomeya           #+#    #+#             */
/*   Updated: 2021/01/18 16:12:19 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int main(void)
{
	int a;
	int b;
	int div;
	int mod;

	a = 10;
	b = 3;

	printf("a = %d, b = %d, div = %d, mod = %d\n", a, b, div, mod);
	ft_div_mod(a, b, &div, &mod);
	printf("a = %d, b = %d, div = %d, mod = %d ", a, b, div, mod);

}
