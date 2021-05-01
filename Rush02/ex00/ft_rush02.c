/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush02.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 14:49:29 by yfukushi          #+#    #+#             */
/*   Updated: 2021/01/31 23:02:10 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"
#include "atoi.h"
#include "ft_tool_str.h"
#include "putstr_in_order.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

char	*ft_getval(int fd, char *c)
{
	int		i;
	char	*str;
	char	*ans;

	if (!(str = malloc(sizeof(char) * 999)))
		exit(1);
	i = 0;
	while (1)
	{
		if (c[0] == '\n')
		{
			str[i] = c[0];
			break ;
		}
		str[i] = c[0];
		read(fd, c, 1);
		i++;
	}
	ans = putstr_in_order(str);
	free(str);
	return (ans);
}

char	*ft_getnb(int fd)
{
	int		i;
	char	c[1];
	char	*str;

	if (!(str = malloc(sizeof(char) * 999)))
	{
		write(1, "Dict Error\n", 11);
		exit(1);
	}
	i = 0;
	read(fd, c, 1);
	while (c[0] == '\n')
		read(fd, c, 1);
	while (c[0] >= '0' && c[0] <= '9')
	{
		str[i] = c[0];
		read(fd, c, 1);
		i++;
	}
	return (str);
}

void	process_helper(int fd, int i, t_list *tab)
{
	char *tmp;
	char c[1];

	tab[i].nb = ft_atoi(ft_getnb(fd));
	read(fd, c, 1);
	while (c[0] == ' ')
		read(fd, c, 1);
	if (c[0] == ':')
		read(fd, c, 1);
	while (c[0] == ' ')
		read(fd, c, 1);
	tmp = ft_getval(fd, c);
	tab[i].val = ft_strdup(tmp);
	free(tmp);
	i++;
}

t_list	*process(char *file)
{
	int		i;
	int		fd;
	t_list	*tab;

	fd = open(file, O_RDONLY);
	if (fd == -1 || !(tab = malloc(sizeof(t_list) * 100)))
	{
		write(1, "Error\n", 6);
		exit(1);
	}
	i = 0;
	while (i < 100)
	{
		process_helper(fd, i, tab);
		i++;
	}
	close(fd);
	return (tab);
}
