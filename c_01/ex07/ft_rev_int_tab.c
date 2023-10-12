/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escura <escura@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 16:59:47 by escura            #+#    #+#             */
/*   Updated: 2023/09/28 19:14:41 by escura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap2(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	start;
	int	end;

	start = 0;
	end = size - 1;
	while (start < end)
	{
		ft_swap2(&tab[start], &tab[end]);
		start++;
		end--;
	}
}

// int	main(void)
// {
// 	int	arr[] = {};
// 	int	arr2[] = {};
// 	int	size;

// 	size = 5;
// 	printf("[ Original Array: ]\n");
// 	for (int i = 0; i < size; i++)
// 	{
// 		printf("%d\n", arr[i]);
// 	}
// 	ft_rev_int_tab(arr, size);
// 	printf("\n[ Reversed Array: ]\n");
// 	for (int i = 0; i < size; i++)
// 	{
// 		printf("%d\n", arr[i]);
// 	}

// 	printf("\n-----------------\n");

// 	size = 5;
// 	printf("\n[ Original Array: ] \n");
// 	for (int i = 0; i < size; i++)
// 	{
// 		printf("%d\n", arr2[i]);
// 	}
// 	ft_rev_int_tab2(arr2, size);
// 	printf("\n[ Reversed Array: ] \n");
// 	for (int i = 0; i < size; i++)
// 	{
// 		printf("%d\n", arr2[i]);
// 	}
// 	return (0);
// }
