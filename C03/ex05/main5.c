/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main5.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 07:33:16 by tsomeya           #+#    #+#             */
/*   Updated: 2021/01/25 17:25:18 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char	buf1[30] = "Bonjour !";
	char	buf2[30] = "Bonjour !";
	char	src1[] = "Hello! Good bye!";
	char	src2[] = "Hello! Good bye!";

	int a = strlcat(buf1, src1, 9);
	unsigned int b = ft_strlcat(buf2, src2, 9);

	printf("Result for predefined func.:\n");
	printf("Buf1 :%s\n",buf1);
	printf("Returned int: %d\ns", a);

	printf("Result for my func.:\n");
	printf("Buf1 :%s\n",buf2);
	printf("Returned int: %u\n", b);

	printf("Testres: \n");
	for (unsigned long i = 0; i < sizeof(buf1); i++)
	{
		if(buf1[i] == '\0')
			printf("buf1[%lu]: nul!\n", i);
		else
			printf("buf1[%lu] = %c\n", i, buf1[i]);
	}

	printf("Myres: \n");
	for (unsigned long i = 0; i < sizeof(buf2); i++)
	{
		if(buf2[i] == '\0')
			printf("buf1[%lu]: nul!\n", i);
		else
			printf("buf1[%lu] = %c\n", i, buf2[i]);
	}
}
