/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escura <escura@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 14:58:34 by escura            #+#    #+#             */
/*   Updated: 2023/10/05 15:46:22 by escura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(char **str1, char **str2)
{
	char	*temp;

	temp = *str1;
	*str1 = *str2;
	*str2 = temp;
}

int	diff(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i] || str2[i])
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

void	print_args(char **args)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (args[i])
	{
		j = 0;
		while (args[i][j])
		{
			write(1, &args[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	main(int nb, char **args)
{
	int	i;
	int	j;

	i = 1;
	while (args[i] && args[i + 1])
	{
		j = i + 1;
		while (j <= nb - 1)
		{
			if (diff(args[i], args[j]) > 0)
			{
				ft_swap(&args[i], &args[j]);
			}
			j++;
		}
		i++;
	}
	print_args(args);
}
