/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 14:08:43 by tsomeya           #+#    #+#             */
/*   Updated: 2021/01/24 23:11:50 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int	search;

	search = 1;
	if (nb <= 0)
		return (0);
	else if (nb == 1)
		return (1);
	while (search < nb)
	{
		if (search * search == nb)
			return (search);
		else if (search * search > nb)
			return (0);
		search++;
	}
	return (0);
}
