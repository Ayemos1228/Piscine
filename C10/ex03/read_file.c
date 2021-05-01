/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 22:01:07 by tsomeya           #+#    #+#             */
/*   Updated: 2021/02/05 01:05:09 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tool.h"

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

char		*ft_join(char *s1, char *s2)
{
	char	*str;
	int		total_size;
	int		i;
	int		j;

	total_size = ft_strlen(s1) + ft_strlen(s2);
	str = (char *)malloc(sizeof(char) * (total_size + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		str[i + j] = s2[j];
		j++;
	}
	str[i + j] = '\0';
	return (str);
}

char		*ft_joinerr(char *s1, char *s2)
{
	char	*str;
	int		total_size;
	int		i;
	int		j;

	total_size = ft_strlen(s1) + ft_strlen(s2);
	str = (char *)malloc(sizeof(char) * (total_size + 2));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		str[i + j] = s2[j];
		j++;
	}
	str[i + j] = '\n';
	str[i + j + 1] = '\0';
	return (str);
}

void		read_file(int fd, char **str, char **av, int idx)
{
	char	buf;
	char	*tmp;
	int		ret;

	*str = ft_strdup("\0");
	ret = 0;
	while (1)
	{
		if ((ret = read(fd, &buf, 1)) == -1)
		{
			print_err(av, idx);
			return ;
		}
		else if (ret == 0)
			return ;
		else
		{
			tmp = *str;
			*str = ft_append(*str, buf);
			free(tmp);
		}
	}
	return ;
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
