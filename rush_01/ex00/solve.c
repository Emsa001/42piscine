/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escura <escura@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 14:11:33 by escura            #+#    #+#             */
/*   Updated: 2023/10/04 09:30:27 by escura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		validate(char grid[4][4], char *arg, int direction);
void	print_grid(char grid[4][4]);

/* 

	Function that actually generates all the combinations,
	it's going through each element in grid changing the last element by 1:

	example:

	1 1 1 1
	1 1 1 1
	1 1 1 1
	1 1 1 1

	1 1 1 1
	1 1 1 1
	1 1 1 1
	1 1 1 2

	1 1 1 1
	1 1 1 1
	1 1 1 1
	1 1 1 3

	1 1 1 1
	1 1 1 1
	1 1 1 1
	1 1 1 4

	1 1 1 1
	1 1 1 1
	1 1 1 1
	1 1 2 1
	
	... 

	until:
	4 4 4 4
	4 4 4 4
	4 4 4 4
	4 4 4 4

*/
void	generate(char grid[4][4])
{
	int	i;
	int	j;

	i = 3;
	j = 3;
	while (i >= 0 && j >= 0 && grid[i][j] == '4')
	{
		grid[i][j] = '1';
		if (j == 0)
		{
			i--;
			j = 3;
		}
		else
			j--;
	}
	if (grid[i][j] == '4')
		grid[i][j] = '1';
	else
		grid[i][j]++;
}

/*

	Until we don't find the solution we search for it using generate function
	also we check if the number of attempts is less then maximum number of combinations,
	if it is we reutrn -1 which means, solution not found and write "Error\n"

*/

int	solve(char grid[4][4], char *arg)
{
	long int	attempts;

	attempts = 0;
	while (!validate(grid, arg, 0))
	{
		if (attempts >= 4294967296)
		{
			return (-1);
		}
		generate(grid);
		attempts++;
	}
	return (0);
}
