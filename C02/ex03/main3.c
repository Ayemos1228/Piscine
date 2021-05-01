/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 11:54:30 by tsomeya           #+#    #+#             */
/*   Updated: 2021/01/19 11:58:18 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	char str1[] = "TAIGA";
	char str2[] = "TAIGA3";
	char str3[] = "";

	printf("Returned value for str1 is: %d\n",
	ft_str_is_numeric(str1));
	printf("Returned value for str2 is: %d\n",
	ft_str_is_numeric(str2));
	printf("Returned value for str3 is: %d\n",
	ft_str_is_numeric(str3));
	return (0);
}
