/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main0.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 21:41:13 by tsomeya           #+#    #+#             */
/*   Updated: 2021/01/22 10:11:01 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char a[] =  "abc";
	char b[] =  "abc";
	char c[] =  "abe";
	char d[] =  "abcf";
	char e[] =  "";

	printf("a compared with b: %d\n",ft_strcmp(a,b));
	printf("a compared with c: %d\n",ft_strcmp(a,c));
	printf("a compared with d: %d\n",ft_strcmp(a,d));
	printf("a compared with e: %d\n",ft_strcmp(a,e));
	printf("a compared with b: %d\n",strcmp(a,b));
	printf("a compared with c: %d\n",strcmp(a,c));
	return (0);
}
