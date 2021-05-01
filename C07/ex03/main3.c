/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 14:14:02 by tsomeya           #+#    #+#             */
/*   Updated: 2021/01/29 20:11:58 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int					strs_count(char **strs)
{
	int i;

	i = 0;
	while (*strs++ != (void * )0)
		i++;
	return (i);
}

int	main(void)
{
	// char *str;
	char *strs[4];
	// char *str2;
	strs[0] = "42TOKYO";
	strs[1] = "Bonjour";
	strs[2] = "";
	strs[3] = "raeraeotjaeitjaeoitjaeiotjaeiotjaeiotajtoiatoiaejtoiatioaejtoiaejtoiaetjoiajtoiatoaetoiaeoitaoitjaoitaoitoitjoaetoaejtoiajtoiatoajoajtoatoijtoatoatoiaejoittoeoiajoitoiaetjoajtoiaejtoiajtoaetoaetoiaetoaetjoiaetoiaejtoiaejtoiajotijaeoitjaoietjoiaejoijoioijoijoijiojoijoijoioijoijraeprkaetkaepotkaetoakt@aek@aky@kyp@ka@pake@pyka@pky@aepyaaeraeraerreeeeataetae@@@@:::::@ee";

	// str = ft_strjoin(ac, av, "\n");
	// printf("%s\n", str);

	// free(str);


	int		a = strs_count(strs);
	printf("%d", a);
	// free(str2); // NO error
	// char str1[4] = "don";
	// str = (char *)malloc(sizeof(char) * 5);
	// str[0] = '\0';
	// str_concat(str, str1);
	// str_concat(str, str1);
	// printf("%s", str);

	return (0);
}
