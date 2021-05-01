/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tool_str.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 14:55:16 by yfukushi          #+#    #+#             */
/*   Updated: 2021/01/31 17:51:05 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tool_str.h"
#include <stdlib.h>
#include <unistd.h>

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

char		*ft_strcpy(char *dest, char *src)
{
	int		i;

	i = 0;
	while (1)
	{
		if (src[i] != '\0')
		{
			*(dest + i) = *(src + i);
			i++;
		}
		else
		{
			*(dest + i) = '\0';
			break ;
		}
	}
	return (dest);
}

char		*ft_strdup(char *src)
{
	char	*str;
	int		len;

	len = ft_strlen(src);
	str = (char *)malloc((len + 1) * sizeof(char *));
	if (str == (void *)0)
		return ((void *)0);
	ft_strcpy(str, src);
	return (str);
}

void		ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int			ft_str_is_numeric(char *str)
{
	int		flag;
	int		i;

	flag = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (48 <= str[i] && str[i] <= 57)
			i++;
		else
		{
			flag = 0;
			break ;
		}
	}
	return (flag);
}
