/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 11:41:55 by tsomeya           #+#    #+#             */
/*   Updated: 2021/01/20 14:48:29 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char buf1[30] = "Hello";
	char src[] = "Coucou, tu va bien ?";
	unsigned long j;

	j = 6;
	while (j < sizeof(buf1))
	{
		buf1[j] = 'E';
		j++;
	}
	printf("Before:\n");
	for (unsigned long i = 0; i < sizeof(buf1); i++)
		{
			if(buf1[i] == '\0')
				printf("buf1[%lu]: nul!\n", i);
			else
				printf("buf1[%lu] = %c\n", i, buf1[i]);
		}
	ft_strcat(buf1, src);

	printf("After:\n");
	for (unsigned long i = 0; i < sizeof(buf1); i++)
		{
			if(buf1[i] == '\0')
				printf("buf1[%lu]: nul!\n", i);
			else
				printf("buf1[%lu] = %c\n", i, buf1[i]);
		}
	printf("Result: %s\n",buf1);

	return (0);
}
