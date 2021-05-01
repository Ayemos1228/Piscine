/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atsuchiy <atsuchiy@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 11:32:36 by atsuchiy          #+#    #+#             */
/*   Updated: 2021/02/03 18:17:22 by atsuchiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tool.h"

char		**set_matrix(t_ui *size)
{
	char	**matrix;
	t_ui	i;

	i = 0;
	matrix = (char **)malloc(sizeof(char *) * size[0]);
	if (matrix == NULL)
		exit(1);
	while (i < size[0])
	{
		matrix[i] = (char *)malloc(sizeof(char) * size[1]);
		if (matrix[i] == NULL)
		{
			while (1)
			{
				if (i == 0)
					break ;
				free(matrix[--i]);
			}
			free(matrix);
			exit(1);
		}
		i++;
	}
	return (matrix);
}

void		free_matrix(char **matrix, t_ui *size)
{
	t_ui	i;

	i = 0;
	while (i < size[0])
	{
		free(matrix[i]);
		i++;
	}
	free(matrix);
}

void		file_bsq(char ***matrix, char *path, t_ui *size, char *chars)
{
	if (check_file(path, size, chars) == -1)
	{
		write(2, "map error\n", 10);
		return ;
	}
	*matrix = set_matrix(size);
	if (write_matrix(*matrix, path, size) == -1)
	{
		write(2, "map error\n", 10);
		return ;
	}
	bsq(*matrix, size, chars);
	free_matrix(*matrix, size);
}

int			main(int ac, char **av)
{
	t_ui	size[2];
	char	chars[3];
	char	**matrix;
	int		first;
	int		i;

	i = 1;
	matrix = (char **)0;
	first = 1;
	if (ac == 1)
		read_stdinput(&matrix, size, chars);
	if (ac >= 2)
	{
		while (i < ac)
		{
			if (first != 1)
				write(1, "\n", 1);
			first = 0;
			file_bsq(&matrix, av[i], size, chars);
			i++;
		}
	}
	return (0);
}
