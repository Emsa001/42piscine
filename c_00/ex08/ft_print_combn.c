/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escura <escura@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 12:03:19 by escura            #+#    #+#             */
/*   Updated: 2023/09/21 11:23:59 by escura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_nums(int *arr, int n)
{
	int		i;
	char	nb;

	i = 0;
	while (i < n)
	{
		nb = arr[i] + '0';
		write(1, &nb, 1);
		i++;
	}
	if (arr[0] < 10 - n)
	{
		write(1, ", ", 2);
	}
}

void	ft_generate(int *arr, int n, int index, int start)
{
	int	i;

	i = start;
	if (index == n)
	{
		ft_print_nums(arr, n);
	}
	else
	{
		while (i < 10)
		{
			arr[index] = i;
			ft_generate(arr, n, index + 1, i + 1);
			i++;
		}
	}
}

void	ft_print_combn(int n)
{
	int	arr[0];

	ft_generate(arr, n, 0, 0);
}

// int	main(void)
// {
// 	ft_print_combn(2);
// 	return (0);
// }
