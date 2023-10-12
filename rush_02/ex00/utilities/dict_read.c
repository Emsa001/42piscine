/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_read.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escura <escura@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 17:24:38 by escura            #+#    #+#             */
/*   Updated: 2023/10/08 22:48:24 by escura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strcmp(char *s1, char *s2);
int		ft_strlen(char *str);
void	clear_string(char *str);

int	compare(char *current_word, char *nb, char *dict, int i)
{
	if (ft_strcmp(current_word, nb) == 0 && dict[i] == ':')
		return (1);
	return (0);
}

char	*get_initial_help(char *nb, char *dict, char *current_word, char *word)
{
	int	i;
	int	j;
	int	k;
	int	found;

	k = 0;
	i = 0;
	j = 0;
	found = 0;
	while (dict[i])
	{
		if (found == 0 || (dict[i] >= '0' && dict[i] <= '9'))
		{
			k = 0;
			while (dict[i] >= '0' && dict[i] <= '9')
				current_word[k++] = dict[i++];
			current_word[k] = '\0';
			found = compare(current_word, nb, dict, i);
		}
		else if (dict[i] >= 32 && dict[i] <= 127)
			word[j++] = dict[i];
		i++;
	}
	word[j] = '\0';
	return (word);
}

char	*get_initial(char *nb, char *dict)
{
	char	*word;
	char	*current_word;

	word = (char *)malloc(ft_strlen(dict));
	current_word = (char *)malloc(ft_strlen(dict));
	get_initial_help(nb, dict, current_word, word);
	free(current_word);
	return (word);
}

int	check_if_exists(char *nb, char *dict, char *current_word)
{
	int	i;
	int	j;
	int	k;
	int	found;

	k = 0;
	i = 0;
	j = 0;
	found = 0;
	while (dict[i])
	{
		if (found == 0 || (dict[i] >= '0' && dict[i] <= '9'))
		{
			k = 0;
			while (dict[i] >= '0' && dict[i] <= '9')
				current_word[k++] = dict[i++];
			current_word[k] = '\0';
			found = compare(current_word, nb, dict, i);
		}
		i++;
	}
	return (found);
}

int	dict_contains(char *nb, char *dict)
{
	char	*current_word;
	int		exists;
	int		i;

	current_word = (char *)malloc(ft_strlen(dict));
	exists = 0;
	i = 3;
	while (i > 0)
	{
		if (check_if_exists(nb, dict, current_word))
			return (1);
		nb[ft_strlen(nb) - 1] = '\0';
		i--;
	}
	return (0);
}
