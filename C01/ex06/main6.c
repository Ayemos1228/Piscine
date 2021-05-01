/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main6.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 17:07:24 by tsomeya           #+#    #+#             */
/*   Updated: 2021/01/18 17:12:25 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	int a;
	int b;

	a = ft_strlen("");
	b = ft_strlen("Bonjour !");
	printf("0 is expected: %d\n", a);
	printf("9 is expected: %d", b);
}
