/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 09:45:57 by tsomeya           #+#    #+#             */
/*   Updated: 2021/01/30 10:13:48 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int			tab_len(char **tab)
{
	int		i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
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
			break ;
	}
	return (s1[i] - s2[i]);
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
