/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnbr_rec.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 20:06:57 by tsomeya           #+#    #+#             */
/*   Updated: 2021/01/27 10:37:48 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}


void		ft_putnbr_base(int nb, char *base)
{
	int		sign;
	char	c;
	int		base_size;

	base_size = ft_strlen(base);
	sign = 1;
	if (nb < 0)
	{
		sign = -1;
		write(1, "-", 1);
	}
	if (nb < base_size && nb > -base_size)
	{
		c = base[nb * sign];
		write(1,&c, 1);
	}
	else
	{
		c = base[nb % base_size * sign];
		ft_putnbr(nb / base_size * sign);
		write(1, &c, 1);
	}
}
