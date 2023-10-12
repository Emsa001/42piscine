/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escura <escura@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 12:30:53 by escura            #+#    #+#             */
/*   Updated: 2023/09/26 11:17:38 by escura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print(int x, char start, char mid, char end); //Declare ft_print function

/* 

	Write pattern, we take current i to check if it's first / last or mid character to write in a line

	pattern[0][0] gets specific symbol for our pattern, in this case its 'o' because [ pattern_chars[0] = "o-o"; ] (LINE 45) 
	pattern[0][1] would be '-'
	pattern[0][0] would be 'o'
*/
void	print_pattern(int i, int cols, int rows, char **pattern_chars)
{
	// if 1 == 1 it means that it's first character in line, so use start pattern 'o-o'
	if (i == 1)
	{
		ft_print(rows, pattern_chars[0][0], pattern_chars[0][1],
			pattern_chars[0][2]);
	}

	// if 1 is cols (last column) use end pattern (in this case 'o-o')
	else if (i == cols)
	{
		ft_print(rows, pattern_chars[2][0], pattern_chars[2][1],
			pattern_chars[2][2]);
	}

	// in any different case it's not first and last so use mid pattern '| |'
	else
	{
		ft_print(rows, pattern_chars[1][0], pattern_chars[1][1],
			pattern_chars[1][2]);
	}

	/*
		We give all our symbols to ft_print function, so it for example looks like:
		ft_print(5, 'o','-'.'o');
	*/
}

void	rush(int x, int y)
{
	
	int		i;

	/*
		Create an array of strings (actually it should be 3 not 9, becuase we use just 3 string for that,
		but I forgot to change it from my previous version of this exercise, where I did use all the patterns, and the size of that array must have been 9.
		Anyway that shouldn't be a problem, but remember it. They might ask we did we use 9 as a size for array
	*/
	char	*pattern_chars[9];

	pattern_chars[0] = "o-o"; // first element in our array (start)
	pattern_chars[1] = "| |"; // second element in array (mid)
	pattern_chars[2] = "o-o"; // third element in array (end)

	i = 1;
	if (x > 0 && y > 0) // we write something only if x and y are grater than 0
	{
		while (i <= y) // for each row
		{
			print_pattern(i, y, x, pattern_chars);
			i++;
		}
	}
}
