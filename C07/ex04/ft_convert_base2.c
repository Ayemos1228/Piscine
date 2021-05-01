/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 21:57:01 by tsomeya           #+#    #+#             */
/*   Updated: 2021/01/28 18:56:25 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int			ft_atoi_base(char *str, char *base);
int			invalid_b(char *str);

void		rev_str(char *str, int size)
{
	char	tmp[size];
	int		counter;

	counter = 0;
	while (counter < size)
	{
		tmp[size - counter - 1] = *(str + counter);
		counter++;
	}
	counter = 0;
	while (counter < size)
	{
		*(str + counter) = tmp[counter];
		counter++;
	}
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

int			base_order_count(int nb, int b_size)
{
	int		order;

	order = 1;
	while (1)
	{
		if (nb >= b_size)
		{
			nb /= b_size;
			order++;
		}
		else
			break ;
	}
	return (order);
}

void		convertnbr_base(char *str, int nb, char *base, int deja)
{
	int		b_size;
	char	c;

	b_size = 0;
	while (base[b_size] != '\0')
		b_size++;
	if (nb < b_size)
	{
		c = base[nb];
		str[deja] = c;
		str[deja + 1] = '\0';
	}
	else
	{
		c = base[nb % b_size];
		convertnbr_base(str, nb / b_size, base, deja + 1);
		str[deja] = c;
	}
}

char		*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*ans;
	int		base_to_len;
	int		order;

	base_to_len = ft_strlen(base_to);
	if (ft_strlen(base_from) == 0 || ft_strlen(base_from) == 1 ||
	ft_strlen(base_to) == 0 || ft_strlen(base_to) == 1 ||
	invalid_b(base_to) || invalid_b(base_from))
		return ((void *)0);
	if (ft_atoi_base(nbr, base_from) < 0)
	{
		order = base_order_count(-ft_atoi_base(nbr, base_from), base_to_len);
		ans = (char *)malloc(sizeof(char) * (order + 2));
		ans[0] = '-';
		convertnbr_base(ans, -ft_atoi_base(nbr, base_from), base_to, 1);
		rev_str(&ans[1], order);
	}
	else
	{
		order = base_order_count(ft_atoi_base(nbr, base_from), base_to_len);
		ans = (char *)malloc(sizeof(char) * (order + 1));
		convertnbr_base(ans, ft_atoi_base(nbr, base_from), base_to, 0);
		rev_str(ans, order);
	}
	return (&ans[0]);
}
