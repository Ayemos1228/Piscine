/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main4.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 17:49:20 by tsomeya           #+#    #+#             */
/*   Updated: 2021/01/26 20:29:43 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putnbr_base(int nbr, char *base);

int	main(void)
{
	ft_putnbr_base(2147483647, "0123456789");
	printf("\n");
	ft_putnbr_base(-2147483648, "");
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
