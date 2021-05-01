/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tool.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 00:30:10 by tsomeya           #+#    #+#             */
/*   Updated: 2021/01/30 09:40:59 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tool.h"

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

int		ft_str_is_numeric(char *str)
{
	int flag;
	int i;

	flag = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (48 <= str[i] && str[i] <= 57)
			i++;
		else
		{
			flag = 0;
			break ;
		}
	}
	return (flag);
}

int		ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] == s2[i])
			i++;
		else
			break ;
	}
	return (s1[i] - s2[i]);
}
