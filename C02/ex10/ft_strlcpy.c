/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 13:56:53 by tsomeya           #+#    #+#             */
/*   Updated: 2021/02/04 13:02:09 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int		ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_len;

	src_len = 0;
	i = 0;
	if (size == 0)
	{
		while (src[src_len])
			src_len++;
		return (src_len);
	}
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
		src_len++;
	}
	if (size != 0)
		dest[i] = '\0';
	while (src[src_len])
		src_len++;
	return (src_len);
}
