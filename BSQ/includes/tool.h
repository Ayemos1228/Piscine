/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tool.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atsuchiy <atsuchiy@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 15:57:24 by tsomeya           #+#    #+#             */
/*   Updated: 2021/02/03 18:18:35 by atsuchiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TOOL_H
# define TOOL_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

typedef unsigned int	t_ui;

t_ui	**set_int_mat(t_ui	*size);
void	free_int_mat(t_ui	**int_mat, t_ui	*size);
t_ui	ft_strlen(char	*str);
void	ft_putstr(char	*str, t_ui	len);
t_ui	ft_min(t_ui	a, t_ui	b, t_ui	c);
void	print_tab(char	**tab, t_ui	*size);
int		check_file(char	*path, t_ui	*size, char	*chars);
t_ui	simple_atoi(char	*str);
int		is_unique(char	*chars);
int		is_allprintable(char	*s);
int		set_row(char	*buf, t_ui	len, t_ui	*size);
int		check_first_line(int	fd, t_ui	*size, char	*chars);
int		check_lines(int	fd, t_ui	*size, char	*chars);
int		check_read_first_line_std(t_ui	*size, char	*chars);
int		check_file(char	*path, t_ui	*size, char	*chars);
void	bsq(char	**matrix, t_ui	*size, char	*chars);
int		write_matrix(char	**matrix, char	*path, t_ui	*size);
void	read_stdinput(char	***matrix, t_ui	*size, char	*chars);
char	**set_matrix(t_ui	*size);
void	free_matrix(char	**matrix, t_ui	*size);
char	*ft_append(char	*s1, char	c);
t_ui	read_line(int	fd, char	**str);

#endif
