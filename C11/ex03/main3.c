/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 23:48:28 by tsomeya           #+#    #+#             */
/*   Updated: 2021/01/29 23:52:10 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_count_if(char **tab, int length, int (*f)(char *));

int	ft_str_is_numeric(char *str)
{
	int flag;
	int i;

	flag = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (48 <= str[i] && str[i] <= 57)
			i++;
		else
		{
			flag = 0;
			break ;
		}
	}
	return (flag);
}

int	main(void)
{
	char *tab[5];
	tab[0] = "Bonjour";
	tab[1] = "123";
	tab[2] = "Bye!";
	tab[3] = "121";
	tab[4] = "Hello World!";

	int ans = ft_count_if(tab, 5, *ft_str_is_numeric);
	printf("Returned value: %d", ans);
	return (0);
}
