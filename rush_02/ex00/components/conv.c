/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escura <escura@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 20:34:24 by escura            #+#    #+#             */
/*   Updated: 2023/10/08 19:36:50 by escura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str);
char	ft_strcpy(char *dest, char *src);
void	converter(char *nb, char *dict, char *word_string);

void	clear_string(char *str)
{
	while (*str != '\0')
	{
		*str = '\0';
		str++;
	}
}

void	remove_first_char(char *str)
{
	int	length;
	int	i;

	i = 0;
	length = ft_strlen(str);
	if (length <= 1)
	{
		str[0] = '\0';
	}
	else
	{
		while (i < length)
		{
			str[i] = str[i + 1];
			i++;
		}
		str[length - 1] = '\0';
	}
}

char	*fill_string(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (i > 0)
		{
			str[i] = '0';
		}
		i++;
	}
	return (str);
}

void	print_first_digits(char *num, int digits, char *dict, char *word_string)
{
	num[digits] = '\0';
	converter(num, dict, word_string);
}
