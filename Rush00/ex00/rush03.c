/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhorie <mhorie@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 09:44:33 by mhorie            #+#    #+#             */
/*   Updated: 2021/01/17 18:34:31 by mhorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int i;

	i = 0;
	while (i < x * y)
	{
		if (i % x == 0 && (i / x == 0 || i / x == y - 1 ))
			ft_putchar('A');
		else if (i % x == x - 1 && (i / x == 0 || i / x == y - 1 ))
			ft_putchar('C');
		else if (i / x == 0 || i / x == y - 1 || i % x == 0 || i % x == x - 1)
			ft_putchar('B');
		else
			ft_putchar(' ');
		i++;
		if (i % x == 0)
			ft_putchar('\n');
	}
}
