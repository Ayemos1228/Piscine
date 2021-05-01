/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main9.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 13:23:29 by tsomeya           #+#    #+#             */
/*   Updated: 2021/01/21 07:26:50 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str);

int 	main(void)
{
	char str1[] = "one plUs twO is (as you maY kNow it) three.";
	char str2[] = "in frEncH, thRee is \"trois\"";
	char str3[] = "42tOkyo, 42Mots";
	char str4[] = "";
	ft_strcapitalize(str1);
	ft_strcapitalize(str2);
	ft_strcapitalize(str3);
	ft_strcapitalize(str4);
	printf("str1 is: %s\n", str1);
	printf("str2 is: %s\n", str2);
	printf("str2 is: %s\n", str3);
	printf("str2 is: %s\n", str4);
	return (0);
}
