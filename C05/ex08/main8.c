/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main8.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 14:59:04 by tsomeya           #+#    #+#             */
/*   Updated: 2021/01/25 00:41:12 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_ten_queens_puzzle(void);


int	main(void)
{
	int a;
	a = ft_ten_queens_puzzle();
	printf("%d", a);
	return (0);
}
