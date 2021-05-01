/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 10:41:44 by tsomeya           #+#    #+#             */
/*   Updated: 2021/01/19 11:51:29 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	char str1[] = "TAIGA";
	char str2[] = "Really??";
	char str3[] = "";

	printf("Returned value for str1 is: %d\n",
	ft_str_is_alpha(str1));
	printf("Returned value for str2 is: %d\n",
	ft_str_is_alpha(str2));
	printf("Returned value for str3 is: %d\n",
	ft_str_is_alpha(str3));
	return (0);
}
