/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main0.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 08:55:50 by tsomeya           #+#    #+#             */
/*   Updated: 2021/01/24 23:10:38 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int		main(void)
{
	char src[20];
	char dest[50];

	memset(dest, 'E', sizeof(dest));
	memset(src, 'E', sizeof(src));
	printf("Defalt src: %s\n", src);
	printf("Defalt dest: %s\n", dest);
	ft_strcpy(src, "C'est la vie.");
	printf("Copied src: \n");
	for (unsigned int i=0; i < sizeof(src); i++)
	{
		if (src[i] == '\0')
			printf("dest[%d] c'est nul !\n",i);
		else
			printf("dest[%d] is: %c\n",i,src[i]);
	}
	printf("\nCopied dest:\n");
	ft_strcpy(dest, src);
	for (unsigned int j=0; j < sizeof(dest); j++)
	{
		if (dest[j] == '\0')
			printf("dest[%d] c'est nul !\n",j);
		else
			printf("dest[%d] is: %c\n",j,dest[j]);
	}

	return (0);

}
