/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 18:39:38 by tsomeya           #+#    #+#             */
/*   Updated: 2021/01/25 21:26:36 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int		ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int		ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_i;
	unsigned int	dst_len;
	unsigned int	src_len;

	dst_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	dest_i = 0;
	if (size <= 0)
		return (ft_strlen(src));
	if (size <= dst_len)
		return (size + src_len);
	while (*dest != '\0')
		dest++;
	while (*src != '\0' && dest_i < size - dst_len - 1)
	{
		*dest = *src;
		dest++;
		src++;
		dest_i++;
	}
	*dest = '\0';
	return (dst_len + src_len);
}
//size > buffer側全体の大きさより大きい時、動かない
