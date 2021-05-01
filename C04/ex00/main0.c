/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main0.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 18:57:53 by tsomeya           #+#    #+#             */
/*   Updated: 2021/01/20 19:00:45 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	char str[] = "abcde";
	int a;
	int b;

	a = strlen(str);
	b = ft_strlen(str);

	printf("Predefined function: %d", a);
	printf("\nMy function: %d",b);
	return(0);
}
