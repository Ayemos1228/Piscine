/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 22:25:54 by tsomeya           #+#    #+#             */
/*   Updated: 2021/01/28 21:06:52 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_stock_str.h"

int						ft_strlen(char *str)
{
	int					count;

	count = 0;
	while (1)
	{
		if (str[count] != '\0')
			count++;
		else
			break ;
	}
	return (count);
}

char					*ft_strcpy(char *dest, char *src)
{
	int					i;

	i = 0;
	while (1)
	{
		if (src[i] != '\0')
		{
			*(dest + i) = *(src + i);
			i++;
		}
		else
		{
			*(dest + i) = '\0';
			break ;
		}
	}
	return (dest);
}

char					*ft_strdup(char *src)
{
	char				*str;
	int					len;

	len = ft_strlen(src);
	str = (char *)malloc((len + 1) * sizeof(char *));
	if (str == (void *)0)
		return ((void *)0);
	ft_strcpy(str, src);
	return (str);
}

struct s_stock_str		*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*tab;

	i = 0;
	tab = (struct s_stock_str *)malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (tab == (void *)0)
		return ((void *)0);
	while (i < ac && av[i] != 0)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].str = av[i];
		tab[i].copy = ft_strdup(av[i]);
		i++;
	}
	tab[i].size = 0;
	tab[i].str = 0;
	tab[i].copy = 0;
	return (tab);
}
