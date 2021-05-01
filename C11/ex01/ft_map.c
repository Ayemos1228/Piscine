/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 22:03:34 by tsomeya           #+#    #+#             */
/*   Updated: 2021/01/29 22:24:46 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int *ans;

	i = 0;
	ans = (int *)malloc(sizeof(int) * length);
	while (i < length)
	{
		ans[i] = f(tab[i]);
		i++;
	}
	return (ans);
}
