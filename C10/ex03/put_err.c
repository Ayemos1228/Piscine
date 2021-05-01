/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_err.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 15:15:39 by tsomeya           #+#    #+#             */
/*   Updated: 2021/02/04 15:31:49 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tool.h"

void		ft_puterr(char *str)
{
	while (*str)
		write(2, str++, 1);
}

void		ft_puterrs(char *str1, char *str2, char *str3)
{
	ft_puterr(str1);
	ft_puterr(str2);
	ft_puterr(str3);
}
