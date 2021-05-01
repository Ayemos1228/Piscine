/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 11:41:43 by tsomeya           #+#    #+#             */
/*   Updated: 2021/01/21 07:42:53 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	dest_i;
	int src_i;

	dest_i = 0;
	src_i = 0;
	while (dest[dest_i] != '\0')
		dest_i++;
	while (1)
	{
		if (src[src_i] != '\0')
		{
			*(dest + dest_i) = *(src + src_i);
			dest_i++;
			src_i++;
		}
		else
		{
			*(dest + dest_i) = '\0';
			break ;
		}
	}
	return (dest);
}
