/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 22:25:54 by tsomeya           #+#    #+#             */
/*   Updated: 2021/01/27 23:30:57 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_stock_str.h"

int						ft_strlen(char *str);

struct s_stock_str		*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*tab;

	i = 0;
	tab = (struct s_stock_str *)malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (tab == (void *)0)
		return ((void *)0);
	while (i < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].str = (char *)malloc(sizeof(char) * (ft_strlen(av[i]) + 1));
		tab[i].str = av[i];
		tab[i].copy = (char *)malloc(sizeof(char) * (ft_strlen(av[i]) + 1));
		tab[i].copy = av[i];
		i++;
	}
	tab[i].size = 0;
	tab[i].str = 0;
	tab[i].copy = 0;
	return (tab);
}
