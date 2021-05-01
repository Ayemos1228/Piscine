/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 16:13:32 by tsomeya           #+#    #+#             */
/*   Updated: 2021/01/18 16:15:45 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int my_div;
	int my_mod;
	int tmp_a;
	int tmp_b;

	tmp_a = *a;
	tmp_b = *b;
	my_div = tmp_a / tmp_b;
	my_mod = tmp_a % tmp_b;
	*a = my_div;
	*b = my_mod;
}
