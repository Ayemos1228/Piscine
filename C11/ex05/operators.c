/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operators.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 00:23:00 by tsomeya           #+#    #+#             */
/*   Updated: 2021/01/30 09:37:51 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tool.h"
#include "operators.h"

void	add(int a, int b)
{
	ft_putnbr(a + b);
	ft_putchar('\n');
}

void	sub(int a, int b)
{
	ft_putnbr(a - b);
	ft_putchar('\n');
}

void	mul(int a, int b)
{
	ft_putnbr(a * b);
	ft_putchar('\n');
}

void	div(int a, int b)
{
	if (b == 0)
		ft_putstr("Stop : division by zero\n");
	else
	{
		ft_putnbr(a / b);
		ft_putchar('\n');
	}
}

void	mod(int a, int b)
{
	if (b == 0)
		ft_putstr("Stop : modulo by zero\n");
	else
	{
		ft_putnbr(a % b);
		ft_putchar('\n');
	}
}
