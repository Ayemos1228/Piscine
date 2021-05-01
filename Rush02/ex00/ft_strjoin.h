/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 19:31:41 by tsomeya           #+#    #+#             */
/*   Updated: 2021/01/30 19:51:47 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRJOIN_H
# define FT_STRJOIN_H
# include <stdlib.h>
# include "ft_tool_str.h"

char				*str_concat(char *dest, char *src);
int					strslen(char **strs, int size);
char				*ft_strjoin(int size, char **strs, char *sep);

#endif
