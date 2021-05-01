/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 00:12:57 by tsomeya           #+#    #+#             */
/*   Updated: 2021/02/04 15:18:59 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tool.h"

void		write_c_option(int ac, char **av, int n)
{
	int		fd;
	int		i;

	if (!av[3])
		read_std_lastn(av, n);
	i = 2;
	while (++i < ac)
	{
		if ((fd = open(av[i], O_RDONLY)) == -1)
			print_err(av, i);
		else
		{
			if (ac > 4 && i == 3)
				ft_putstrs("==> ", basename(av[i]), " <==\n");
			if (ac > 4 && i != 3)
				ft_putstrs("\n==> ", basename(av[i]), " <==\n");
			write_last_nbytes(av, n, i);
		}
	}
}

int			main(int ac, char **av)
{
	if (ac == 1)
		read_std(av);
	else if (ft_strcmp(av[1], "-c") == 0)
	{
		if (av[2] == (void *)0)
		{
			ft_puterr(basename(av[0]));
			ft_puterr(": option requires an argument -- c\n");
			ft_puterrs("usage: ", basename(av[0]), " [-F | -f | -r] [-q] ");
			ft_puterr("[-b # | -c # | -n #] [file ...]\n");
		}
		else if (ft_str_is_numeric(av[2]) == 0)
		{
			ft_puterrs(basename(av[0]), ": illegal offset -- ", av[2]);
			ft_puterr("\n");
		}
		else
			write_c_option(ac, av, numchar_to_int(av[2], ft_strlen(av[2])));
	}
	else
		write_files(ac, av);
	return (0);
}
