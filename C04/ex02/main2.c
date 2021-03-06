/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 20:04:25 by tsomeya           #+#    #+#             */
/*   Updated: 2021/01/20 20:04:47 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);

int		main(void)
{
	ft_putnbr(2147483647);
	write(1,"\n",1);
	ft_putnbr(0);
	write(1,"\n",1);
	ft_putnbr(-2147483647);
	write(1,"\n",1);
	ft_putnbr(-2147483648);
	return(0);
}
