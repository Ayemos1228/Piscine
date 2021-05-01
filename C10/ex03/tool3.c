/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tool3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 00:08:22 by tsomeya           #+#    #+#             */
/*   Updated: 2021/02/05 01:06:11 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tool.h"

void			write_hex(char c)
{
	int			first;
	int			second;
	char		*numlist;
	int			input;

	numlist = "0123456789abcdef";
	input = c;
	if (input < 0)
		input += 256;
	first = input / 16;
	second = input % 16;
	write(1, &numlist[first], 1);
	write(1, &numlist[second], 1);
}

void			write_7_hex(int offset)
{
	char		*numlist;
	char		print_list[8];
	int			i;

	i = 0;
	numlist = "0123456789abcdef";
	while (i < 7)
	{
		print_list[i] = numlist[offset % 16];
		offset /= 16;
		i++;
	}
	i--;
	while (i >= 0)
	{
		write(1, &print_list[i], 1);
		i--;
	}
}

int				n_powered_a(int n, int a)
{
	int			i;
	int			tmp;

	tmp = n;
	i = 1;
	if (a == 0)
		return (1);
	while (i < a)
	{
		n *= tmp;
		i++;
	}
	return (n);
}

char			*ft_puterr_tonewline(char *str)
{
	while (*str != '\n')
	{
		write(2, &(*str), 1);
		str++;
	}
	str++;
	write(2, "\n", 1);
	return (str);
}

void			print_all_errs(int errcnt, char **av, int ac, char *errstr)
{
	int			i;
	int			checker;

	i = 1;
	checker = errcnt;
	if (checker == 0)
		return ;
	while (i < ac)
	{
		checker = errcnt / n_powered_a(10, ac - i - 1);
		if (checker > 0)
		{
			ft_puterr(basename(av[0]));
			ft_puterr(": ");
			ft_puterr(basename(av[i]));
			ft_puterr(": ");
			errstr = ft_puterr_tonewline(errstr);
		}
		i++;
	}
}
