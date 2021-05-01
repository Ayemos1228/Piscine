/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 16:21:41 by tsomeya           #+#    #+#             */
/*   Updated: 2021/01/30 00:57:21 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		is_plus_number(char *str)
{
	int	flag;
	int	i;

	i = 0;
	flag = 1;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			flag *= -1;
		i++;
	}
	return (flag);
}

int		n_powered_a(int n, int a)
{
	int i;
	int tmp;

	tmp = n;
	i = 1;
	while (i < a)
	{
		n *= tmp;
		i++;
	}
	return (n);
}

int		numchar_to_int(char *str, int len)
{
	int	i;
	int ans;
	int tmp_int;

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


int		ft_atoi(char *str)
{
	int	len_num_char;
	int	len_sign;
	int	total_idx;
	int	sign;

	len_num_char = 0;
	len_sign = 0;
	total_idx = 0;
	sign = 0;
	while ((9 <= str[total_idx] && str[total_idx] <= 13) ||
	str[total_idx] == 32)
		total_idx++;
	while (str[total_idx] == '-' || str[total_idx] == '+')
	{
		total_idx++;
		len_sign++;
	}
	while ('0' <= str[total_idx] && str[total_idx] <= '9')
	{
		len_num_char++;
		total_idx++;
	}
	sign = is_plus_number(&str[total_idx - len_num_char - len_sign]);
	return (numchar_to_int(&str[total_idx - len_num_char],
	len_num_char) * sign);
}
