/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_num.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/31 13:03:36 by tsomeya           #+#    #+#             */
/*   Updated: 2021/01/31 23:26:44 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CONVERT_NUM_H
# define FT_CONVERT_NUM_H

unsigned int		str2int_base(char *str, int len, int *valid_ipt);
unsigned int		str2int_dec(char *str, int len, char *base, int *valid_ipt);
unsigned int		str2int_hex(char *str, int len);
unsigned int		str2int_b(char *str, int len, char *base, int *valid_ipt);
unsigned int		str2int_q(char *str, int len, char *base, int *valid_ipt);
unsigned int		str2int_oct(char *str, int len, char *base, int *valid_ipt);
int					vnum(char *str, char *base);
#endif
