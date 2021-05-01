/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 14:58:49 by tsomeya           #+#    #+#             */
/*   Updated: 2021/01/25 16:44:47 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int			same_num_in_row(char *str)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i < 10)
	{
		j = i + 1;
		while (j < 10)
		{
			if (str[i] == str[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int			is_valid(char *str, int col)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i <= col)
	{
		j = i + 1;
		while (j <= col)
		{
			if (str[j] - str[i] == j - i || str[j] - str[i] == i - j)
				return (0);
			else
				j++;
		}
		i++;
	}
	return (1);
}

void		print_valid_output(char *str, int *pattern)
{
	int		i;

	i = 0;
	if (!same_num_in_row(str) && is_valid(str, 9))
	{
		while (i < 10)
		{
			write(1, &str[i], 1);
			i++;
		}
		*pattern += 1;
		write(1, "\n", 1);
	}
	else
		return ;
}

void		helper(char *str, int col, int *pattern)
{
	char	c;

	c = '0';
	if (col == 9)
	{
		print_valid_output(str, pattern);
		return ;
	}
	else
	{
		col++;
		while (c <= '9')
		{
			if (c != str[col - 1] && c != str[col - 1] + 1 &&
			c != str[col - 1] - 1)
			{
				str[col] = c;
				if (is_valid(str, col))
					helper(str, col, pattern);
			}
			c++;
		}
	}
}

int			ft_ten_queens_puzzle(void)
{
	int		c;
	int		pattern;
	char	str[10];

	pattern = 0;
	c = '0';
	while (c <= '9')
	{
		str[0] = c;
		helper(str, 0, &pattern);
		c++;
	}
	return (pattern);
}
