/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 18:46:25 by tsomeya           #+#    #+#             */
/*   Updated: 2021/01/17 22:15:07 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int w;
	int h;

	w = 1;
	h = 1;
	while (h <= y)
	{
		while (w <= x)
		{
			if ((w == 1 && h == 1) || (h == y && w == x && w != 1 && h != 1))
				ft_putchar('A');
			else if ((h == 1 && w == x) || (h == y && w == 1))
				ft_putchar('C');
			else if (w == 1 || w == x || h == 1 || h == y)
				ft_putchar('B');
			else
				ft_putchar(' ');
			w++;
		}
		ft_putchar('\n');
		h++;
		w = 1;
	}
}
