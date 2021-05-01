/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main5.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 10:56:53 by tsomeya           #+#    #+#             */
/*   Updated: 2021/01/27 18:56:23 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>
#include <stdio.h>

void	ft_show_tab(struct s_stock_str *par);
struct s_stock_str *ft_strs_to_tab(int ac, char **av);

int	main(int argc, char **argv)
{
	t_stock_str *t_str;

	t_str = ft_strs_to_tab(argc, argv);
	t_str[2].copy = "abc";
	ft_show_tab(t_str);
	// printf("%s",t_str[2].str);
	// write(1, t_str[2].str,1);
	// printf("%d",t_str[2].size);
	return (0);
}
