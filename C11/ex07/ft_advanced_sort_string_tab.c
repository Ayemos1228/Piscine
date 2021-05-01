/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 10:07:44 by tsomeya           #+#    #+#             */
/*   Updated: 2021/02/05 00:30:29 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int		i;
	int		j;
	char	*tmp_str;
	int		len;

	i = 0;
	j = 0;
	len = 0;
	while (tab[len])
		len++;
	while (i < len)
	{
		j = i + 1;
		while (j < len)
		{
			if ((*cmp)(tab[i], tab[j]) > 0)
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
