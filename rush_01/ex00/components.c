/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   components.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escura <escura@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 20:19:38 by escura            #+#    #+#             */
/*   Updated: 2023/10/04 09:24:07 by escura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

	Components are basically "help functions", I just put all the functions 
	that I knew I'll use in different files here.

	Their work should be familiar to you, as we already did all of that in C00 / C01 / C02,
	however if anything here is not clear, don't hesitate to ask.

*/

#include <unistd.h>

/* 
	Actually we do not use that funciton, I forget to remove that xD, 
	but basically it's strcat (man strcat for more info)
*/
char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

// Changing string to number
int	ft_atoi(char *str)
{
	int	nb;
	int	i;

	nb = 0;
	i = 0;
	while (str[i])
	{
		nb = nb * 10 + str[i] - '0';
		i++;
	}
	return (nb);
}

// Swaping two values
void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*

	Print grid 4x4, basically we print this:

	0 0 0 0
	0 0 0 0
	0 0 0 0
	0 0 0 0

*/
void	print_grid(char grid[4][4])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		while (j < 4)
		{
			write(1, &grid[i][j], 1);
			if (j != 3)
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		j = 0;
		i++;
	}
}


/*

	Check argument, here I validate if argument is correct, 
	basically the program runs on 1 argument pattern: "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2"
	it contains 16 numbers with 15 spaces what gives us 31,
	this function basically returns the amount of characers, and checks if the numbers in argument
	are between 1 and 4, if no then it will just return 0

*/
int	check_arg(char *str)
{
	int	i;
	int	not_space; // this is mistake, shouldn't be here

	not_space = 1; // but I used it here, so there is no error xD
	i = 0;
	while (str[i])
	{
		if (i % 2 == 0 || i == 0) // check for every second value to avoid spaces
		{
			if (str[i] < '1' || str[i] > '4')
				return (0);
		}
		i++;
	}
	return (i);
}
