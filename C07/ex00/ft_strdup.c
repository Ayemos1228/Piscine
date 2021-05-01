/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 10:01:47 by tsomeya           #+#    #+#             */
/*   Updated: 2021/01/27 15:26:15 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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
