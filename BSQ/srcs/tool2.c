/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tool2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 19:28:47 by tsomeya           #+#    #+#             */
/*   Updated: 2021/02/04 14:47:47 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tool.h"

t_ui		ft_strlen(char *str)
{
	t_ui	count;

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

char		*ft_append(char *s1, char c)
{
	char	*str;
	t_ui	total_size;
	t_ui	i;

	total_size = ft_strlen(s1) + 1;
	str = (char *)malloc(sizeof(char) * (total_size + 1));
	if (str == NULL)
		exit(1);
	i = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	str[i++] = c;
	str[i] = '\0';
	return (str);
}

char		*ft_strcpy(char *dest, char *src)
{
	t_ui	i;

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
	t_ui	len;

	len = ft_strlen(src);
	str = (char *)malloc((len + 1) * sizeof(char *));
	if (str == (void *)0)
		return ((void *)0);
	ft_strcpy(str, src);
	return (str);
}

t_ui		read_line(int fd, char **str)
{
	char	buf;
	char	*tmp;
	t_ui	counter;

	counter = 0;
	if (!(*str = ft_strdup("\0")))
		exit(1);
	while (1)
	{
		if (read(fd, &buf, 1) <= 0)
			return (-1);
		else if (buf == '\n')
			break ;
		else
		{
			tmp = *str;
			if (!(*str = ft_append(*str, buf)))
				exit(1);
			counter++;
			free(tmp);
		}
	}
	return (counter);
}
