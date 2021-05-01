/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 19:14:40 by tsomeya           #+#    #+#             */
/*   Updated: 2021/01/18 19:15:10 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int tmp[size];
	int	counter;

	counter = 0;
	while (counter < size)
	{
		tmp[size - counter - 1] = *(tab + counter);
		counter++;
	}
	counter = 0;
	while (counter < size)
	{
		*(tab + counter) = tmp[counter];
		counter++;
	}
}
