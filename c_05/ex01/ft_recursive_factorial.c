/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escura <escura@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 11:29:09 by escura            #+#    #+#             */
/*   Updated: 2023/10/03 16:09:43 by escura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// int	ft_recursive_factorial(int nb);

// int	main(void)
// {
// 	int	nbs[8] = {0, 1, 5, -4, 10, 50, 32, 12};
// 	int	i;

// 	i = 0;
// 	while (i < 8)
// 	{
// 		printf("factorial of %d is %d\n", nbs[i],
// 			ft_recursive_factorial(nbs[i]));
// 		i++;
// 	}
// 	return (0);
// }

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb < 2)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}
