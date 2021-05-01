/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 14:43:29 by tsomeya           #+#    #+#             */
/*   Updated: 2021/01/25 19:17:37 by tsomeya          ###   ########.fr       */
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
