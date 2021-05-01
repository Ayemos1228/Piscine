/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_file.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atsuchiy <atsuchiy@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 23:17:29 by atsuchiy          #+#    #+#             */
/*   Updated: 2021/02/03 18:15:47 by atsuchiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tool.h"

/*
**    1 : number, 2 : empty, 3 : obstacle, 4 : full, 5 : \n
*/

int			check_first_line(int fd, t_ui *size, char *chars)
{
	t_ui	len;
	char	*buf;

	buf = "a";
	if ((read_line(fd, &buf)) <= 0 || (len = ft_strlen(buf)) < 4)
	{
		free(buf);
		return (-1);
	}
	chars[2] = buf[--len];
	chars[1] = buf[--len];
	chars[0] = buf[--len];
	if (!is_unique(chars) || !is_allprintable(chars))
	{
		free(buf);
		return (-1);
	}
	if (set_row(buf, len, size) != 0)
	{
		free(buf);
		return (-1);
	}
	free(buf);
	return (0);
}

int			check_second_line(int fd, t_ui *size, char *chars, char *buf)
{
	t_ui	col;

	col = 0;
	while (read(fd, buf, 1) != 0)
	{
		if (*buf == '\n')
			break ;
		else if (*buf == chars[0] || *buf == chars[1])
			col++;
		else
			return (-1);
	}
	if ((size[1] = col) == 0)
		return (-1);
	return (0);
}

int			check_all_lines(int fd, t_ui *size, char *chars, char *buf)
{
	t_ui	col;
	t_ui	row;

	col = 0;
	row = 0;
	while (read(fd, buf, 1) != 0)
	{
		if (*buf == '\n')
		{
			if (col == size[1])
			{
				col = 0;
				row++;
			}
			else
				return (-1);
		}
		else if (*buf == chars[0] || *buf == chars[1])
			col++;
		else
			return (-1);
	}
	if (row != size[0] - 1)
		return (-1);
	return (0);
}

int			check_lines(int fd, t_ui *size, char *chars)
{
	char	buf;

	if (check_second_line(fd, size, chars, &buf) == -1)
		return (-1);
	if (check_all_lines(fd, size, chars, &buf) == -1)
		return (-1);
	return (0);
}

int			check_file(char *path, t_ui *size, char *chars)
{
	int		fd;

	fd = open(path, O_RDONLY);
	if (fd != -1)
	{
		if (check_first_line(fd, size, chars) == 0)
		{
			if (check_lines(fd, size, chars) == 0)
			{
				close(fd);
				return (0);
			}
		}
		close(fd);
		return (-1);
	}
	else
		return (-1);
}
