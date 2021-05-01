/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main6.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 14:43:32 by tsomeya           #+#    #+#             */
/*   Updated: 2021/01/25 13:49:23 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <time.h>

int	ft_is_prime(int nb);

int	main(void)
{
	int i = -1;
	time_t start_time, end_time;
	while (i < 20)
	{
		printf("Returned value for %d is %d\n", i, ft_is_prime(i));
		i++;
	}
	start_time = time(NULL);
	printf("Returned value for 2147483647 is %d\n",ft_is_prime(2147483647));
	end_time = time(NULL);
	printf(
        "time:%ld\n",
        end_time - start_time
    );
	return (0);
}
