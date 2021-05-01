/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 10:44:53 by tsomeya           #+#    #+#             */
/*   Updated: 2021/01/27 16:05:06 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	ft_putnbr(int nb)
{
	int sign;

	sign = 1;
	if (nb < 0)
	{
		sign = -1;
		ft_putchar('-');
	}
	if (nb < 10 && nb > -10)
		ft_putchar('0' + nb * sign);
	else
	{
		ft_putnbr(nb / 10 * sign);
		ft_putchar(nb % 10 * sign + '0');
	}
}

int		ft_strlen(char *str)
{
	int count;

	count = 0;
	while (1)
	{
		if (str[count] != '\0')
			count++;
		else
			break ;
	}
	return (count);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_putstr(par[i].str);
		ft_putchar('\n');
		ft_putnbr(par[i].size);
		ft_putchar('\n');
		ft_putstr(par[i].copy);
		ft_putchar('\n');
		i++;
	}
}
