/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 17:32:17 by tsomeya           #+#    #+#             */
/*   Updated: 2021/01/31 19:36:51 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "atoi.h"
#include "ft_convert_num.h"

unsigned int	n_powered_a(int n, int a)
{
	int				i;
	int				tmp;

	tmp = n;
	i = 1;
	while (i < a)
	{
		n *= tmp;
		i++;
	}
	return ((unsigned int)n);
}

unsigned int	numstr2int(char *str, int len)
{
	int				i;
	unsigned int	ans;
	unsigned int	tmp_int;

	ans = 0;
	i = 0;
	while (i < len)
	{
		tmp_int = str[i] - '0';
		if (i != len - 1)
			ans += tmp_int * n_powered_a(10, len - i - 1);
		else
			ans += tmp_int;
		i++;
	}
	return (ans);
}

unsigned int	ft_atoi(char *str)
{
	int				len_num_char;
	int				total_idx;
	int				sign;

	sign = 1;
	len_num_char = 0;
	total_idx = 0;
	while ((9 <= str[total_idx] && str[total_idx] <= 13) ||
	str[total_idx] == 32)
		total_idx++;
	if (str[total_idx] == '-')
	{
		sign = -1;
		total_idx++;
	}
	if (str[total_idx] < '0' || '9' < str[total_idx])
		return (0);
	while ('0' <= str[total_idx] && str[total_idx] <= '9')
	{
		len_num_char++;
		total_idx++;
	}
	return (numstr2int(&str[total_idx - len_num_char],
	len_num_char) * sign);
}
