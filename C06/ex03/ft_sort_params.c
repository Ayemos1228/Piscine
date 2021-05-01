/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 17:33:03 by tsomeya           #+#    #+#             */
/*   Updated: 2021/02/01 13:40:38 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		print_args(int num_args, char **args)
{
	int		i;
	int		j;

	i = 1;
	j = 0;
	while (i < num_args)
	{
		while (args[i][j] != '\0')
		{
			write(1, &args[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
		j = 0;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] == s2[i])
			i++;
		else
			break;
	}
	return (s1[i] - s2[i]);
}

int			main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*tmp_char;

	i = 1;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
			{
				tmp_char = argv[i];
				argv[i] = argv[j];
				argv[j] = tmp_char;
			}
			j++;
		}
		i++;
	}
	print_args(argc, argv);
	return (0);
}
