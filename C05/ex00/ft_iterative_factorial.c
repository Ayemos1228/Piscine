/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 13:34:01 by tsomeya           #+#    #+#             */
/*   Updated: 2021/01/22 13:44:52 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int tmp;

	tmp = nb - 1;
	if (nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	while (tmp > 1)
	{
		nb = nb * tmp;
		tmp--;
	}
	return (nb);
}
