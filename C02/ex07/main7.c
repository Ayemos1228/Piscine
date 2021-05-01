/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main7.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 12:23:20 by tsomeya           #+#    #+#             */
/*   Updated: 2021/01/19 13:16:21 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str);

int 	main(void)
{
	char str1[] = "This is true: 1 + 2 = 3, is it?";
	char str2[] = "Coucou comment va-tu ?";
	char str3[] = "";

	ft_strupcase(str1);
	ft_strupcase(str2);
	ft_strupcase(str3);
	printf("str1 is: %s\n", str1);
	printf("str2 is: %s\n", str2);
	printf("str2 is: %s\n", str3);
	return (0);
}
