/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_std.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 12:26:30 by tsomeya           #+#    #+#             */
/*   Updated: 2021/02/05 01:59:58 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tool.h"

int			write_hex_one_std(char *str)
{
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(str);
	while (i < (len / 16) * 16)
	{
		if (i % 16 == 0)
		{
			write_7_hex(i);
			write(1, " ", 1);
		}
		write_hex(str[i]);
		if (i % 16 != 15)
			write(1, " ", 1);
		if (i % 16 == 15)
			write(1, "\n", 1);
		i++;
	}
	return (i);
}

void		write_hex_two_std(char *str)
{
	int		i;
	int		len;
	int		rest;

	len = ft_strlen(str);
	i = (len / 16) * 16;
	rest = len - i;
	write_7_hex(i);
	write(1, " ", 1);
	while (i < len)
	{
		write_hex(str[i]);
		if (i % 16 != 15)
			write(1, " ", 1);
		i++;
	}
	if (i % 16 != 0)
	{
		print_space(16 - rest);
		write(1, "\n", 1);
		write_7_hex(i);
	}
	write(1, "\n", 1);
}

void		read_write_stdin(void)
{
	char	*str;
	char	*tmp;
	char	buf;

	str = ft_strdup("\0");
	while (read(0, &buf, 1))
	{
		tmp = str;
		str = ft_append(str, buf);
		free(tmp);
	}
	write_hex_one(str);
	write_hex_two(str, 0);
}

void		read_write_stdin_option(void)
{
	char	*str;
	char	*tmp;
	char	buf;

	str = ft_strdup("\0");
	while (read(0, &buf, 1))
	{
		tmp = str;
		str = ft_append(str, buf);
		free(tmp);
	}
	write_hex_one_option(str);
	if (ft_strlen(str) % 16 == 0)
		write_hex_two_option(str, 0);
	else
		write_hex_two_option(str, 1);
}
