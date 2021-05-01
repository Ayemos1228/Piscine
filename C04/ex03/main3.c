/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 17:07:52 by tsomeya           #+#    #+#             */
/*   Updated: 2021/01/22 00:59:39 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str);

int	main(void)
{
	char str1[] = "           \n		--+--+---12345++aeb123";
	char str2[] = "--+--+---12345++aeb123";
	char str3[] = "12345++aeb123";
	int a = 0;
	int b = 0;
	int c = 0;

	a = ft_atoi(str1);
	b = ft_atoi(str2);
	c = ft_atoi(str3);
	printf("Expected -12345: %d\n", a);
	printf("Expected -12345: %d\n", b);
	printf("Expected 12345: %d\n", c);
	return(0);
}
