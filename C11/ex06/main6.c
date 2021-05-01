/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main6.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 09:48:49 by tsomeya           #+#    #+#             */
/*   Updated: 2021/01/30 10:08:19 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_sort_string_tab(char **tab);

void		ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void		print_tab(char **tab, int len)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i < len)
	{
		ft_putstr(tab[i]);
		write(1, "\n", 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	(void)ac;
	ft_sort_string_tab(av);
	print_tab(av, ac);
	return (0);
}
