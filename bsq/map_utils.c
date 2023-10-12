/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: triedel <triedel@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:07:57 by triedel           #+#    #+#             */
/*   Updated: 2023/10/11 23:27:29 by triedel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "defs.h"

t_map	map_create(int width, int height)
{
	t_map	map;
	int		i;

	map = malloc(sizeof(t_box **) * (height + 1));
	if (!map)
		return (NULL);
	i = 0;
	while (i < height)
	{
		map[i] = row_create(width);
		if (!map[i])
		{
			map_destroy(map);
			return (NULL);
		}
		i++;
	}
	map[i] = NULL;
	return (map);
}

t_row	row_create(int width)
{
	int		i;
	t_row	row;

	row = malloc(sizeof(t_row) * (width + 1));
	if (!row)
		return (NULL);
	i = 0;
	while (i < width)
	{
		row[i] = none;
		i++;
	}
	row[i] = end;
	return (row);
}

void	map_destroy(t_map map)
{
	t_map	cur;

	if (!map)
		return ;
	cur = map;
	while (*cur)
	{
		free(*cur);
		cur++;
	}
	free(map);
}

void	map_print(t_map map, t_map_chars *map_chars)
{
	t_map	row;

	row = map;
	while (*row)
	{
		row_print(*row, map_chars);
		row++;
	}
}

// attempts to pick out the correct enum entry and assigns it to the map
// on success, return 1, else 0
int	map_assign(t_map *map, char c, t_map_chars *map_chars, t_pos *pos)
{
	if (c == map_chars->char_none)
		(*map)[pos->y][pos->x] = none;
	else if (c == map_chars->char_obst)
		(*map)[pos->y][pos->x] = obst;
	else
		return (0);
	return (1);
}
