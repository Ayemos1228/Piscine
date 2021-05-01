/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 14:18:21 by tsomeya           #+#    #+#             */
/*   Updated: 2021/01/28 21:08:20 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "ft_stock_str.h"

struct s_stock_str *ft_strs_to_tab(int ac, char **av);
void	ft_show_tab(struct s_stock_str *par);

int	main(int argc, char **argv)
{
	t_stock_str *tab;
	tab = ft_strs_to_tab(argc, argv);
	// while (tab[i].str != 0)
	// {
	// 	printf("tab[%d].size = %d\n", i, tab[i].size);
	// 	printf("tab[%d].str = %s\n", i, tab[i].str);
	// 	printf("tab[%d].copy = %s\n", i, tab[i].copy);
	// 	i++;
	// }
	// printf("tab[%d].size = %d\n", i, tab[i].size);
	// printf("tab[%d].str = %s\n", i, tab[i].str);
	// printf("tab[%d].copy = %s\n", i, tab[i].copy);
	tab[1].copy = "grape";
	ft_show_tab(tab);
	// printf("%d, %s, %s\n", tab[0].size, tab[0].str, tab[0].copy);
	// printf("%d, %p, %p\n", tab[1].size, tab[1].str, tab[1].copy);
	// printf("%d, %s, %s\n", tab[2].size, tab[2].str, tab[2].copy);
	free(tab);
	return (0);

}
