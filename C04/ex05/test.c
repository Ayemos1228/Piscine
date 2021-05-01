/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 12:36:17 by tsomeya           #+#    #+#             */
/*   Updated: 2021/01/26 21:27:11 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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

int		numstr_base_to_int(char *str, char *base, int len)
{
	int	i;
	int j;
	int ans;
	int tmp_int;
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

int	numstr_base_len(char *str, char *base)
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
				break;
			j++;
		}
		if (j == b_size)
			return(i);
		i++;
	}
}

int	main(void)
{
	char *str = "rmdaddadr";

	int a = numstr_base_len(str, "mrdoc");
	printf("%d", a);
	return (0);
}
