/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 23:48:26 by tsomeya           #+#    #+#             */
/*   Updated: 2021/01/30 10:15:37 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int (*f)(char *))
{
	int i;

	i = 0;
	while (tab[i])
	{
		if (f(tab[i]) != 0)
			return (1);
		i++;
	}
	return (0);
}

int	ft_count_if(char **tab, int length, int (*f)(char *))
{
	int i;
	int counter;

	i = 0;
	counter = 0;
	while (i < length)
	{
		if (f(tab[i]) != 0)
			counter++;
		i++;
	}
	return (counter);
}
