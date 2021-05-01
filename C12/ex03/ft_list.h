/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 14:06:23 by tsomeya           #+#    #+#             */
/*   Updated: 2021/01/30 16:37:26 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H
# include <stdlib.h>

typedef struct			s_list
{
	struct s_list		*next;
	void				*data;
}						t_list;
t_list					*ft_create_elem(void *data);
void					ft_list_push_front(t_list **begin_list, void *data);
int						ft_list_size(t_list *begin_list);
t_list					*ft_list_last(t_list *begin_list);

#endif
