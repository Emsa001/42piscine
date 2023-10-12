/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_solve.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: triedel <triedel@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:48:24 by escura            #+#    #+#             */
/*   Updated: 2023/10/11 21:59:15 by triedel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "defs.h"

int	is_possible(t_map map, int size, int row, int col)
{
	int	i;
	int	j;

	if (row + size > get_map_size_rows(map) || col
		+ size > get_map_size_cols(map))
	{
		return (0);
	}
	i = row;
	j = col;
	while (i < row + size)
	{
		j = col;
		while (j < col + size)
		{
			if (map[i][j] == obst)
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

int	solve_if_possible(t_map map, int size, int i, int j)
{
	int	k;
	int	l;

	if (is_possible(map, size, i, j))
	{
		k = i;
		while (k < i + size)
		{
			l = j;
			while (l < j + size)
			{
				map[k][l] = filled;
				l++;
			}
			k++;
		}
		return (1);
	}
	return (0);
}

int	solve_temp(t_map map, int size)
{
	int	i;
	int	j;

	i = 0;
	while (map[i])
	{
		j = 0;
		while (map[i][j] != end)
		{
			if (map[i][j] == none)
			{
				if (solve_if_possible(map, size, i, j))
					return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int	solve(t_map map)
{
	int	rows;
	int	cols;
	int	size;
	int	solved;

	solved = 0;
	rows = get_map_size_rows(map);
	cols = get_map_size_cols(map);
	size = rows;
	if (rows > cols)
		size = cols;
	if (size <= 0)
		size = 1;
	while (size > 0)
	{
		if (solve_temp(map, size))
		{
			solved = 1;
			break ;
		}
		size--;
	}
	return (solved);
}
