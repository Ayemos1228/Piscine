/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main10.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 13:56:22 by tsomeya           #+#    #+#             */
/*   Updated: 2021/02/04 15:05:00 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int				main(void)
{
	char 			str1[] = "abcdef";
	char			str2[] = "abcdef";
	char			buf1[10];
	char 			buf2[10];
	// char 			buf1[5];
	// char			buf2[20];
	// char			buf3[1];
	int my = ft_strlcpy(buf1, str1, 15);
	int test = strlcpy(buf2, str2, 15);

	printf("int=%d, buf='%s'\n",my, buf1);
	printf("int=%d, buf='%s'",test, buf2);
	// unsigned int	i;
	// int 			int_buf1;
	// int				int_buf2;
	// int				int_buf3;
	// int				int_buf4;

	// memset(buf1, 'E', sizeof(buf1));
	// memset(buf2, 'E', sizeof(buf2));
	// test = strlcpy(buf1, str1, sizeof(buf1));
	// int_buf1 = ft_strlcpy(buf1, str1, sizeof(buf1));
	// int_buf2 = ft_strlcpy(buf2, str1, sizeof(buf2));
	// int_buf3 = ft_strlcpy(buf2, str1, sizeof(buf3));
	// int_buf4 = ft_strlcpy(buf2, str1, sizeof(buf4));
	// printf("test: returned value is %d\n",test);
	// printf("BUF1: returned value is %d\n",int_buf1);
	// for (i = 0; i < sizeof(buf1); i++)
	// 	{
	// 		if(buf1[i] == '\0')
	// 			printf("buf1[%u]: nul!\n", i);
	// 		else
	// 			printf("buf1[%u] = %c\n", i, buf1[i]);
	// 	}
	// printf("BUF2: returned value is %d\n",int_buf2);
	// for (i = 0; i < sizeof(buf2); i++)
	// 	{
	// 		if(buf2[i] == '\0')
	// 			printf("buf2[%u]: nul!\n", i);
	// 		else
	// 			printf("buf2[%u] = %c\n", i, buf2[i]);
	// 	}
	// printf("BUF3: returned value is %d\n",int_buf3);
	// printf("buf3: (%c)\n",*buf3);
	// printf("BUF4: returned value is %d\n",int_buf4);
	return (0);
}
