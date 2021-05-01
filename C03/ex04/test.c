/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 10:33:19 by tsomeya           #+#    #+#             */
/*   Updated: 2021/01/21 10:54:37 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char	*ft_strstr(char *str, char *to_find)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	if (sizeof(to_find) - 1 == 0)
		return str;
	while (i <= sizeof(str) - sizeof(to_find))
	{
		while ((j < sizeof(to_find)) && (str[i + j] == to_find[j]))
			j++;
		if (j == sizeof(to_find) - 2)
			return (&str[i]);
		i++;
		j = 0;
	}
	return 0x0;
}

int	main(void)
{
	char str[] = "abcdef";
	char to_find[] ="d";
	// char *p;
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;

	while (i <= sizeof(str) - sizeof(to_find))
	{
		while ((j < sizeof(to_find)) && (str[i + j] == to_find[j]))
			j++;
		if (j == sizeof(to_find) - 1)
			printf("found");
		i++;
		j = 0;
	}

	// p = ft_strstr(str, to_find);
	// printf("%s\n",p);
	// printf("%p\n", p);
	// printf("%lu", sizeof(str));
	return (0);
}
