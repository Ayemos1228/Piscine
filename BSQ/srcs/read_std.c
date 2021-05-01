/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_std.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atsuchiy <atsuchiy@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 00:33:10 by tsomeya           #+#    #+#             */
/*   Updated: 2021/02/03 18:16:51 by atsuchiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tool.h"

/*
** func: read buf and get the length of it.
** if an inappropriate char exists, return -1
*/

int			read_second_line(char ***matrix, t_ui *size, char *chars)
{
	char	*buf;
	t_ui	ret;
	t_ui	i;

	if ((ret = read_line(0, &buf)) <= 0)
	{
		free(buf);
		return (-2);
	}
	size[1] = ret;
	i = 0;
	while (--ret != (t_ui)-1)
	{
		if (buf[i] != chars[0] && buf[i] != chars[1])
		{
			free(buf);
			return (-2);
		}
		++i;
	}
	*matrix = set_matrix(size);
	while (++ret < size[1])
		(*matrix)[0][ret] = buf[ret];
	free(buf);
	return (0);
}

int			read_rest(char ***matrix, t_ui *size, char *chs)
{
	char	*buf;
	t_ui	i;
	t_ui	ret;

	i = 0;
	while ((ret = read_line(0, &buf)) == size[1] || !ret)
	{
		if (size[0] == ++i || ret == 0 || ret == (t_ui)-1)
		{
			free(buf);
			return (-1);
		}
		ret = -1;
		while (++ret < size[1] && (buf[ret] == chs[0] || buf[ret] == chs[1]))
			(*matrix)[i][ret] = buf[ret];
		free(buf);
	}
	if (size[0] == i + 1 && ret == (t_ui)-1 && buf[0] == '\0')
	{
		free(buf);
		return (0);
	}
	free(buf);
	return (-1);
}

/*
** func: read all the lines and write matrix.
*/

int			read_lines_std(char ***matrix, t_ui *size, char *chars)
{
	if (read_second_line(matrix, size, chars) == -2)
		return (-2);
	if (read_rest(matrix, size, chars) == -1)
		return (-1);
	return (0);
}

void		read_stdinput(char ***matrix, t_ui *size, char *chars)
{
	int		error;

	if (check_read_first_line_std(size, chars) == -1)
	{
		write(2, "map error\n", 10);
		return ;
	}
	if ((error = read_lines_std(matrix, size, chars)) == -1)
	{
		write(2, "map error\n", 10);
		free_matrix(*matrix, size);
		return ;
	}
	if (error == -2)
	{
		write(2, "map error\n", 10);
		return ;
	}
	bsq(*matrix, size, chars);
	free_matrix(*matrix, size);
}
