/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_num.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/31 13:03:14 by tsomeya           #+#    #+#             */
/*   Updated: 2021/01/31 23:27:46 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_convert_num.h"
#include "ft_tool2.h"

int					vnum(char *str, char *base)
{
	int		i;
	int		j;

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (base[j] != '\0')
		{
			if (str[i] == base[j])
				break ;
			j++;
		}
		if (base[j] == '\0')
			return (0);
		i++;
	}
	return (1);
}

unsigned int		str2int_base(char *str, int len, int *valid_ipt)
{
	if (str[0] == '0' && str[1] == 'x')
	{
		if (vnum(&str[2], "0123456789abcdefABCDEF") == 0 ||
		nzlen(&str[2]) > 8 || str[2] == '\0')
		{
			*valid_ipt = 0;
			return (0);
		}
		return (str2int_hex(&str[2], len - 2));
	}
	else if (str[0] == '0' && str[1] == 'q')
		return (str2int_q(&str[2], len - 2, "0123", valid_ipt));
	else if (str[0] == '0' && str[1] == 'b')
		return (str2int_b(&str[2], len - 2, "01", valid_ipt));
	else if (str[0] == '0' && ('0' <= str[1] && str[1] <= '9'))
		return (str2int_oct(&str[1], len - 1, "01234567", valid_ipt));
	else
		return (str2int_dec(str, len, "0123456789", valid_ipt));
}
