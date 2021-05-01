/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 16:23:38 by tsomeya           #+#    #+#             */
/*   Updated: 2021/01/27 13:56:32 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (1)
	{
		if (str[i] == '\0')
			break ;
		else
		{
			write(1, &str[i], 1);
			i++;
		}
	}
}


