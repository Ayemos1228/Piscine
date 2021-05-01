/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tool.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 15:56:19 by tsomeya           #+#    #+#             */
/*   Updated: 2021/02/03 22:54:42 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tool.h"

t_ui		**set_int_mat(t_ui *size)
{
	t_ui	**int_mat;
	t_ui	i;

	i = 0;
	int_mat = (t_ui **)malloc(sizeof(t_ui *) * size[0]);
	if (int_mat == NULL)
		exit(1);
	while (i < size[0])
	{
		int_mat[i] = (t_ui *)malloc(sizeof(t_ui) * size[1]);
		if (int_mat[i] == NULL)
		{
			while (1)
			{
				if (i == 0)
					break ;
				free(int_mat[--i]);
			}
			free(int_mat);
			exit(1);
		}
		i++;
	}
	return (int_mat);
}

void		free_int_mat(t_ui **int_mat, t_ui *size)
{
	t_ui	i;

	i = 0;
	while (i < size[0])
	{
		free(int_mat[i]);
		i++;
	}
	free(int_mat);
}

void		ft_putstr(char *str, t_ui len)
{
	t_ui	i;

	i = 0;
	while (i < len)
		write(1, &str[i++], 1);
}

t_ui		ft_min(t_ui a, t_ui b, t_ui c)
{
	t_ui	min;

	min = a;
	if (min > b)
		min = b;
	if (min > c)
		min = c;
	return (min);
}

void		print_tab(char **tab, t_ui *size)
{
	t_ui	i;

	i = 0;
	while (i < size[0])
	{
		ft_putstr(tab[i], size[1]);
		write(1, "\n", 1);
		i++;
	}
}
