/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main0.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 13:56:39 by tsomeya           #+#    #+#             */
/*   Updated: 2021/01/29 22:41:44 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void		ft_putchar(char c);
void		ft_swap(int *a, int *b);
void		ft_putstr(char *str);
int			ft_strcmp(char *s1, char *s2);
int			ft_strlen(char *str);

int			main(void)
{
	int		a;
	int		b;
	char	*s1 = "abc";
	char	*s2 = "abc";

	a = 10;
	b = 5;
	printf("a = %d, b = %d\n", a, b);
	ft_swap(&a, &b);
	printf("a = %d, b = %d\n", a, b);
	ft_putstr(s1);
	ft_putchar('\n');
	printf("s1 compared with s2: %d\n", ft_strcmp(s1, s2));
	printf("len(s1) = %d\n", ft_strlen(s1));
	return (0);
}
