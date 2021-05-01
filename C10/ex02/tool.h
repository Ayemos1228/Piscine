/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tool.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 13:41:13 by tsomeya           #+#    #+#             */
/*   Updated: 2021/02/04 15:17:16 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TOOL_H
# define TOOL_H
# include <unistd.h>
# include <fcntl.h>
# include <sys/errno.h>
# include <string.h>
# include <libgen.h>
# include <stdlib.h>
# include <stdio.h>

int			ft_strlen(char *str);
int			numchar_to_int(char *str, int len);
int			ft_str_is_numeric(char *str);
int			n_powered_a(int n, int a);
void		ft_putstr(char *str);
void		ft_putstrs(char *str1, char *str2, char *str3);
void		ft_writefile(int fd, char *filename, char *funcname);
int			ft_strcmp(char *s1, char *s2);
void		print_err(char **av, int idx);
char		*ft_strdup(char *src);
int			read_file(int fd, char **str, char **av, int idx);
char		*ft_join(char *s1, char *s2);
void		ft_putchar(char c);
char		*ft_append(char *s1, char c);
void		write_lenbytes(int fd, int len, char *filename);
void		last_nbytes(int fd, int len, int n, char *filename);
void		write_last_nbytes(char **av, int n, int idx);
void		read_stdinput(void);
void		write_files(int ac, char **av);
void		read_std_lastn(char **av, int n);
void		read_std(char **av);
int			read_stdin(char **str, char **av);
void		ft_puterr(char *str);
void		ft_puterrs(char *str1, char *str2, char *str3);

#endif
