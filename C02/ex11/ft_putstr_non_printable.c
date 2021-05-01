/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 17:52:42 by tsomeya           #+#    #+#             */
/*   Updated: 2021/02/02 16:36:01 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		write_hex(char c)
{
	int		char_int;
	int		first;
	int		second;
	char	*numlist;

	numlist = "0123456789abcdef";
	char_int = c;
	if (c < 0)
		char_int += 256;
	first = char_int / 16;
	second = char_int % 16;
	write(1, &numlist[first], 1);
	write(1, &numlist[second], 1);
}

void		ft_putstr_non_printable(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 31 || str[i] == 127)
		{
			write(1, "\\", 1);
			write_hex(str[i]);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}
