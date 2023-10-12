/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_parts.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escura <escura@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 20:16:47 by escura            #+#    #+#             */
/*   Updated: 2023/10/08 20:59:37 by escura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	converter(char *nb, char *dict, char *word_string);
char	*get_initial(char *nb, char *dict);

int		ft_strlen(char *str);
char	*ft_strcpy(char *dest, char *src);
int		ft_atoi(char *nb);
char	*ft_strcat(char *dest, char *src);

void	print_first_digits(char *num, int digits, char *dict,
			char *word_string);
void	write_number_word(char *number, char *word_string);
void	clear_string(char *str);
void	remove_first_char(char *str);

int	handle_2digit(char *nb, int length, char *dict, char *word_string)
{
	if (length <= 2)
	{
		if (ft_atoi(nb) <= 20)
		{
			write_number_word(get_initial(nb, dict), word_string);
			return (1);
		}
	}
	return (0);
}

int	check_for_length_help_fn(int length, char *temp_nb, char *nb)
{
	if (length == 2)
	{
		temp_nb[0] = nb[0];
		temp_nb[1] = '0';
	}
	return (length);
}

void	handle_3digit(char *nb, char *temp_nb, char *dict, char *word_string)
{
	if (nb[0] != '0')
	{
		temp_nb[0] = nb[0];
		temp_nb[1] = '\0';
		converter(temp_nb, dict, word_string);
		temp_nb[0] = '1';
		temp_nb[1] = '0';
		temp_nb[2] = '0';
	}
}

void	hadle_3_up_part_2(char *temp_nb2, char *nb, char *dict,
		char *word_string)
{
	char	*temp_nb3;
	int		length_temp;

	length_temp = ft_strlen(temp_nb2);
	temp_nb3 = (char *)malloc(length_temp + 2);
	temp_nb3[0] = '1';
	while (length_temp)
	{
		ft_strcat(temp_nb3, "0");
		length_temp--;
	}
	write_number_word(get_initial(temp_nb3, dict), word_string);
	while (nb[0] == '0')
		remove_first_char(nb);
	converter(nb, dict, word_string);
	free(temp_nb2);
	free(temp_nb3);
}

void	handle_3up_digits(char *nb, char *dict, char *word_string,
		char *temp_nb)
{
	int		digits;
	int		length;
	char	*temp_nb2;

	digits = 0;
	length = ft_strlen(nb);
	digits = length % 3;
	if (digits == 0)
		digits = 3;
	print_first_digits(temp_nb, digits, dict, word_string);
	temp_nb2 = (char *)malloc(length + 1);
	ft_strcpy(temp_nb2, nb);
	while (digits > 0)
	{
		remove_first_char(temp_nb2);
		remove_first_char(nb);
		digits--;
	}
	hadle_3_up_part_2(temp_nb2, nb, dict, word_string);
}
