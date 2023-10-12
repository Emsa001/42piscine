/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converter.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escura <escura@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 17:08:52 by escura            #+#    #+#             */
/*   Updated: 2023/10/08 22:52:31 by escura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	converter(char *nb, char *dict, char *word_string);
char	*get_initial(char *nb, char *dict);
int		dict_contains(char *nb, char *dict);

int		ft_strlen(char *str);
char	*ft_strcpy(char *dest, char *src);
int		ft_atoi(char *nb);
char	*ft_strcat(char *dest, char *src);

void	print_first_digits(char *num, int digits, char *dict,
			char *word_string);
void	write_number_word(char *number, char *word_string);
void	clear_string(char *str);
void	remove_first_char(char *str);

int		handle_2digit(char *nb, int length, char *dict, char *word_string);
int		check_for_length_help_fn(int length, char *temp_nb, char *nb);
void	handle_3digit(char *nb, char *temp_nb, char *dict, char *word_string);
void	hadle_3_up_part_2(char *temp_nb2, char *nb, char *dict,
			char *word_string);
void	handle_3up_digits(char *nb, char *dict, char *word_string,
			char *temp_nb);

void	error_message(char *str);

void	converter(char *nb, char *dict, char *word_string)
{
	int		length;
	char	*temp_nb;

	length = ft_strlen(nb);
	if (handle_2digit(nb, length, dict, word_string))
		return ;
	temp_nb = (char *)malloc(length + 1);
	ft_strcpy(temp_nb, nb);
	if (check_for_length_help_fn(length, temp_nb, nb) == 3)
		handle_3digit(nb, temp_nb, dict, word_string);
	if (length > 3)
		handle_3up_digits(nb, dict, word_string, temp_nb);
	else
	{
		write_number_word(get_initial(temp_nb, dict), word_string);
		if (length > 1)
		{
			remove_first_char(nb);
			while (nb[0] == '0')
			{
				remove_first_char(nb);
			}
			converter(nb, dict, word_string);
		}
	}
}

void	convert_checker(char *nb, char *dict, char *word_string)
{
	int		length;
	char	*number;
	int		i;

	length = ft_strlen(nb);
	number = (char *)malloc(length + 2);
	i = 1;
	number[0] = '1';
	while (length - 1 > 0)
	{
		number[i] = '0';
		i++;
		length--;
	}
	free(number);
	converter(nb, dict, word_string);
}
