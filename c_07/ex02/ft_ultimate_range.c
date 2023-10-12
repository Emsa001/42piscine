/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escura <escura@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:11:31 by escura            #+#    #+#             */
/*   Updated: 2023/10/12 12:55:35 by escura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

// #include <stdio.h>

// int	ft_ultimate_range(int **range, int min, int max);
// int	main(void)
// {
// 	int	*arr;

// 	int size = ft_ultimate_range(&arr, 0, 5);
// 	if (size == -1)
// 	{
// 		printf("Memory allocation failed.\n");
// 	}
// 	else if (size == 0)
// 	{
// 		printf("min is greater than or equal to max, array is NULL.\n");
// 	}
// 	else
// 	{
// 		printf("Array elements: ");
// 		for (int i = 0; i < size; i++)
// 		{
// 			printf("%d ", arr[i]);
// 		}
// 		printf("Returned: %d\n",size);
// 	}
// 	free(arr);
// 	return (0);
// }

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc(4 * (max - min));
	if (*range == NULL)
		return (-1);
	while (i < (max - min))
	{
		(*range)[i] = min + i;
		i++;
	}
	return (max - min);
}
