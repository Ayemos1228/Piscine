/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhorie <mhorie@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 15:29:08 by tsomeya           #+#    #+#             */
/*   Updated: 2021/01/17 15:46:02 by mhorie           ###   ########.fr       */
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
			if ((w == 1 || w == x) && (h == 1 || h == y))
				ft_putchar('o');
			else if (h == 1 || h == y)
				ft_putchar('-');
			else if (w == 1 || w == x)
				ft_putchar('|');
			else
				ft_putchar(' ');
			w++;
		}
		ft_putchar('\n');
		h++;
		w = 1;
	}
}
