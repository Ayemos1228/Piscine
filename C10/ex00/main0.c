/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main0.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 19:36:47 by tsomeya           #+#    #+#             */
/*   Updated: 2021/02/05 04:53:40 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void		ft_writefile(int fd)
{
	char	tmp;
	int		errno;

	while (1)
	{
		errno = read(fd, &tmp, 1);
		if (errno == -1)
		{
			write(2, "Cannot read file.\n", 18);
			return ;
		}
		else if (errno == 1)
			write(1, &tmp, 1);
		else
			break ;
	}
}

int			main(int argc, char **argv)
{
	int		fd;

	if (argc == 1)
		write(2, "File name missing.\n", 19);
	else if (argc > 2)
		write(2, "Too many arguments.\n", 20);
	else
	{
		fd = open(argv[1], O_RDONLY);
		if (fd == -1)
		{
			write(2, "Cannot read file.\n", 18);
			return (1);
		}
		ft_writefile(fd);
		close(fd);
	}
	return (0);
}
