/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escura <escura@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 17:48:22 by escura            #+#    #+#             */
/*   Updated: 2023/10/11 19:56:01 by escura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb);
int	ft_sqrt2(int nb);

int	main(void)
{
	int	num;

	num = 2147395600;
	printf("Result1: %d\n", ft_sqrt(num));
	return (0);
}

int	ft_sqrt(int nb)
{
	int	x;
	int	y;

	if (nb <= 0)
		return (0);
	x = nb;
	y = (x + 1) / 2;
	while (y < x)
	{
		x = y;
		y = (x + nb / x) / 2;
	}
	if (x * x == nb)
		return (x);
	else
		return (0);
}
