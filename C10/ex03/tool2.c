/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tool2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 23:55:44 by tsomeya           #+#    #+#             */
/*   Updated: 2021/02/05 00:06:56 by tsomeya          ###   ########.fr       */
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

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		write_8_hex(int offset)
{
	char	*numlist;
	char	print_list[8];
	int		i;

	i = 0;
	numlist = "0123456789abcdef";
	while (i < 8)
	{
		print_list[i] = numlist[offset % 16];
		offset /= 16;
		i++;
	}
	i--;
	while (i >= 0)
	{
		write(1, &print_list[i], 1);
		i--;
	}
}

void		print_err(char **av, int idx)
{
	ft_puterr(basename(av[0]));
	ft_puterr(": ");
	ft_puterr(basename(av[idx]));
	ft_puterr(": ");
	ft_puterr(strerror(errno));
	ft_puterr("\n");
}
