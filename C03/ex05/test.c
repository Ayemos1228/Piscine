/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 09:48:48 by tsomeya           #+#    #+#             */
/*   Updated: 2021/01/21 19:20:48 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;

	return (i);
}

int	main(void)
{
	char dest[20] = "HELLO";

	int i = 0;
	while (i < 20)
	{
		if (dest[i] == '\0')
			printf("nul(%d)\n ", i);
		i++;
	}

	// int	dest_i = 0;
	// int dest_lst_idx;

	// while (dest[dest_i] != '\0')
	// 	dest_i++;
	// dest_lst_idx = dest_i;
	printf("dest_lst_idx = %d\n", ft_strlen(dest));
}
