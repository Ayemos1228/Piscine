/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 19:35:06 by tsomeya           #+#    #+#             */
/*   Updated: 2021/01/26 12:42:09 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void		putnbr_base(int nb, char *base)
{
	int		sign;
	char	c;
	int		base_size;

	base_size = 0;
	while (base[base_size] != '\0')
		base_size++;
	sign = 1;
	if (nb < 0)
	{
		sign = -1;
		write(1, "-", 1);
	}
	if (nb < base_size && nb > -base_size)
	{
		c = base[nb * sign];
		write(1,&c, 1);
	}
	else
	{
		c = base[nb % base_size * sign];
		putnbr_base(nb / base_size * sign, base);
		write(1, &c, 1);
	}
}

int					includes_same_char_or_plusminus(char *str)
{
	int				i;
	int				j;
	int				flag;

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

void				ft_putnbr_base(int nbr, char *base)
{
	if (sizeof(base) == 1 || sizeof(base) == 2 ||
	includes_same_char_or_plusminus(base))
		return ;
	else
		putnbr_base(nbr, base);
}

int	main(void)
{
	ft_putnbr_base(2147483647, "0123456789");
	printf("\n");
	ft_putnbr_base(-2147483648, "0123456789");
	printf("\n");
	ft_putnbr_base(-2147483647, "0123456789");
	printf("\n");
	ft_putnbr_base(0, "0123456789");
	printf("\n");
	printf("Remember? Expected: rcrdmddd\n");
	ft_putnbr_base(145062, "mrdoc");
	printf("\n");
	printf("Remember? Expected: \\'?\"\\\"'\\\n");
	ft_putnbr_base(88926, "'\\\"?!");
	printf("\n");
	ft_putnbr_base(145062+88926,"gtaio luSnemf");

	return (0);
}
