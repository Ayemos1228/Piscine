/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main4.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 11:59:09 by tsomeya           #+#    #+#             */
/*   Updated: 2021/01/19 12:00:41 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	char str1[] = "Taiga";
	char str2[] = "taiga";
	char str3[] = "";

	printf("Returned value for str1 is: %d\n",
	ft_str_is_lowercase(str1));
	printf("Returned value for str2 is: %d\n",
	ft_str_is_lowercase(str2));
	printf("Returned value for str3 is: %d\n",
	ft_str_is_lowercase(str3));
	return (0);
}
