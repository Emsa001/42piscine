/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escura <escura@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 13:00:49 by escura            #+#    #+#             */
/*   Updated: 2023/10/04 20:35:55 by escura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// int ft_recursive_power(int nb, int power);

// int	main(void)
// {
// 	int	nbs[8] = {0, 1, 5, -4, 10, 50, 32, 12};
// 	int	i;

// 	i = 0;
// 	while (i < 8)
// 	{
// 		printf("power of %d is %d\n", nbs[i], ft_recursive_power(nbs[i],5));
// 		i++;
// 	}
// 	return (0);
// }

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}
