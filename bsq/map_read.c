/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_read.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: triedel <triedel@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 19:00:13 by escura            #+#    #+#             */
/*   Updated: 2023/10/11 23:22:55 by triedel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "defs.h"

// read a file given as file descriptor
// to newly allocated string
// TODO: make variable size
char	*file_to_str(int filedes)
{
	int		bytes_read;
	char	*str;
	char	*s;

	str = malloc((BUFFSIZE + 1) * sizeof(char));
	s = str;
	bytes_read = 1;
	while (bytes_read > 0)
	{
		bytes_read = read(filedes, s, BUFFSIZE);
		if (bytes_read < 0)
		{
			free(str);
			return (NULL);
		}
		s += bytes_read;
	}
	*s = '\0';
	return (str);
}

int	get_line_length(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\n' && s[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_isprint(char c)
{
	return (!(c <= 0x1F || c == 0x7F));
}

// Reads in a number from *str and aborts when not possible anymore
int	read_num(char **str, int max_len)
{
	int	nb;
	int	len;

	nb = 0;
	len = 0;
	while (**str != '\0' && len < max_len)
	{
		if (**str < '0' || **str > '9')
			break ;
		nb *= 10;
		nb += **str - '0';
		(*str)++;
		len++;
	}
	return (nb);
}

/*
[TODO ]

- set characteres to characters from file
- remove green color
*/
void	row_print(t_row row, t_map_chars *map_chars)
{
	char	c;

	while (*row != end)
	{
		c = ' ';
		if (*row == filled)
			c = map_chars->char_filled;
		else if (*row == obst)
			c = map_chars->char_obst;
		else if (*row == none)
			c = map_chars->char_none;
		put_char(c);
		row++;
	}
	put_str("\n");
}
