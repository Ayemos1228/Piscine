/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tool.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 13:39:14 by tsomeya           #+#    #+#             */
/*   Updated: 2021/02/04 21:47:24 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tool.h"

int			n_powered_a(int n, int a)
{
	int		i;
	int		tmp;

	tmp = n;
	i = 1;
	while (i < a)
	{
		n *= tmp;
		i++;
	}
	return (n);
}

int			ft_strlen(char *str)
{
	int		count;

	count = 0;
	while (1)
	{
		if (str[count] != '\0')
			count++;
		else
			break ;
	}
	return (count);
}

int			numchar_to_int(char *str, int len)
{
	int		i;
	int		ans;
	int		tmp_int;

	ans = 0;
	i = 0;
	while (i < len)
	{
		tmp_int = str[i] - '0';
		if (i != len - 1)
			ans += tmp_int * n_powered_a(10, len - i - 1);
		else
			ans += tmp_int;
		i++;
	}
	return (ans);
}

int			ft_str_is_numeric(char *str)
{
	int		flag;
	int		i;

	flag = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (48 <= str[i] && str[i] <= 57)
			i++;
		else
		{
			flag = 0;
			break ;
		}
	}
	return (flag);
}

int			read_stdin(char **str, char **av)
{
	char	buf;
	char	*tmp;
	int		error;

	if (!(*str = ft_strdup("\0")))
		return (-1);
	while (1)
	{
		if ((error = read(0, &buf, 1)) == -1)
		{
			ft_puterrs(basename(av[0]), ": ", strerror(errno));
			ft_puterr("\n");
			return (-1);
		}
		else if (error == 0)
			return (0);
		else
		{
			tmp = *str;
			if (!(*str = ft_append(*str, buf)))
				return (-1);
			free(tmp);
		}
	}
	return (0);
}
