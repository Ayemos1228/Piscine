/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 21:55:13 by tsomeya           #+#    #+#             */
/*   Updated: 2021/02/04 15:13:58 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>
#include <libgen.h>
#include <stdio.h>

void		ft_putstrs(char *str1, char *str2, char *str3)
{
	while (*str1)
		write(2, str1++, 1);
	while (*str2)
		write(2, str2++, 1);
	while (*str3)
		write(2, str3++, 1);
}

void		ft_writefile(int fd, char **av, int idx)
{
	char	tmp;

	while (1)
	{
		errno = read(fd, &tmp, 1);
		if (errno == -1)
		{
			ft_putstrs(basename(av[0]), ": ", av[idx]);
			ft_putstrs(": ", strerror(errno), "\n");
			return ;
		}
		else if (errno == 1)
			write(1, &tmp, 1);
		else
			break ;
	}
}

void		write_stdinput(void)
{
	char	tmp;

	while (read(0, &tmp, 1))
		write(1, &tmp, 1);
}

void		write_multi_files(int ac, char **av)
{
	int		i;
	int		fd;

	i = 1;
	while (i < ac)
	{
		if ((fd = open(av[i], O_RDONLY)) == -1)
		{
			ft_putstrs(basename(av[0]), ": ", av[i]);
			ft_putstrs(": ", strerror(errno), "\n");
		}
		else
		{
			ft_writefile(fd, av, i);
			close(fd);
		}
		i++;
	}
}

int			main(int ac, char **av)
{
	int		fd;

	fd = 0;
	if (ac == 1 || av[1][0] == '-')
		write_stdinput();
	else if (ac == 2)
	{
		fd = open(av[1], O_RDONLY);
		if (fd == -1)
		{
			ft_putstrs(basename(av[0]), ": ", av[1]);
			ft_putstrs(": ", strerror(errno), "\n");
		}
		else
		{
			ft_writefile(fd, av, 1);
			close(fd);
		}
	}
	else
		write_multi_files(ac, av);
	return (0);
}
