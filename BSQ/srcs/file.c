/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atsuchiy <atsuchiy@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 16:57:23 by tsomeya           #+#    #+#             */
/*   Updated: 2021/02/03 18:16:26 by atsuchiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tool.h"

/*
**matrix :: malloc done.
**size[0]-> num_row;  size[1]-> num_col
*/

int			write_matrix(char **matrix, char *path, t_ui *size)
{
	char	buf;
	int		fd;
	t_ui	i;
	t_ui	j;

	if ((fd = open(path, O_RDONLY)) == -1)
		return (-1);
	while (read(fd, &buf, 1) && buf != '\n')
		continue ;
	i = 0;
	while (i < size[0])
	{
		j = 0;
		while (j < size[1])
		{
			read(fd, &buf, 1);
			matrix[i][j++] = buf;
		}
		i++;
		read(fd, &buf, 1);
	}
	close(fd);
	return (0);
}
