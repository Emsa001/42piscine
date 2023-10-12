/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escura <escura@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 13:29:47 by escura            #+#    #+#             */
/*   Updated: 2023/10/03 13:26:43 by escura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define GRID 4 // < that's actually pretty useless now, it' just global variable, but we don't relly need that anymore


int		validate(char grid[4][4], char *arg, int direction);
int		solve(char grid[4][4], char *arg);
void	print_grid(char grid[4][4]);


/*
	starting solve function, if no solution is found we display Error followed by a new line
	otherwise we 
*/
int	rush(char *args, char grid[4][4])
{
	int	is_valid; // this is useless as well in that case

	solve(grid, args);
	if (solve(grid, args) == -1)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	is_valid = validate(grid, args, 0); // we don't really need it here
	print_grid(grid); // print solution (grid is being modified in solve)
	return (1);
}
