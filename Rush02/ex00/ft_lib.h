/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lib.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 14:32:27 by yfukushi          #+#    #+#             */
/*   Updated: 2021/01/31 21:19:01 by katakaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIB_H
# define FT_LIB_H

typedef struct	s_list
{
	int			nb;
	char		*val;
}				t_list;
char			*ft_getnb(int fd);
char			*ft_getval(int fd, char *c);
t_list			*process(char *file);
void			get_key(int fd, int idx, t_list *tab);
void			get_value(int fd, int idx, t_list *tab);

#endif
