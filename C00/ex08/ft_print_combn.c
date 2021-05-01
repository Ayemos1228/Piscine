/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 18:42:20 by tsomeya           #+#    #+#             */
/*   Updated: 2021/01/26 17:06:12 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putnbr(int nb)
{
	int		sign;
	char	c;

	sign = 1;
	if (nb < 0)
	{
		sign = -1;
		write(1, "-", 1);
	}
	if (nb < 10 && nb > -10)
	{
		c = '0' + nb * sign;
		write(1, &c, 1);
	}
	else
	{
		ft_putnbr(nb / 10 * sign);
		c = '0' + nb % 10 * sign;
		write(1, &c, 1);
	}
}

int			ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if ((nb == 0 && power == 0) || power == 0)
		return (1);
	else if (power == 1)
		return (nb);
	else
	{
		return (ft_recursive_power(nb, power - 1) * nb);
	}
}

int			comn_max(int n)
{
	int		ans;
	int		i;
	int		counter;

	counter = 0;
	i = 9;
	ans = 0;
	while (counter < n)
	{
		ans += ft_recursive_power(10, counter) * i;
		counter++;
		i--;
	}
	return (ans);
}

int			is_valid(int nb)
{
	int		tmp;
	int		prev;

	prev = nb % 10;
	while (nb >= 10)
	{
		nb /= 10;
		tmp = nb % 10;
		if (tmp >= prev)
			return (0);
		prev = tmp;
	}
	return (1);
}

void		ft_print_combn(int n)
{
	int		max;
	int		i;

	i = ft_recursive_power(10, n - 2) - 1;
	max = comn_max(n);
	if (n == 1)
		write(1, "0, 1, 2, 3, 4, 5, 6, 7, 8, 9", 28);
	else
	{
		while (++i <= max)
		{
			if (is_valid(i))
			{
				if (i < ft_recursive_power(10, n - 1))
				{
					write(1, "0", 1);
					ft_putnbr(i);
				}
				else
					ft_putnbr(i);
				if (i != max)
					write(1, ", ", 2);
			}
		}
	}
}
