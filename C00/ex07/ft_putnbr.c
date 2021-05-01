/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 12:03:47 by tsomeya           #+#    #+#             */
/*   Updated: 2021/01/19 17:45:56 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		int_order_count(int nb);
void	ft_putnbr(int nb);
void	print_int(int nb, int order);

int		int_order_count(int nb)
{
	int order;

	order = 1;
	while (1)
	{
		if (nb >= 10)
		{
			nb /= 10;
			order++;
		}
		else
			break ;
	}
	return (order);
}

void	print_int(int nb, int order)
{
	int		i;
	int		ans_int[order];
	int		tmp;
	char	c;

	i = 0;
	while (i < order)
	{
		tmp = nb % 10;
		ans_int[i] = tmp;
		if (nb >= 10)
		{
			nb /= 10;
			i++;
		}
		else
			break ;
	}
	while (i >= 0)
	{
		c = ans_int[i] + '0';
		write(1, &c, 1);
		i--;
	}
}

void	ft_putnbr(int nb)
{
	int order;
	int abs_nb;

	order = int_order_count(nb);
	if (nb < 0)
	{
		write(1, "-", 1);
		if (nb == -2147483648)
		{
			write(1, "2147483648", 10);
		}
		else
		{
			abs_nb = -1 * nb;
			order = int_order_count(abs_nb);
			print_int(abs_nb, order);
		}
	}
	else if (nb == 0)
		write(1, "0", 1);
	else
		print_int(nb, order);
}
