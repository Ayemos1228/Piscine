/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main4.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 18:33:45 by tsomeya           #+#    #+#             */
/*   Updated: 2021/01/18 18:34:21 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n);

int		main(void)
{
	ft_is_negative(1);
	ft_is_negative(0);
	ft_is_negative(-1);
}
