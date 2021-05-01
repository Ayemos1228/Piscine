/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 18:37:52 by tsomeya           #+#    #+#             */
/*   Updated: 2021/01/19 17:42:48 by tsomeya          ###   ########.fr       */
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
	write(1,"\n",1);
	ft_putnbr(-1100022);
	write(1,"\n",1);
	ft_putnbr(111000002);
	write(1,"\n",1);
	ft_putnbr(11000000);
	write(1,"\n",1);
	ft_putnbr(-100020000);
	write(1,"\n",1);
	ft_putnbr(0);
	write(1,"\n",1);
	ft_putnbr(1);
	write(1,"\n",1);
	ft_putnbr(-1);
	return(0);
}
