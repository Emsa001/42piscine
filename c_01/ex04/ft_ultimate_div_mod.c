/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escura <escura@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:16:43 by escura            #+#    #+#             */
/*   Updated: 2023/09/24 15:36:22 by escura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;
	int	temp2;

	temp = *a / *b;
	temp2 = *a % *b;
	*a = temp;
	*b = temp2;
}

// int	main(void)
// {
// 	int	num1;
// 	int	num2;

// 	num1 = 10;
// 	num2 = 3;
// 	printf("Before:\n");
// 	printf("num1 = %d, num2 = %d\n", num1, num2);
// 	ft_ultimate_div_mod(&num1, &num2);
// 	printf("After:\n");
// 	printf("num1 = %d, num2 = %d\n", num1, num2);
// 	return (0);
// }
