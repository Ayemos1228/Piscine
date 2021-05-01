/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_file_lib.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atsuchiy <atsuchiy@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 21:11:21 by tsomeya           #+#    #+#             */
/*   Updated: 2021/02/03 18:15:38 by atsuchiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tool.h"

t_ui			simple_atoi(char *str)
{
	t_ui		return_int;
	t_ui		i;

	i = 0;
	return_int = 0;
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		return_int *= 10;
		return_int += str[i] - '0';
		i++;
	}
	return (return_int);
}

int				set_row(char *buf, t_ui len, t_ui *size)
{
	t_ui		j;
	int			is_plus;

	j = -1;
	is_plus = 0;
	while (++j < len)
	{
		if (buf[0] == '+' && j == 0)
			is_plus = 1;
		else if ('0' <= buf[j] && buf[j] <= '9')
			continue ;
		else
			return (-1);
	}
	buf[j] = '\0';
	if (is_plus)
	{
		if ((size[0] = simple_atoi(&buf[1])) == 0)
			return (-1);
	}
	if (is_plus != 1 && (size[0] = simple_atoi(buf)) == 0)
		return (-1);
	return (0);
}

int				is_unique(char *chars)
{
	if (chars[0] == chars[1])
		return (0);
	if (chars[1] == chars[2])
		return (0);
	if (chars[2] == chars[0])
		return (0);
	return (1);
}

int				is_allprintable(char *s)
{
	int			i;

	i = 0;
	while (i < 3)
	{
		if (s[i] < 0x20 || s[i] > 0x7E)
			return (0);
		++i;
	}
	return (1);
}
