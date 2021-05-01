/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main7.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 14:50:24 by tsomeya           #+#    #+#             */
/*   Updated: 2021/01/25 19:23:22 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <time.h>

int	ft_find_next_prime(int nb);

int	main(void)
{
	int i = -1;
	time_t start_time, end_time;
	while (i < 31)
	{
		printf("%d: next prime is %d\n", i, ft_find_next_prime(i));
		i++;
	}

	start_time = time(NULL);
	printf("2147483644: next prime is %d\n",ft_find_next_prime(2147483644));
	end_time = time(NULL);
	printf(
        "time:%ld\n",
        end_time - start_time);
	return (0);

}
