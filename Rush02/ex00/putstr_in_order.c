/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putstr_in_order.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 19:28:44 by tsomeya           #+#    #+#             */
/*   Updated: 2021/01/31 17:48:59 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_split.h"
#include "ft_strjoin.h"
#include "putstr_in_order.h"
#include <stdio.h>
#include <unistd.h>

int			tab_size(char **tab)
{
	int		size;
	int		i;

	i = 0;
	size = 0;
	while (tab[i])
		size++;
	return (size);
}

/*
**Input: A pointer to the initial char of a (dictionary) value.
**Output: A str which has a space between words.
*/

char		*putstr_in_order(char *start)
{
	char	**tab;
	char	*ans;
	int		tab_size;

	tab = ft_split(start, " ");
	tab_size = arr_count(start, " ");
	ans = ft_strjoin(tab_size, tab, " ");
	return (ans);
}
