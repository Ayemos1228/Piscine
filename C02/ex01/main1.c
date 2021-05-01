/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 09:03:14 by tsomeya           #+#    #+#             */
/*   Updated: 2021/01/21 12:18:43 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int		main(void)
{
	char dest[] = "Coucou, tu va bien ?";
	char src1[] = "Beh, non.";
	char src2[] = "Oui. Et toi ?";

	for (unsigned int i=0; i < sizeof(dest); i++)
	{
		if (dest[i] == '\0')
			printf("dest[%d] c'est nul !\n",i);
		else
			printf("dest[%d] is: %c\n",i,dest[i]);
	}
	ft_strncpy(dest, src1, 20);
	printf("\nft_strncpy applied(src1 to dest):\n");
	for (unsigned int j=0; j < sizeof(dest); j++)
	{
		if (dest[j] == '\0')
			printf("dest[%d] c'est nul !\n",j);
		else
			printf("dest[%d] is: %c\n",j,dest[j]);
	}
	ft_strncpy(src1, src2, 10);
	printf("\nft_strncpy applied(src2 to stc1):\n");
	for (unsigned int k=0; k < sizeof(src1); k++)
	{
		if (src1[k] == '\0')
			printf("src1[%d] c'est nul !\n",k);
		else
			printf("src1[%d] is: %c\n", k, src1[k]);
	}
}
