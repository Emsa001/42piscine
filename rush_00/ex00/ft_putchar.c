/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escura <escura@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 12:30:57 by escura            #+#    #+#             */
/*   Updated: 2023/09/26 11:07:17 by escura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{

	/*
		We need to pass the address of c so write can access memory.
		By passing &c to write, you are telling write to write the contents of the memory location where c is stored

		1 - it's standart output, basically console
		&c - memory address of c
		1 - number of bytes
	*/
	write(1, &c, 1);
}

void	ft_print(int len, char start, char mid, char end)
{
	int	i;

	i = 2;

	/*
		for example if we want to print 1 line of out pattern
		len is rows, so for example 5

		len = 5
		start = 'o'
		mid = '-'
		end = 'end'
	*/
	ft_putchar(start); // write 'o'
	while (i < len) // until it's not end
	{
		ft_putchar(mid); // write '-'
		i++;
	}
	/*
		we need to make sure len is > 1 because if user writes just ./a.out 1 1 it should write just first character 'o'
	*/
	if (len > 1)
	{
		ft_putchar(end); // write 'o'
	}
	ft_putchar('\n'); // new line
}
