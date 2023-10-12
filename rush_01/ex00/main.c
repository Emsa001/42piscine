/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escura <escura@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 20:38:59 by escura            #+#    #+#             */
/*   Updated: 2023/10/03 18:49:41 by escura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
	define all the functions we will use outside the main.c file
*/

void	ft_putchar(char *c, int i);
int		rush(char *args, char grid[4][4]);
int		ft_atoi(char *str);
int		check_arg(char *str);

/*

	Validating arguments, here I use the function check_arg from components.c 
	and verify if the amount of characters is 31, also I check if the number of arguments
	is 2. First arugment is program name so if we run: ./user_exe "nums"
	./user_exe < first arg
	"nums" < second arg

	but remeber that in argv we start counting from 0 so first arg is argv[0] and second argv[1]

*/
int	validate_arguments(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc != 2 || check_arg(argv[1]) != 31)
	{
		return (0);
	}
	i++;
	return (1);
}

/*
	I set the grid to:

	1 1 1 1
	1 1 1 1
	1 1 1 1
	1 1 1 1

	as default, so it will optimise the "solve" function, as the minimum possible number in grid is 1
*/
void	set_grid(char grid[4][4])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		while (j < 4)
		{
			grid[i][j] = '1';
			j++;
		}
		j = 0;
		i++;
	}
}


/*

	Agter validation arguments if everything is correct we set the grid and call rush function,
	otherwise we show Error message followed by the new line

*/
int	main(int nb, char **args)
{
	char	grid[4][4];

	if (!validate_arguments(nb, args))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	set_grid(grid);
	rush(args[1], grid);
	return (0);
}
