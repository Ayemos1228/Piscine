/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main5.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 12:01:45 by tsomeya           #+#    #+#             */
/*   Updated: 2021/01/19 12:02:54 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	char str1[] = "TAIGa";
	char str2[] = "TAIGA";
	char str3[] = "";

	printf("Returned value for str1 is: %d\n",
	ft_str_is_uppercase(str1));
	printf("Returned value for str2 is: %d\n",
	ft_str_is_uppercase(str2));
	printf("Returned value for str3 is: %d\n",
	ft_str_is_uppercase(str3));
	return (0);
}
