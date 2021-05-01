/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main8.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 13:19:27 by tsomeya           #+#    #+#             */
/*   lowdated: 2021/01/19 13:19:27 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str);

int 	main(void)
{
	char str1[] = "This is true: 1 + 2 = 3, is it?";
	char str2[] = "TAIGA";
	char str3[] = "";

	ft_strlowcase(str1);
	ft_strlowcase(str2);
	ft_strlowcase(str3);
	printf("str1 is: %s\n", str1);
	printf("str2 is: %s\n", str2);
	printf("str2 is: %s\n", str3);
	return (0);
}
