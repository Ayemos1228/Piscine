/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 12:11:05 by tsomeya           #+#    #+#             */
/*   Updated: 2021/01/20 17:25:31 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char				*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				dest_i;
	int				src_i;
	unsigned int	written_char;

	dest_i = 0;
	src_i = 0;
	written_char = 0;
	while (dest[dest_i] != '\0')
		dest_i++;
	while (written_char < nb && src[src_i] != '\0')
	{
		*(dest + dest_i) = *(src + src_i);
		dest_i++;
		src_i++;
		written_char++;
	}
	*(dest + dest_i) = '\0';
	return (dest);
}
