/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 09:41:45 by tsomeya           #+#    #+#             */
/*   Updated: 2021/02/04 18:28:18 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void				write_16_hex(char *ptr)
{
	char			*numlist;
	char			print_list[17];
	int				i;
	unsigned long	ptr_int;

	ptr_int = (unsigned long)ptr;
	i = 0;
	numlist = "0123456789abcdef";
	while (i < 16)
	{
		print_list[i] = numlist[ptr_int % 16];
		ptr_int = ptr_int / 16;
		i++;
	}
	i--;
	while (i >= 0)
	{
		write(1, &print_list[i], 1);
		i--;
	}
	write(1, ": ", 2);
}

void				write_hex(char *c)
{
	int				first;
	int				second;
	char			*numlist;
	int				input;

	numlist = "0123456789abcdef";
	input = *c;
	if (input < 0)
		input += 256;
	first = input / 16;
	second = input % 16;
	write(1, &numlist[first], 1);
	write(1, &numlist[second], 1);
}

void				print_space(int size)
{
	int				space;

	space = 0;
	if (size % 2 == 0)
	{
		while (space < (16 - size) * 2 + (16 - size) / 2)
		{
			write(1, " ", 1);
			space++;
		}
	}
	else
	{
		while (space < (16 - size) * 2 + (16 - size) / 2 + 1)
		{
			write(1, " ", 1);
			space++;
		}
	}
}

void				write_printable_stiring(char *str, int size)
{
	int				i;

	i = 0;
	if (size != 16)
		print_space(size);
	while (i < size)
	{
		if (32 <= str[i] && str[i] <= 126)
			write(1, &str[i], 1);
		else
			write(1, ".", 1);
		i++;
	}
	write(1, "\n", 1);
}

void				*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	int				j;
	char			*ptr;
	char			*ptr_tmp;

	i = 0;
	ptr = (char *)addr;
	while (i < size)
	{
		j = 0;
		ptr_tmp = ptr;
		write_16_hex(ptr);
		while (j < 16 && i + j < size)
		{
			write_hex(ptr++);
			if (j % 2 == 1)
				write(1, " ", 1);
			j++;
		}
		write_printable_stiring(ptr_tmp, j);
		if (j != 16)
			break ;
		i += 16;
	}
	return (addr);
}
