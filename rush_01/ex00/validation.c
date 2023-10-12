/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escura <escura@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 20:32:41 by escura            #+#    #+#             */
/*   Updated: 2023/10/03 13:26:42 by escura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcat(char *dest, char *src);
void	print_grid(char grid[4][4]);

/*
	here we validate the exact amount of visible numbers, so for example:

	4 visible > 1 2 3 4 
	3 visible > 2 3 1 4
	2 visible > 3 1 2 4

	and it returns of visible number
*/
int count_visible_numbers(const char *input, int count, int max_seen)
{
    int digit;
    int i;
    int seen[10];

    // Initialize an array 'seen' to keep track of seen digits (0-9).
    i = 0;
    while (i < 10)
    {
        seen[i] = 0;
        i++;
    }

    i = 0;
    // Loop through the 'input' character array until the end ('\0') is reached.
    while (input[i] != '\0')
    {
        // Convert the character at 'input[i]' to an integer digit.
        digit = input[i] - '0';

        // If 'digit' has already been seen before, return 0.
        if (seen[digit])
            return (0);

        // Mark 'digit' as seen.
        seen[digit] = 1;

        // If 'digit' is greater than 'max_seen', update 'max_seen' and increment 'count'.
        if (digit > max_seen)
        {
            count++;
            max_seen = digit;
        }
        i++;
    }
    // Return the final 'count'.
    return (count);
}

/*
   This function copies a row or column from a 4x4 grid into an array 'nb'.
   Parameters:
   - nb: The array where the row or column will be copied.
   - grid: The 4x4 grid.
   - i: The index specifying which row or column to copy.
   - direction: An integer indicating the direction of copying (0-3).
*/
void copy_row_or_column(char nb[4], char grid[4][4], int i, int direction)
{
    int k;
    int j;

    j = 0;
    k = 0;
    while (k < 4)
    {
        // Copy elements from the grid based on 'direction' and 'i'.
        if (direction == 0)
            nb[k] = grid[k][i / 2];
        else if (direction == 1)
            nb[k] = grid[3 - k][i / 2 - 4];
        else if (direction == 2)
            nb[k] = grid[i / 2 - 8][k];
        else if (direction == 3)
            nb[k] = grid[i / 2 - 12][3 - k];
        k++;
    }
}

/*
   Determine the direction based on the index 'i'.
   Parameters:
   - i: The index used to determine the direction.
   Returns:
   - The direction (0-3).
*/
int check_direction(int i)
{
    int direction;

    direction = 0;
    // Determine the direction based on the value of 'i'.
    if (i / 2 < 4)
        direction = 0;
    else if (i / 2 < 8)
        direction = 1;
    else if (i / 2 < 12)
        direction = 2;
    else if (i / 2 < 16)
        direction = 3;
    return (direction);
}

/*
   Validate a given solution for a 4x4 grid puzzle.
   Parameters:
   - grid: The 4x4 grid to validate.
   - arg: A string representing visibility constraints for rows and columns.
   Returns:
   - 1 if the solution is valid according to the constraints, 0 otherwise.
*/
int validate(char grid[4][4], char *arg)
{
    int i;
    char nb[5];

    i = 0;
    while (arg[i])
    {
        nb[0] = '\0';
        // Ignore spaces in 'arg'.
        if (arg[i] != ' ')
        {
            // Copy a row or column into 'nb' based on 'i' and the direction.
            copy_row_or_column(nb, grid, i, check_direction(i));
            nb[4] = '\0';

            // Check if the count of visible numbers in 'nb' matches the constraint in 'arg'.
            if (count_visible_numbers(nb, 0, -1) != arg[i] - '0')
                return (0);
        }
        i++;
    }
    // If all constraints are satisfied, return 1 (valid solution).
    return (1);
}
