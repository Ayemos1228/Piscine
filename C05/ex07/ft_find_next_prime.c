/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 14:50:13 by tsomeya           #+#    #+#             */
/*   Updated: 2021/01/25 19:13:18 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	long i;
	long nb_long;

	nb_long = (long)nb;
	i = 2;
	if (nb_long <= 1)
		return (0);
	while (i * i <= nb_long)
	{
		if (nb_long % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int i;

	i = nb;
	if (nb <= 2)
		return (2);
	else if (nb == 3)
		return (3);
	while (1)
	{
		if (ft_is_prime(i))
			return (i);
		i++;
	}
}
