/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main7.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 10:08:53 by tsomeya           #+#    #+#             */
/*   Updated: 2021/02/04 00:27:01 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void		ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *));

void		ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void		print_tab(char **tab, int len)
{
	int		i;

	i = 0;
	while (i < len)
	{
		ft_putstr(tab[i]);
		write(1, "\n", 1);
		i++;
	}
}

int			ft_inv_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] == s2[i])
			i++;
		else
			break;
	}
	return (s2[i] - s1[i]);
}

int			ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] == s2[i])
			i++;
		else
			break;
	}
	return (s1[i] - s2[i]);
}

int			tab_len(char **tab)
{
	int		i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
}


void		ft_sort_string_tab(char **tab)
{
	int		i;
	int		j;
	int		len;
	char	*tmp_str;

	i = 0;
	j = 0;
	len = tab_len(tab);
	while (i < len)
	{
		j = i + 1;
		while (j < len)
		{
			if (ft_strcmp(tab[i], tab[j]) > 0)
			{
				tmp_str = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp_str;
			}
			j++;
		}
		i++;
	}
}

int	main(int ac, char **av)
{
	char *tab[ac];
	int i = 1;
	while (i < ac)
	{
		tab[i - 1] = av[i];
		i++;
	}
	tab[ac - 1] = 0;
	// printf("size = %lu\n",sizeof(tab) );
	// printf("size = %lu\n",sizeof(*tab));
	printf("size = %lu\n",sizeof(tab) / sizeof(*tab));
	i = 0;
	while (i < ac - 1)
	{
		printf("%d value: %s\n",i, tab[i]);
		i++;
	}
	ft_advanced_sort_string_tab(tab, ft_strcmp);
	// ft_sort_string_tab(tab);
	printf("func. applied\n");
	i = 0;
	while (i < ac - 1)
	{
		printf("%d value: %s\n",i, tab[i]);
		i++;
	}

	return (0);
}
