/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 12:15:22 by tsomeya           #+#    #+#             */
/*   Updated: 2021/01/28 14:42:57 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int		invalid_b(char *str)
{
	int	i;
	int	j;
	int	flag;

	i = 0;
	j = 1;
	flag = 0;
	while (str[i] != '\0')
	{
		while (str[j] != '\0')
		{
			if (str[i] == str[j])
			{
				flag = 1;
				break ;
			}
			j++;
		}
		if (str[i] == '+' || str[i] == '-' ||
		(9 <= str[i] && str[i] <= 13) || str[i] == 32)
			flag = 1;
		i++;
		j = i + 1;
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

int		numstr_base_len(char *str, char *base)
{
	int i;
	int j;
	int b_size;

	i = 0;
	j = 0;
	b_size = 0;
	while (base[b_size] != '\0')
		b_size++;
	while (1)
	{
		j = 0;
		while (base[j] != '\0')
		{
			if (str[i] == base[j])
				break ;
			j++;
		}
		if (j == b_size)
			return (i);
		i++;
	}
}

int		numstr_base_to_int(char *str, char *base, int len)
{
	int	i;
	int j;
	int tmp_int;
	int ans;
	int b_size;

	ans = 0;
	i = 0;
	b_size = 0;
	while (base[b_size] != '\0')
		b_size++;
	while (i < len)
	{
		j = 0;
		while (base[j] != '\0' && str[i] != base[j])
			j++;
		tmp_int = j;
		if (i != len - 1)
			ans += tmp_int * n_powered_a(b_size, len - i - 1);
		else
			ans += tmp_int;
		i++;
	}
	return (ans);
}

int		ft_atoi_base(char *str, char *base)
{
	int	len_numstr_base;
	int	total;
	int	sign;
	int b_size;

	len_numstr_base = 0;
	total = 0;
	sign = 1;
	b_size = 0;
	while (base[b_size] != '\0')
		b_size++;
	if (invalid_b(base) || b_size == 0 || b_size == 1)
		return (0);
	while ((9 <= str[total] && str[total] <= 13) || str[total] == 32)
		total++;
	while (str[total] == '-' || str[total] == '+')
	{
		if (str[total] == '-')
			sign *= -1;
		total++;
	}
	len_numstr_base = numstr_base_len(&str[total], base);
	return (numstr_base_to_int(&str[total], base, len_numstr_base) * sign);
}
