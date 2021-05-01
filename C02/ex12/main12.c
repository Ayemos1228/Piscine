/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main12.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 09:41:56 by tsomeya           #+#    #+#             */
/*   Updated: 2021/02/04 15:07:44 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	*ft_print_memory(void *addr, unsigned int size);

int	main(void)
{
	// char test1[] ="Bonjour les aminches	\n	c  est fou	tout	ce qu on peut faire avec	\n	print_memory\n\n\n	lol.lol\n ";
	char test2[] ="Bonjour les aminches	\n	c  est fou	tout	ce qu on peut faire avec	\n	print_memory\n\n\n	lol.lo";
	// test1[5] = -50;
	ft_print_memory(test2, sizeof(test2));
}
