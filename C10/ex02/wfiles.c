/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wfiles.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 11:05:43 by tsomeya           #+#    #+#             */
/*   Updated: 2021/02/05 03:20:46 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tool.h"

void		read_std(char **av)
{
	char	*str;

	if (read_stdin(&str, av) == -1)
		return ;
	ft_putstr(str);
	return ;
}

void		read_std_lastn(char **av, int n)
{
	char	*str;
	int		len;
	int		counter;

	counter = 0;
	if (read_stdin(&str, av) == -1)
		return ;
	len = ft_strlen(str);
	if (n > len)
		ft_strlen(str);
	else
	{
		counter = len - n;
		while (counter < len)
			ft_putchar(str[counter++]);
	}
}

void		write_last_nbytes(char **av, int n, int idx)
{
	int		fd;
	char	*str;
	int		len;

	if ((fd = open(av[idx], O_RDONLY)) == -1)
	{
		print_err(av, idx);
		return ;
	}
	if (read_file(fd, &str, av, idx) == -1)
	{
		close(fd);
		return ;
	}
	len = ft_strlen(str);
	if (n > len)
		ft_putstr(str);
	else
	{
		while (n > 0)
			ft_putchar(str[len - n--]);
	}
	close(fd);
}

void		write_file(char **av, int idx)
{
	int		fd;
	char	*str;

	if ((fd = open(av[idx], O_RDONLY)) == -1)
	{
		print_err(av, idx);
		return ;
	}
	if (read_file(fd, &str, av, idx) == -1)
	{
		close(fd);
		return ;
	}
	ft_putstr(str);
	close(fd);
}

void		write_files(int ac, char **av)
{
	int		i;
	int		fd;

	i = 1;
	while (i < ac)
	{
		if ((fd = open(av[i], O_RDONLY)) == -1)
		{
			print_err(av, i);
			close(fd);
		}
		else
		{
			if (ac > 2)
				ft_putstrs("==> ", basename(av[i]), " <==\n");
			write_file(av, i);
			if (i != ac - 1)
				ft_putstr("\n");
		}
		i++;
	}
}
