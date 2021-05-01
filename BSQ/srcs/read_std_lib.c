/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_std_lib.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 16:42:33 by tsomeya           #+#    #+#             */
/*   Updated: 2021/02/03 16:55:20 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/tool.h"

/*
** Prerequisite: the length of the first line is equal to or more than 4.
** Func.: read the first line of the input and get size and chars.
*/

int			read_first_line_std(char *input, t_ui len, t_ui *size, char *chars)
{
	t_ui	i;
	t_ui	ans;

	i = 0;
	ans = 0;
	chars[0] = input[len - 3];
	chars[1] = input[len - 2];
	chars[2] = input[len - 1];
	if (!is_unique(chars) || !is_allprintable(chars))
		return (-1);
	while (i < len - 3)
	{
		if (input[0] == '+' && i == 0)
			i++;
		if (input[i] < '0' || '9' < input[i])
			return (-1);
		ans *= 10;
		ans += input[i] - '0';
		i++;
	}
	if ((size[0] = ans) == 0)
		return (-1);
	return (0);
}

/*
** Func.:
** 1) read and error-check the first line of the input.
** 2) get size[0] and chars
** it takes "read_first_line_std" as a helper func.
*/

int			check_read_first_line_std(t_ui *size, char *chars)
{
	char	*buf;
	t_ui	ret;

	ret = read_line(0, &buf);
	if (ret <= 3 || ret == (t_ui)-1)
	{
		free(buf);
		return (-1);
	}
	if (ret <= 3)
	{
		free(buf);
		return (-1);
	}
	if (read_first_line_std(buf, ret, size, chars) == -1)
	{
		free(buf);
		return (-1);
	}
	free(buf);
	return (0);
}
