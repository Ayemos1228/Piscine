/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tool.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/31 01:09:32 by tsomeya           #+#    #+#             */
/*   Updated: 2021/02/05 00:05:44 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tool.h"

char		*ft_strcat(char *dest, char *src)
{
	int		dest_i;
	int		src_i;

	dest_i = 0;
	src_i = 0;
	while (dest[dest_i] != '\0')
		dest_i++;
	while (1)
	{
		if (src[src_i] != '\0')
		{
			*(dest + dest_i) = *(src + src_i);
			dest_i++;
			src_i++;
		}
		else
		{
			*(dest + dest_i) = '\0';
			break ;
		}
	}
	return (dest);
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

void		ft_putstr(char *str)
{
	while (*str)
		write(2, str++, 1);
}

void		ft_putstrs(char *str1, char *str2, char *str3)
{
	ft_putstr(str1);
	ft_putstr(str2);
	ft_putstr(str3);
}

int			ft_strlen(char *str)
{
	int		count;

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
