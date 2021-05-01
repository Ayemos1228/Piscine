/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 14:42:49 by yfukushi          #+#    #+#             */
/*   Updated: 2021/01/31 23:50:24 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"
#include "ft_tool_str.h"
#include "ft_tool2.h"
#include "atoi.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <limits.h>
#include "ft_convert_num.h"

unsigned int	getdec(unsigned int nb)
{
	if (nb >= 90)
		return (90);
	else if (nb >= 80)
		return (80);
	else if (nb >= 70)
		return (70);
	else if (nb >= 60)
		return (60);
	else if (nb >= 50)
		return (50);
	else if (nb >= 40)
		return (40);
	else if (nb >= 30)
		return (30);
	else if (nb >= 20)
		return (20);
	else if (nb <= 20)
		return (nb);
	else
		return (0);
}

unsigned int	getmult(unsigned int nb)
{
	if (nb >= 1000000000)
		return (1000000000);
	else if (nb >= 1000000)
		return (1000000);
	else if (nb >= 1000)
		return (1000);
	else if (nb >= 100)
		return (100);
	else
		return (getdec(nb));
}

int				ft_print(unsigned int n, t_list *tab, int *first)
{
	int			i;
	int			mult;

	i = 0;
	mult = getmult(n);
	if (mult >= 100)
		ft_print(n / mult, tab, first);
	if (*first == 0)
		write(1, " ", 1);
	*first = 0;
	while (tab[i].nb != mult)
	{
		i++;
		if (i == 99)
			return (0);
	}
	ft_putstr(tab[i].val);
	if (mult != 0 && n % mult != 0)
		ft_print(n % mult, tab, first);
	return (1);
}

int				main(int ac, char **av)
{
	t_list		*tab;
	int			first;
	int			valid_ipt;

	first = 1;
	valid_ipt = 1;
	if (ac == 2 || ac == 3)
	{
		str2int_base(av[ac - 1], ft_strlen(av[ac - 1]), &valid_ipt);
		if (valid_ipt == 0)
		{
			write(1, "Error\n", 6);
			return (0);
		}
		tab = ac == 2 ? process("numbers.dict") : process(av[1]);
		if (ft_print(str2int_base(av[ac - 1],
		ft_strlen(av[ac - 1]), &valid_ipt), tab, &first) == 0)
			write(1, "Dict Error", 10);
		write(1, "\n", 1);
	}
	else
		write(1, "Error\n", 6);
	return (0);
}
