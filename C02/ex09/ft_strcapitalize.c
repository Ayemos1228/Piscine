/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 13:23:19 by tsomeya           #+#    #+#             */
/*   Updated: 2021/01/21 09:01:40 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0 && 97 <= str[0] && str[0] <= 122)
		{
			str[0] -= 32;
		}
		else if ((str[i - 1] < 65 || 90 < str[i - 1]) &&
		(str[i - 1] < 97 || 122 < str[i - 1]) &&
		!(48 <= str[i - 1] && str[i - 1] <= 57))
		{
			if (97 <= str[i] && str[i] <= 122)
				str[i] -= 32;
		}
		else
		{
			if (65 <= str[i] & str[i] <= 90)
				str[i] += 32;
		}
		i++;
	}
	return (str);
}
