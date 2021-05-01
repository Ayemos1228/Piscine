/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atsuchiy <atsuchiy@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 14:45:10 by tsomeya           #+#    #+#             */
/*   Updated: 2021/02/03 18:14:58 by atsuchiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tool.h"

void	convert_matrix(char **matrix, char o, t_ui *size, t_ui **int_mat)
{
	t_ui i;
	t_ui j;

	i = 0;
	j = 0;
	while (i < size[0])
	{
		while (j < size[1])
		{
			int_mat[i][j] = matrix[i][j] == o ? 0 : 1;
			j++;
		}
		i++;
		j = 0;
	}
}

void	dp(t_ui **int_mat, t_ui *size)
{
	t_ui	i;
	t_ui	j;

	i = 1;
	while (i < size[0])
	{
		j = 1;
		while (j < size[1])
		{
			if (int_mat[i][j] >= 1)
				int_mat[i][j] = ft_min(int_mat[i][j - 1], int_mat[i - 1][j],
				int_mat[i - 1][j - 1]) + 1;
			j++;
		}
		i++;
	}
}

void	find_max(t_ui **int_mat, t_ui *size, t_ui *max)
{
	t_ui	i;
	t_ui	j;

	i = 0;
	j = 0;
	max[0] = 0;
	max[1] = 0;
	max[2] = int_mat[0][0];
	while (i < size[0])
	{
		while (j < size[1])
		{
			if (max[2] < int_mat[i][j])
			{
				max[0] = i;
				max[1] = j;
				max[2] = int_mat[i][j];
			}
			j++;
		}
		i++;
		j = 0;
	}
}

void	write_ans(char **matrix, t_ui *max, t_ui *size, char f)
{
	t_ui	i;
	t_ui	j;

	i = 0;
	j = 0;
	while (i < size[0])
	{
		while (j < size[1])
		{
			if (max[0] - max[2] + 1 <= i && i <= max[0])
			{
				if (max[1] - max[2] + 1 <= j && j <= max[1])
					matrix[i][j] = f;
			}
			j++;
		}
		i++;
		j = 0;
	}
}

/*
** matrix is already allocated memory.
** chars[0] == empty; chars[1] = obstacle; chars[2] = full;
** size[0] -> num_row; size[1] -> num_col
** (max[0], max[1]) -> the lower right idx of max_square;
** max[2] -> max_square_size
*/

void	bsq(char **matrix, t_ui *size, char *chars)
{
	t_ui	**int_mat;
	t_ui	*max;

	max = (t_ui *)malloc(12);
	if (max == NULL)
		exit(1);
	int_mat = set_int_mat(size);
	convert_matrix(matrix, chars[1], size, int_mat);
	dp(int_mat, size);
	find_max(int_mat, size, max);
	write_ans(matrix, max, size, chars[2]);
	print_tab(matrix, size);
	free(max);
	free_int_mat(int_mat, size);
}
