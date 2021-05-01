/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main5.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 14:08:45 by tsomeya           #+#    #+#             */
/*   Updated: 2021/01/25 01:03:28 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	ft_sqrt(int nb);

int main(void)
{
	int i = -1;

	while (i < 26)
	{
		printf("Returned value for %d is %d\n",i, ft_sqrt(i));
		i++;
	}
	printf("%d\n", ft_sqrt(45000*45000));
}
