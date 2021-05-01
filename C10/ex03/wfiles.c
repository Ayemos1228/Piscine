/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wfiles.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/31 08:42:36 by tsomeya           #+#    #+#             */
/*   Updated: 2021/02/05 03:33:50 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tool.h"
#include <unistd.h>

int			write_hex_one(char *str)
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

void		print_space(int size)
{
	int		space;

	space = 0;
	while (space < size * 2 + size - 1)
	{
		write(1, " ", 1);
		space++;
	}
}

void		write_hex_two(char *str, int space)
{
	int		i;
	int		len;
	int		rest;

	len = ft_strlen(str);
	i = (len / 16) * 16 - 1;
	rest = len - (i + 1);
	if (!str[0])
		return ;
	write_7_hex(i + 1);
	if (space)
		write(1, " ", 1);
	while (++i < len)
	{
		write_hex(str[i]);
		if (i % 16 != 15)
			write(1, " ", 1);
	}
	if (i % 16 != 0)
	{
		print_space(16 - rest);
		write(1, "\n", 1);
		write_7_hex(i);
	}
	write(1, "\n", 1);
}

void		read_files_hex(char **av, int ac)
{
	int		i;
	int		fd;
	char	*str;
	char	*tmp;

	i = 0;
	str = ft_strdup("\0");
	while (++i < ac)
	{
		if ((fd = open(av[i], O_RDONLY)) == -1)
		{
			print_err(av, i);
			close(fd);
		}
		else
		{
			read_file(fd, &tmp, av, i);
			str = ft_join(str, tmp);
		}
	}
	write_hex_one(str);
	if (ft_strlen(str) % 16 == 0)
		write_hex_two(str, 0);
	else
		write_hex_two(str, 1);
}
