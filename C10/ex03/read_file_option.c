/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file_option.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 19:45:38 by tsomeya           #+#    #+#             */
/*   Updated: 2021/02/05 03:43:13 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tool.h"

void			print_space_option(int size)
{
	int			space;

	space = 0;
	if (size < 9)
	{
		while (space < (16 - size) * 2 + (16 - size) + 2)
		{
			write(1, " ", 1);
			space++;
		}
	}
	else
	{
		while (space < (16 - size) * 2 + (16 - size) + 1)
		{
			write(1, " ", 1);
			space++;
		}
	}
}

void			write_printable_string(char *str, int size)
{
	int			i;

	i = 0;
	if (size != 16)
		print_space_option(size);
	write(1, "|", 1);
	while (i < size)
	{
		if (32 <= str[i] && str[i] <= 126)
			write(1, &str[i], 1);
		else
			write(1, ".", 1);
		i++;
	}
	write(1, "|", 1);
	write(1, "\n", 1);
}

void			write_hex_one_option(char *str)
{
	int			i;
	int			j;
	int			len;
	char		*tmp;

	i = 0;
	len = ft_strlen(str);
	while (i < (len / 16) * 16)
	{
		j = -1;
		tmp = str;
		write_8_hex(i);
		write(1, "  ", 2);
		while (++j < 16 && i + j < (len / 16) * 16)
		{
			write_hex(*(str++));
			if (j % 16 == 7)
				write(1, "  ", 2);
			else
				write(1, " ", 1);
		}
		write(1, " ", 1);
		write_printable_string(tmp, j);
		i += 16;
	}
}

void			write_hex_two_option(char *str, int space)
{
	int			i;
	int			i_copy;

	i = (ft_strlen(str) / 16) * 16;
	i_copy = (ft_strlen(str) / 16) * 16;
	if (!str[0])
		return ;
	write_8_hex(i);
	if (space)
		write(1, "  ", 2);
	while (i < ft_strlen(str))
	{
		write_hex(str[i]);
		if (i % 16 != 15)
			write(1, " ", 1);
		if (i % 16 == 7)
			write(1, " ", 1);
		i++;
	}
	if (i % 16 != 0)
	{
		write_printable_string(&str[i_copy], ft_strlen(str) - i_copy);
		write_8_hex(i);
	}
	write(1, "\n", 1);
}

void			read_files_hex_option(char **av, int ac)
{
	int			i;
	int			fd;
	char		*str;
	char		*tmp;

	i = 1;
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
	write_hex_one_option(str);
	if (ft_strlen(str) % 16 == 0)
		write_hex_two_option(str, 0);
	else
		write_hex_two_option(str, 1);
}
