/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escura <escura@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 14:30:58 by escura            #+#    #+#             */
/*   Updated: 2023/10/08 22:24:04 by escura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void	error_message(char *str);
int		ft_strlen(char *str);
char	*get_initial(char *nb, char *dict);
void	converter(char *nb, char *dict, char *word_string);
void	write_saved_number(char *word_string);
void	ft_remove_spaces(char *word_string);
void	convert_checker(char *nb, char *dict, char *word_string);

int	open_dict(char *c, char *dictpath)
{
	int	file;
	int	dict;

	if (c == NULL)
	{
		error_message("Error");
		return (0);
	}
	file = open(dictpath, O_RDONLY);
	if (file < 0)
	{
		error_message("Dict Error");
		free(c);
		return (0);
	}
	dict = read(file, c, 900);
	c[dict] = '\0';
	return (file);
}

int	handle_arguments(int nb, char **args)
{
	int		i;
	int		retvalue;
	char	*number;

	if (nb != 2 && nb != 3)
		return (-1);
	number = args[2];
	retvalue = 1;
	i = 0;
	if (nb == 2)
		number = args[1];
	while (number[i])
	{
		if (number[i] < '0' || number[i] > '9')
		{
			retvalue = -1;
			break ;
		}
		i++;
	}
	if (ft_strlen(number) > 1 && number[0] == '0')
		retvalue = -1;
	if (retvalue == -1)
		error_message("Error");
	return (retvalue);
}

void	finish_program(char *word_string, int file, char *c)
{
	ft_remove_spaces(word_string);
	write_saved_number(word_string);
	close(file);
	free(word_string);
	free(c);
}

int	main(int nb, char **args)
{
	char	*c;
	char	*word_string;
	int		file;
	char	*dictpath;

	dictpath = "dicts/numbers.dict";
	if (handle_arguments(nb, args) > 0)
	{
		if (nb == 3)
			dictpath = args[1];
		c = (char *)malloc(900);
		word_string = (char *)malloc(900);
		file = open_dict(c, dictpath);
		if (file <= 0)
			return (0);
		if (nb == 2)
			convert_checker(args[1], c, word_string);
		else
			convert_checker(args[2], c, word_string);
		finish_program(word_string, file, c);
	}
	return (0);
}
