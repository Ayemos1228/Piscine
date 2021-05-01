/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main11.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 18:04:10 by tsomeya           #+#    #+#             */
/*   Updated: 2021/02/02 15:56:53 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putstr_non_printable(char *str);


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

//マイナスなので256をたす
void		write_hex(char c)
{
	int		char_int;
	int		first;
	int		second;
	char	*numlist;

	numlist = "0123456789abcdef";
	char_int = c;
	if (c < 0)
		char_int += 256;
	first = char_int / 16;
	second = char_int % 16;
	write(1, &numlist[first], 1);
	write(1, &numlist[second], 1);
}

int	main(void)
{
	char str[] = "Coucou\ntu va bien ?";
	char str1[] = "Coucou	tu va bien ?";

	// ft_putstr_non_printable(str);
	// printf("\n");
	// ft_putstr_non_printable(str1);
	char c;
	c = 0;
	write_hex(c);

	return(0);
}
