/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 17:49:19 by tsomeya           #+#    #+#             */
/*   Updated: 2021/04/24 18:26:54 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

void		putnbr_base(int nb, char *base)
{
	int		sign;
	char	c;
	int		base_size;

	base_size = ft_strlen(base);
	sign = 1;
	if (nb < 0)
	{
		sign = -1;
		write(1, "-", 1);
	}
	if (nb < base_size && nb > -base_size)
	{
		c = base[nb * sign];
		write(1, &c, 1);
	}
	else
	{
		c = base[nb % base_size * sign];
		putnbr_base(nb / base_size * sign, base);
		write(1, &c, 1);
	}
}

int			includes_same_char_or_plusminus(char *str)
{
	int		i;
	int		j;
	int		flag;

	i = 0;
	j = 1;
	flag = 0;
	while (str[i] != '\0')
	{
		while (str[j] != '\0')
		{
			if (str[i] == str[j])
			{
				flag = 1;
				break ;
			}
			j++;
		}
		if (str[i] == '+' || str[i] == '-')
			flag = 1;
		i++;
		j = i + 1;
	}
	return (flag);
}

void		ft_putnbr_base(int nbr, char *base)
{
	if (ft_strlen(base) == 0 || ft_strlen(base) == 1 ||
	includes_same_char_or_plusminus(base))
		return ;
	else
		putnbr_base(nbr, base);
}
