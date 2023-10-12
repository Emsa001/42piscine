/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escura <escura@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 16:59:47 by escura            #+#    #+#             */
/*   Updated: 2023/09/27 13:35:37 by escura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_swap3(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				ft_swap3(&tab[i], &tab[j]);
			}
			j++;
		}
		i++;
	}
}

// int	main(void)
// {
// 	int	arr[] = {7, 4, 99, 2, 18374, 9, -5, -183, 0};
// 	int	size;

// 	size = 9;
// 	printf("Original Array:\n");
// 	for (int i = 0; i < size; i++)
// 	{
// 		printf("%d\n", arr[i]);
// 	}
// 	ft_sort_int_tab(arr, size);
// 	printf("Sorted Array:\n");
// 	for (int i = 0; i < size; i++)
// 	{
// 		printf("%d\n", arr[i]);
// 	}
// 	return (0);
// }
