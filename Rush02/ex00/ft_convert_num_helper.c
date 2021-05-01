/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_num_helper.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/31 11:45:14 by tsomeya           #+#    #+#             */
/*   Updated: 2021/01/31 23:26:30 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_convert_num.h"
#include "ft_tool2.h"
#include "atoi.h"

unsigned int		str2int_dec(char *str, int len, char *base, int *valid_ipt)
{
	int						i;
	int						j;
	unsigned int			tmp_int;
	unsigned int			ans;

	ans = 0;
	i = -1;
	if (vnum(str, "0123456789") == 0 | nzlen(str) > 10 ||
	(nzlen(str) == 10 && ft_strcmp(str, "4294967295") > 0))
	{
		*valid_ipt = 0;
		return (0);
	}
	while (++i < len)
	{
		j = 0;
		while (base[j] != '\0' && str[i] != base[j])
			j++;
		tmp_int = j;
		if (i != len - 1)
			ans += tmp_int * n_powered_a(10, len - i - 1);
		else
			ans += tmp_int;
	}
	return (ans);
}

unsigned int		str2int_hex(char *str, int len)
{
	int						i;
	int						j;
	unsigned int			tmp_int;
	unsigned int			ans;
	char					*base;

	ans = 0;
	i = 0;
	base = "0123456789abcdefABCDEF";
	while (i < len)
	{
		j = 0;
		while (base[j] != '\0' && str[i] != base[j])
			j++;
		if (j >= 16)
			j = j - 6;
		tmp_int = j;
		if (i != len - 1)
			ans += tmp_int * n_powered_a(16, len - i - 1);
		else
			ans += tmp_int;
		i++;
	}
	return (ans);
}

unsigned int		str2int_b(char *str, int len, char *base, int *valid_ipt)
{
	int						i;
	int						j;
	unsigned int			tmp_int;
	unsigned int			ans;

	ans = 0;
	i = -1;
	if (vnum(str, base) == 0 || nzlen(str) > 32 || len == 0)
	{
		*valid_ipt = 0;
		return (0);
	}
	while (++i < len)
	{
		j = 0;
		while (base[j] != '\0' && str[i] != base[j])
			j++;
		tmp_int = j;
		if (i != len - 1)
			ans += tmp_int * n_powered_a(2, len - i - 1);
		else
			ans += tmp_int;
	}
	return (ans);
}

unsigned int		str2int_q(char *str, int len, char *base, int *valid_ipt)
{
	int						i;
	int						j;
	unsigned int			tmp_int;
	unsigned int			ans;

	ans = 0;
	i = -1;
	if (vnum(str, base) == 0 || nzlen(str) > 16 || len == 0)
	{
		*valid_ipt = 0;
		return (0);
	}
	while (++i < len)
	{
		j = 0;
		while (base[j] != '\0' && str[i] != base[j])
			j++;
		tmp_int = j;
		if (i != len - 1)
			ans += tmp_int * n_powered_a(4, len - i - 1);
		else
			ans += tmp_int;
	}
	return (ans);
}

unsigned int		str2int_oct(char *str, int len, char *base, int *valid_ipt)
{
	int						i;
	int						j;
	unsigned int			tmp_int;
	unsigned int			ans;

	ans = 0;
	i = -1;
	if (vnum(str, base) == 0 || nzlen(str) > 11 ||
	(nzlen(str) == 11 && str[0] > '3') || len == 0)
	{
		*valid_ipt = 0;
		return (0);
	}
	while (++i < len)
	{
		j = 0;
		while (base[j] != '\0' && str[i] != base[j])
			j++;
		tmp_int = j;
		if (i != len - 1)
			ans += tmp_int * n_powered_a(8, len - i - 1);
		else
			ans += tmp_int;
	}
	return (ans);
}
