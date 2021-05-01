/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 15:12:45 by tsomeya           #+#    #+#             */
/*   Updated: 2021/01/25 15:18:00 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (1)
	{
		if (str[i] == '\0')
			break ;
		else
		{
			write(1, &str[i], 1);
			i++;
		}
	}
}

int		ft_strlen(char *str)
{
	int	count;

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

int		ft_strcmp(char *s1, char *s2)
{
	int	i;
	int flag;

	i = 0;
	flag = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] == s2[i])
			i++;
		else if (s1[i] < s2[i])
		{
			flag = -1;
			break ;
		}
		else
		{
			flag = 1;
			break ;
		}
	}
	return (flag);
}
