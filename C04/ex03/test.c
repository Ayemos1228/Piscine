/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 16:38:45 by tsomeya           #+#    #+#             */
/*   Updated: 2021/01/21 17:37:00 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>


int	main(void)
{
	char str[] = "    --+--12345++aeb123";
	int len_sign = 0;
	int total_idx = 0;
	while ((9 <= str[total_idx] && str[total_idx] <= 13) || str[total_idx] == 32)
		total_idx++;
	while (str[total_idx] == '-' || str[total_idx] == '+')
	{
		total_idx++;
		len_sign++;
	}
	printf("%d\n", total_idx);
	printf("%d", len_sign);
	return (0);

}
