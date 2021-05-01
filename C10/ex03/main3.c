/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/31 08:17:36 by tsomeya           #+#    #+#             */
/*   Updated: 2021/02/05 00:51:25 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>
#include <libgen.h>
#include "tool.h"

int	main(int ac, char **av)
{
	if (ac == 1 || (ac == 2 && ft_strcmp(av[1], "--") == 0))
		read_write_stdin();
	if (ac >= 2 && av[1][0] == '-')
	{
		if (ft_strcmp(av[1], "-C") == 0 && ac != 2)
			read_files_hex_option(av, ac);
		else if (ft_strcmp(av[1], "-C") == 0 && ac == 2)
			read_write_stdin_option();
		else
			return (0);
	}
	if (ac >= 2 && av[1][0] != '-')
		read_files_hex(av, ac);
	return (0);
}
