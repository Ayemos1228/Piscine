/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operators.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 00:33:18 by tsomeya           #+#    #+#             */
/*   Updated: 2021/01/30 09:43:35 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPERATORS_H
# define OPERATORS_H

enum	e_ops
{
	addition = 0,
	subtraction,
	multiplication,
	division,
	modulo,
};
void	add(int a, int b);
void	sub(int a, int b);
void	div(int a, int b);
void	mul(int a, int b);
void	mod(int a, int b);

#endif
