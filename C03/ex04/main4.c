/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main4.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 17:28:31 by tsomeya           #+#    #+#             */
/*   Updated: 2021/01/21 17:45:08 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char str1[] = "abcdefg";
	char str2[] = "cde";
	char str3[] = "ed";
	char str4[] = "d";
	char str5[] = "e";

	printf("str2 ans = \"%s\", my_ans = \"%s\"\n",
	strstr(str1, str2), ft_strstr(str1, str2));

	printf("str3 ans = \"%s\", my_ans = \"%s\"\n",
	strstr(str1, str3), ft_strstr(str1, str3));

	printf("str4 ans = \"%s\", my_ans = \"%s\"\n",
	strstr(str1, str4), ft_strstr(str1, str4));

	printf("str5 ans = \"%s\", my_ans = \"%s\"\n",
	strstr(str1, str5), ft_strstr(str1, str5));
	return (0);

}
