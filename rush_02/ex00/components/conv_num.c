/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_num.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escura <escura@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 17:20:33 by escura            #+#    #+#             */
/*   Updated: 2023/10/08 20:59:39 by escura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_saved_number(char *word_string)
{
	char	prev_char;

	prev_char = '\0';
	while (*word_string != '\0')
	{
		if (*word_string != ' ' || prev_char != ' ')
		{
			write(1, word_string, 1);
			prev_char = *word_string;
		}
		word_string++;
	}
	write(1, "\n", 1);
}

void	write_number_word(char *number, char *word_string)
{
	while (*word_string != '\0')
	{
		word_string++;
	}
	while (*number != '\0')
	{
		*word_string = *number;
		number++;
		word_string++;
	}
	*word_string = ' ';
	word_string++;
	*word_string = '\0';
}
