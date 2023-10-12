/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escura <escura@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 11:03:29 by escura            #+#    #+#             */
/*   Updated: 2023/10/10 22:05:12 by escura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb);

int	main(void)
{
	// int	nbs[8] = {0, 1, 5, -4, 10, 50, 32, 12};
	// int	i;

	// i = 0;
	// while (i < 8)
	// {
	// 	printf("Factorial of %d is %d\n", nbs[i],
	// 		ft_iterative_factorial(nbs[i]));
	// 	i++;
	// }

	int nb = 10;
	printf("Factorial of %d is %d\n", nb, ft_iterative_factorial(nb));
	return (0);
}

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	while (nb - 1 > 0)
	{
		result = result * nb;
		nb--;
	}
	return (result);
}
