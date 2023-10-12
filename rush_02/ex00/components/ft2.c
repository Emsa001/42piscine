/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft2.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escura <escura@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 17:21:33 by escura            #+#    #+#             */
/*   Updated: 2023/10/08 21:02:35 by escura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str);

int	ft_atoi(char *nb)
{
	int	result;

	result = 0;
	while (*nb != '\0')
	{
		if (*nb < '0' || *nb > '9')
			break ;
		result = result * 10 + *nb - '0';
		nb++;
	}
	return (result);
}

int	ft_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_power(nb, power - 1));
}

void	ft_remove_spaces(char *word_string)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (word_string[i])
	{
		if (word_string[i] != ' ' || (i > 0 && word_string[i - 1] != ' '))
		{
			word_string[j++] = word_string[i];
		}
		i++;
	}
	if (word_string[j - 1] == ' ')
		j--;
	word_string[j] = '\0';
}
