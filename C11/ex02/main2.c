/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 22:31:46 by tsomeya           #+#    #+#             */
/*   Updated: 2021/01/29 23:47:45 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_any(char **tab, int (*f)(char *));

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
	tab[1] = "apple";
	tab[2] = "Bye!";
	tab[3] = "121";
	tab[4] = (void *)0;

	int ans = ft_any(tab, *ft_str_is_numeric);
	printf("Returned value: %d", ans);
	return (0);
}
