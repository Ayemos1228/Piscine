/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tool2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 15:09:13 by tsomeya           #+#    #+#             */
/*   Updated: 2021/02/04 15:21:01 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tool.h"

void		print_err(char **av, int idx)
{
	ft_puterr(basename(av[0]));
	ft_puterr(": ");
	ft_puterr(basename(av[idx]));
	ft_puterr(": ");
	ft_puterr(strerror(errno));
	ft_puterr("\n");
}

void		ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void		ft_putstrs(char *str1, char *str2, char *str3)
{
	ft_putstr(str1);
	ft_putstr(str2);
	ft_putstr(str3);
}

int			ft_strcmp(char *s1, char *s2)
{
	int		i;
	int		flag;

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

void		ft_putchar(char c)
{
	write(1, &c, 1);
}
