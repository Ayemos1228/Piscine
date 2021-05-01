/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 22:01:07 by tsomeya           #+#    #+#             */
/*   Updated: 2021/02/04 15:23:20 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tool.h"

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

char		*ft_append(char *s1, char c)
{
	char	*str;
	int		total_size;
	int		i;

	total_size = ft_strlen(s1) + 1;
	str = (char *)malloc(sizeof(char) * (total_size + 1));
	if (str == NULL)
		return (NULL);
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

int			read_file(int fd, char **str, char **av, int idx)
{
	char	buf;
	char	*tmp;
	int		error;

	error = 0;
	if (!(*str = ft_strdup("\0")))
		return (-1);
	while (1)
	{
		if ((error = read(fd, &buf, 1)) == -1)
		{
			print_err(av, idx);
			return (-1);
		}
		else if (error == 0)
			return (0);
		else
		{
			tmp = *str;
			if (!(*str = ft_append(*str, buf)))
				return (-1);
			free(tmp);
		}
	}
	return (0);
}

char		*str_concat(char *dest, char *src)
{
	int		i;
	int		j;

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
