/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 10:37:07 by tsomeya           #+#    #+#             */
/*   Updated: 2021/02/01 00:33:52 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char		**ft_split(char *str, char *charset);

int			main(int argc, char **argv)
{
	char	**ans;
	int		i;

	i = 0;
	(void)argc;
	ans = ft_split(argv[1], argv[2]);
	while (ans[i] != 0)
	{
		printf("ans[%d] = %s\n", i, ans[i]);
		i++;
	}
	printf("%s",*ans);
	return (0);
}
