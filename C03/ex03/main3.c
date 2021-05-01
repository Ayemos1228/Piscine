/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 14:22:09 by tsomeya           #+#    #+#             */
/*   Updated: 2021/01/20 17:24:47 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char	buf1[20] = "Bonjour !";
	char	src1[] = "Hello";
	char	src2[] = "Nice";

	//len(src1) < 8 ---> whole part of src1 is written
	ft_strncat(buf1, src1, 8);
	for (unsigned long i = 0; i < sizeof(buf1); i++)
		{
			if(buf1[i] == '\0')
				printf("buf1[%lu]: nul!\n", i);
			else
				printf("buf1[%lu] = %c\n", i, buf1[i]);
		}
	printf("%s\n",buf1);
	// len(src1) > 2 --> only two chars are written.
	printf("\nBuf1 <---- src2\n");
	ft_strncat(buf1, src2, 2);
	for (unsigned long i = 0; i < sizeof(buf1); i++)
		{
			if(buf1[i] == '\0')
				printf("buf1[%lu]: nul!\n", i);
			else
				printf("buf1[%lu] = %c\n", i, buf1[i]);
		}
	return (0);
}
