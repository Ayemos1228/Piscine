/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main4.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 23:03:21 by tsomeya           #+#    #+#             */
/*   Updated: 2021/01/28 18:55:10 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char		*ft_convert_base(char *nbr, char *base_from, char *base_to);

int	main(void)
{
	char *ans1;
	char *ans2;
	ans1 = ft_convert_base("           \n		-+-+-----++\\'?\"\\\"'\\aeb123",
	"'\\\"?!", "0123456789"); //88926
	// ans1 = ft_convert_base("++--11", "01", "01");
	ans2 = ft_convert_base("+--++2147483647aabedd", "0123456789", "01");
	printf("%s\n", ans1);
	printf("%s", ans2);
	free(ans1);
	free(ans2);
	return (0);
}
