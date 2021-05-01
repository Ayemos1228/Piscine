/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 11:43:45 by tsomeya           #+#    #+#             */
/*   Updated: 2021/01/19 23:59:32 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb_second_num(char i, char j);

void	ft_print_comb2(void)
{
	char i;
	char j;

	i = '0';
	j = '0';
	while (i <= '9')
	{
		while (j <= '9')
		{
			if (i == '9' && j == '9')
				break ;
			else
			{
				ft_print_comb_second_num(i, j);
				j++;
			}
		}
		i++;
		j = '0';
	}
}

void	ft_print_comb_second_num(char i, char j)
{
	char k;
	char l;

	k = i;
	l = j + 1;
	while (k <= '9')
	{
		while (l <= '9')
		{
			write(1, &i, 1);
			write(1, &j, 1);
			write(1, " ", 1);
			write(1, &k, 1);
			write(1, &l, 1);
			if (i != '9' || j != '8' || k != '9' || l != '9')
			{
				write(1, ",", 1);
				write(1, " ", 1);
			}
			l++;
		}
		k++;
		l = '0';
	}
}
