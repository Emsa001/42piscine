/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: triedel <triedel@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:07:49 by triedel           #+#    #+#             */
/*   Updated: 2023/10/11 23:28:25 by triedel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "defs.h"

void	error_exit(const char *msg)
{
	while (*msg != '\0')
	{
		write(STDERR_FILENO, msg, 1);
		msg++;
	}
	exit(1);
}

void	errexit(char *s, t_map map)
{
	if (s)
		free(s);
	if (map)
		map_destroy(map);
	put_str("map error\n");
}

void	print_solution(int f)
{
	t_map		map;
	t_map_chars	map_chars;
	char		*s;

	map = NULL;
	s = file_to_str(f);
	if (!s)
	{
		errexit(s, map);
		return ;
	}
	map = map_parse(s, &map_chars);
	if (!map)
	{
		errexit(s, map);
		return ;
	}
	if (solve(map))
	{
		map_print(map, &map_chars);
		free(s);
		map_destroy(map);
	}
	else
		errexit(s, map);
}

int	main(int argc, char *argv[])
{
	int		i;
	int		fdes;

	if (argc > 1)
	{
		i = 1;
		while (i < argc)
		{
			fdes = open(argv[i], O_RDONLY);
			print_solution(fdes);
			close(fdes);
			if (i < argc - 1)
				put_str("\n");
			i++;
		}
	}
	else
		print_solution(STDIN_FILENO);
}
