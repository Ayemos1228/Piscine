/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main8.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 17:01:14 by tsomeya           #+#    #+#             */
/*   Updated: 2021/01/26 17:03:38 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_print_combn(int n);

int main(int argc, char **argv)
{
	(void)argc;
	ft_print_combn(atoi(argv[1]));
	return (0);
}
