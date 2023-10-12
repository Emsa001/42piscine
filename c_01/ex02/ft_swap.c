/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escura <escura@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:32:36 by escura            #+#    #+#             */
/*   Updated: 2023/09/24 15:32:03 by escura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

// int	main(void)
// {
// 	int	num1;
// 	int	num2;

// 	num1 = 10;
// 	num2 = 20;
// 	printf("Before swapping:\n");
// 	printf("num1 = %d, num2 = %d\n", num1, num2);
// 	ft_swap(&num1, &num2);
// 	printf("After swapping:\n");
// 	printf("num1 = %d, num2 = %d\n", num1, num2);
// 	return (0);
// }
