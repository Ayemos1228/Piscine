/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryohei <oryohei@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 17:47:01 by oryohei           #+#    #+#             */
/*   Updated: 2021/01/17 23:03:16 by oryohei          ###   ########.fr       */
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
			if ((w == 1 && h == 1) || (w == x && h == y && w != 1 && h != 1))
				ft_putchar('/');
			else if (w == x && h == 1)
				ft_putchar('\\');
			else if (w == 1 && h == y)
				ft_putchar('\\');
			else if (h == 1 || h == y || w == 1 || w == x)
				ft_putchar('*');
			else
				ft_putchar(' ');
			w++;
		}
		ft_putchar('\n');
		h++;
		w = 1;
	}
}
