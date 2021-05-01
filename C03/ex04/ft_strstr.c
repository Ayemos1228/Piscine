/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 17:28:40 by tsomeya           #+#    #+#             */
/*   Updated: 2021/01/21 23:52:07 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (ft_strlen(to_find) == 0)
		return (str);
	while (i <= ft_strlen(str) - ft_strlen(to_find))
	{
		while ((j < ft_strlen(to_find)) && (str[i + j] == to_find[j]))
			j++;
		if (j == ft_strlen(to_find))
			return (&str[i]);
		i++;
		j = 0;
	}
	return (0x0);
}
