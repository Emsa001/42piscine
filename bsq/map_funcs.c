/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_func.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escura <escura@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 17:09:05 by escura            #+#    #+#             */
/*   Updated: 2023/10/11 17:09:32 by escura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "defs.h"

int	get_map_size_rows(t_map map)
{
	int	size;

	size = 0;
	while (map[size])
	{
		size++;
	}
	return (size);
}

int	get_map_size_cols(t_map map)
{
	int		size;
	t_row	row;

	size = 0;
	row = *map;
	while (*row != end)
	{
		size++;
		row++;
	}
	return (size);
}
