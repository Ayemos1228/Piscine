/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main5.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 15:02:03 by tsomeya           #+#    #+#             */
/*   Updated: 2021/01/26 21:40:05 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_atoi_base(char *str, char *base);

int	main(void)
{
	char str1[] = "           \n		--+--+---rcrdmddd++aeb123";
	char str2[] = "--+--+---\\'?\"\\\"'\\++aeb123";
	char str3[] = "12345++aeb123";
	int a = 0;
	int b = 0;
	int c = 0;

	a = ft_atoi_base(str1,"mrdoc");
	b = ft_atoi_base(str2, "'\\\"?!"); //
	c = ft_atoi_base(str3, "0123456789");
	printf("Expected -145062: %d\n", a);
	printf("Expected -88926: %d\n", b);
	printf("Expected 12345: %d\n", c);
	return(0);
}
