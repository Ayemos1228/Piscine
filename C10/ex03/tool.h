/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tool.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/31 08:40:55 by tsomeya           #+#    #+#             */
/*   Updated: 2021/02/05 02:04:21 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TOOL_H
# define TOOL_H
# include <unistd.h>
# include <sys/errno.h>
# include <stdlib.h>
# include <string.h>
# include <libgen.h>
# include <stdio.h>
# include <fcntl.h>

int			ft_strcmp(char *s1, char *s2);
void		ft_putstr(char *str);
void		ft_putstrs(char *str1, char *str2, char *str3);
char		*ft_strcat(char *dest, char *src);
void		print_err(char **av, int idx);
char		*char2hex(char c);
void		write_7_hex(int offset);
void		ft_puterr(char *str);
void		ft_puterrs(char *str1, char *str2, char *str3);
void		read_files_hex(char **av, int ac);
int			ft_strlen(char *str);
char		*ft_joinerr(char *s1, char *s2);
void		read_file(int fd, char **str, char **av, int idx);
char		*ft_join(char *s1, char *s2);
char		*ft_strdup(char *src);
void		read_files_hex_option(char **av, int ac);
void		ft_putchar(char c);
void		print_all_errs(int errcnt, char **av, int ac, char *errstr);
void		write_hex(char c);
void		write_8_hex(int offset);
char		*ft_append(char *s1, char c);
int			read_stdin(char **str);
int			write_hex_one(char *str);
void		write_stdin(void);
void		read_write_stdin(void);
void		print_space(int size);
void		print_space_option(int size);
void		write_hex_one_option(char *str);
void		read_write_stdin_option(void);
int			ft_strlen(char *str);
char		*ft_strdup(char *src);
char		*ft_strcpy(char *dest, char *src);
void		ft_putchar(char c);
void		write_8_hex(int offset);
int			n_powered_a(int n, int a);
char		*ft_puterr_tonewline(char *str);
void		print_all_errs(int errcnt, char **av, int ac, char *errstr);
void		write_hex_two(char *str, int space);
void		write_hex_two_option(char *str, int space);

#endif
