/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 14:14:01 by tsomeya           #+#    #+#             */
/*   Updated: 2021/01/30 19:51:26 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft_strjoin.h"

char				*str_concat(char *dest, char *src)
{
	int				i;
	int				j;

	i = 0;
	j = ft_strlen(dest);
	while (src[i])
	{
		dest[j + i] = src[i];
		i++;
	}
	dest[j + i] = '\0';
	return (dest);
}

int					strslen(char **strs, int size)
{
	int				i;
	int				ans;

	i = 0;
	ans = 0;
	while (i < size)
	{
		ans += ft_strlen(strs[i]);
		i++;
	}
	return (ans);
}

char				*ft_strjoin(int size, char **strs, char *sep)
{
	char			*str;
	unsigned int	total_size;
	int				i;

	total_size = strslen(strs, size) + (size - 1) * ft_strlen(sep);
	i = 0;
	if (size <= 0)
	{
		str = (char *)malloc(1);
		str[0] = '\0';
		return (str);
	}
	str = (char *)malloc(sizeof(char) * (total_size + 1));
	str[0] = '\0';
	while (i < size)
	{
		str_concat(str, strs[i]);
		if (i != size - 1)
			str_concat(str, sep);
		i++;
	}
	return (str);
}
