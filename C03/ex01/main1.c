/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 11:17:50 by tsomeya           #+#    #+#             */
/*   Updated: 2021/01/20 11:34:55 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char a[] =  "abc";
	char b[] =  "abc";
	char c[] =  "abd";
	char d[] =  "abca";
	char e[] =  "";

	printf("a compared with b: expected=%d, mine=%d\n",strncmp(a,b,3),ft_strncmp(a,b,3));
	printf("a compared with c: expected=%d, mine=%d\n",strncmp(a,c,3),ft_strncmp(a,c,3));
	printf("a compared with d: expected=%d, mine=%d\n",strncmp(a,d,3),ft_strncmp(a,d,3));
	printf("a compared with e: expected=%d, mine=%d\n",strncmp(a,e,3),ft_strncmp(a,e,3));
	printf("a compared with d: expected=%d, mine=%d\n",strncmp(a,d,0),ft_strncmp(a,d,0));
	return (0);
}
