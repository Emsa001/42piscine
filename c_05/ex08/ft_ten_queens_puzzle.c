/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escura <escura@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/2/04 12:04:14 by escura            #+#    #+#             */
/*   Updated: 2023/12/09 20:09:16 by escura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		ft_ten_queens_puzzle(void);

int	main(void)
{
	printf("Total solutions: %d\n", ft_ten_queens_puzzle());
	return (0);
}

void print_result(int grid[12][12]) {
    int i, j;

    for (i = 0; i < 12; i++) {
        for (j = 0; j < 12; j++) {
            if (grid[j][i] == 1) {
                // Set text color to green (32) for queens
                printf("\x1B[32mQ\x1B[0m "); // \x1B[0m resets color
            } else {
                // Set text color to white (37) for 0s
                printf("\x1B[37m0\x1B[0m ");
            }
        }
        printf("\n");
    }
    printf("\n");
}


int	check_if_possible(int grid[12][12], int row, int col)
{
	int	i;
	int	j;

	i = 0;
	while (i < col)
	{
		if (grid[row][i++] == 1)
			return (0);
	}
	i = row;
	j = col;
	while (i >= 0 && j >= 0)
	{
		if (grid[i--][j--] == 1)
			return (0);
	}
	i = row;
	j = col;
	while (j >= 0 && i < 12)
	{
		if (grid[i++][j--] == 1)
			return (0);
	}
	return (1);
}

int	solve(int grid[12][12], int col)
{
	int	i;
	int	count;

	i = 0;
	if (col >= 12)
	{
		print_result(grid);
		return (1);
	}
	count = 0;
	while (i < 12)
	{
		if (check_if_possible(grid, i, col))
		{
			grid[i][col] = 1;
			count += solve(grid, col + 1);
			grid[i][col] = 0;
		}
		i++;
	}
	return (count);
}

void	set_grid(int grid[12][12])
{
	int	j;
	int	i;

	j = 0;
	i = 0;
	while (i < 12)
	{
		j = 0;
		while (j < 12)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	grid[12][12];

	set_grid(grid);
	return (solve(grid, 0));
}
