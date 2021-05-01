/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main0.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 10:07:41 by tsomeya           #+#    #+#             */
/*   Updated: 2021/01/25 10:10:25 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char		*ft_strdup(char *src);

int	main(void)
{
	char src[] = "Hello World";
	char *dest;

	dest = ft_strdup(src);
	printf("dest: %s", dest);
	return (0);
}
