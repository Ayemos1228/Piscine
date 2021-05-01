/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 10:38:48 by tsomeya           #+#    #+#             */
/*   Updated: 2021/01/30 20:13:36 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_split.h"

int			is_sep(char c, char *charset)
{
	int		i;

	i = 0;
	if (c == '\n')
		return (1);
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int			arr_count(char *str, char *charset)
{
	int		i;
	int		num_arr;

	i = 0;
	num_arr = 0;
	while (str[i] != '\n')
	{
		if (is_sep(str[i], charset) == 0 && is_sep(str[i + 1], charset) == 1)
			num_arr++;
		i++;
	}
	return (num_arr);
}

void		ft_strncpy(char *dest, char *src, int len)
{
	int		i;

	i = 0;
	while (i < len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

void		str_to_tab(char **tab, char *str, char *charset)
{
	int		i;
	int		arr_len;
	int		arr_num;

	i = 0;
	arr_len = 0;
	arr_num = 0;
	while (str[i] != '\n')
	{
		if (is_sep(str[i], charset) != 0)
			i++;
		else
		{
			arr_len = 0;
			while (is_sep(str[i + arr_len], charset) == 0)
				arr_len++;
			tab[arr_num] = (char *)malloc(sizeof(char) * (arr_len + 1));
			ft_strncpy(tab[arr_num], &str[i], arr_len);
			arr_num++;
			i += arr_len;
		}
	}
}

char		**ft_split(char *str, char *charset)
{
	int		i;
	int		arr_num;
	char	**ans;

	i = 0;
	arr_num = arr_count(str, charset);
	ans = (char **)malloc(sizeof(char *) * arr_num + 1);
	ans[arr_num] = 0;
	str_to_tab(ans, str, charset);
	return (ans);
}
