/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tool_str.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 19:12:21 by tsomeya           #+#    #+#             */
/*   Updated: 2021/01/31 17:53:58 by katakaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_TOOL_STR_H
# define FT_TOOL_STR_H
# include <stdlib.h>

int			ft_strlen(char *str);
char		*ft_strcpy(char *dest, char *src);
char		*ft_strdup(char *src);
void		ft_putstr(char *str);
int			ft_str_is_numeric(char *str);

#endif
