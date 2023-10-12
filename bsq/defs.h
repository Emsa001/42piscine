/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   defs.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: triedel <triedel@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:07:40 by triedel           #+#    #+#             */
/*   Updated: 2023/10/11 23:27:54 by triedel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h> // open
#include <stdio.h>
#include <stdlib.h> // exit
#include <unistd.h>

#define BUFFSIZE	102400

typedef enum e_box
{
	none,
	obst,
	filled,
	end
}				t_box;

typedef enum e_parser_state
{
	read_line_count,
	read_chars,
	read_map,
	state_end,
	invalid,
	valid
}	t_parser_state;

typedef struct s_map_chars
{
	char	char_none;
	char	char_obst;
	char	char_filled;
}	t_map_chars;

typedef struct s_pos
{
	int	x;
	int	y;
}	t_pos;

typedef t_box	**t_map;
typedef t_box	*t_row;

char			*file_to_str(int filedes);
t_map			map_create(int width, int height);
t_map			map_read(int filedes);
void			map_print(t_map mapm, t_map_chars *map_chars);
void			map_destroy(t_map map);
int				map_solve(t_map map);
t_row			row_create(int width);
void			row_print(t_row row, t_map_chars *map_chars);
int				solve(t_map map);
int				get_map_size_rows(t_map map);
int				get_map_size_cols(t_map map);
void			put_str(char *str);
void			put_char(char c);

// map_utils.c (todo)
int				map_assign(t_map *map, char c, t_map_chars *map_chars,
					t_pos *pos);

// map_read.c
char			*file_to_str(int filedes);
int				get_line_length(char *s);
int				ft_isprint(char c);
int				read_num(char **str, int max_len);
void			row_print(t_row row, t_map_chars *map_chars);

// parse.c
t_parser_state	parse_read_line_count(char **s, int *lines);
t_parser_state	parse_map_chars(char **s, t_map_chars *map_chars);
t_parser_state	parse_map(char **s, t_map *map, t_map_chars *map_chars,
					int lines);
t_map			map_parse(char *file_str, t_map_chars *map_chars);