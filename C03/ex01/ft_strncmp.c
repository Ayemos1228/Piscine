/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 11:18:01 by tsomeya           #+#    #+#             */
/*   Updated: 2021/01/20 14:45:04 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int					ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				flag;

	i = 0;
	flag = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] == s2[i])
			i++;
		else if (s1[i] < s2[i])
		{
			flag = -1;
			break ;
		}
		else
		{
			flag = 1;
			break ;
		}
	}
	return (flag);
}
