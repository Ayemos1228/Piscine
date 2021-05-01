/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main6.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 12:05:08 by tsomeya           #+#    #+#             */
/*   Updated: 2021/01/19 12:13:31 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	char str1[] = "This is true: 1 + 2 = 3, is it?";
	char str2[] = "Coucou\n comment va-tu ?";
	char str3[] = "";

	printf("Returned value for str1 is: %d\n",
	ft_str_is_printable(str1));
	printf("Returned value for str2 is: %d\n",
	ft_str_is_printable(str2));
	printf("Returned value for str3 is: %d\n",
	ft_str_is_printable(str3));
	return (0);
}
