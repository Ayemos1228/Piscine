/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main5.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 00:21:52 by tsomeya           #+#    #+#             */
/*   Updated: 2021/01/30 09:43:59 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tool.h"
#include "atoi.h"
#include "operators.h"

int			op_to_int(char *str)
{
	if (ft_strcmp(str, "+") == 0)
		return (addition);
	else if (ft_strcmp(str, "-") == 0)
		return (subtraction);
	else if (ft_strcmp(str, "*") == 0)
		return (multiplication);
	else if (ft_strcmp(str, "/") == 0)
		return (division);
	else if (ft_strcmp(str, "%") == 0)
		return (modulo);
	else
		return (-1);
}

int			main(int ac, char **av)
{
	int		op;
	void	(*func[5])(int, int);
	int		a;
	int		b;

	func[addition] = add;
	func[subtraction] = sub;
	func[multiplication] = mul;
	func[division] = div;
	func[modulo] = mod;
	op = 0;
	if (ac != 4)
		return (0);
	else if ((op = op_to_int(av[2])) == -1)
		ft_putstr("0\n");
	else
	{
		a = ft_atoi(av[1]);
		b = ft_atoi(av[3]);
		func[op](a, b);
	}
	return (0);
}
