/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escura <escura@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 12:30:59 by escura            #+#    #+#             */
/*   Updated: 2023/09/26 11:44:02 by escura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Defining rush function
void	rush(int x, int y);

// Convert string to a number
int	get_number(char *str, int min_nb, int max_nb) 
{
	int	nb; // our number output 
	int	i;

	nb = 0;
	i = 0;

	/*

		While str[i] exists, for example if our input string is '52' (./a.out 52) then str[0] is 5 and str[1] is 2
		using while(str[i]) we verify if there is a number for str[i]

	*/
	while (str[i]) // while str[i] exists 
	{
		/*
			48 in ascii is 0
			if max_nb is 9 than 48 + 9 is 57 which is 9 from ascii table
			so basically we check if ascii value of our digit is higher than ascii value of 9 or less then ascii value of 0

			if it's true for any of these conditions it will return -1.

			[ Effect: ]
			If use writes ./a.out 5a 73
			x is "5a"
			y is "73"

			x will be returned -1 because ascii value of 'a' is higher than ascii value of '9'
			for y everything will be ok, as it contains only digits (between 0 and 9)

		*/
		if (str[i] > max_nb + 48 || str[i] < min_nb + 48)
		{
			return (-1);
		}

		/*

			[ VISUALISATION ]
			nb is 0 at beggining (see line 24)
			
			Let's say our input string is '52', for the first loop we get 5 so:
			ascii value of '5' is 53
			ascii value of '0' is 48
			53 - 48 = 5
			so we need - '0' to convert '5' to actuall number

			[ LOOP 1 ] nb = 0 * 10 + '5' - '0' >> 0 + 5 >> 5
			[ LOOP 2 ] nb = 5 * 10 + '2' - '0' >> 50 + 2 >> 52

		*/
		nb = nb * 10 + str[i] - '0';
		i++;
	}
	return (nb);
}

// Validate arguments (x and y) ./a.out x y
void	validate_args(char **args, int *x, int *y)
{
	if (args[1]) // arg 1 is x
	{
		// Needs to be a pointer to point to variable in main (line 94), so we actully change original x
		// We set *x to get_number - a function that I describe above (convert string to number)
		*x = get_number(args[1], 0, 9);
	}
	if (args[2]) // arg 2 is y
	{
		*y = get_number(args[2], 0, 9);
	}
}

int	main(int nb, char **args)
{
	int	x;
	int	y;

	x = 3; // Default value of x
	y = 3; // Default value of y

	/* 
	
		If user has more arguments than 1
		example: ./a.out 52 31

		[ ARGUMENT 0 ] = './a.out'
		[ ARGUMENT 1 ] = '52'
		[ ARGUMENT 1 ] = '31'

	*/
	if (nb > 1)
	{
		validate_args(args, &x, &y);
	}

	/*

		if x or y is less than 0
		show error message to user
		program should work only on positive numbers and 0

	*/
	if (x < 0 || y < 0)
	{
		write(1, "Use Format: ./rush0X <x: positive int> <y: positive int>\n",
			57);
		return (0);
	}

	// Run rush function with our x and y values
	rush(x, y);
	return (0);
}
