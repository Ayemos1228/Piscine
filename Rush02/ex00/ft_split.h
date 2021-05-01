/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 19:29:40 by tsomeya           #+#    #+#             */
/*   Updated: 2021/01/30 19:31:15 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SPLIT_H
# define FT_SPLIT_H

int			is_sep(char c, char *charset);
int			arr_count(char *str, char *charset);
void		ft_strncpy(char *dest, char *src, int len);
void		str_to_tab(char **tab, char *str, char *charset);
char		**ft_split(char *str, char *charset);

#endif
