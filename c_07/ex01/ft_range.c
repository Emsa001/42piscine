/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escura <escura@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:41:42 by escura            #+#    #+#             */
/*   Updated: 2023/10/09 15:10:05 by escura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

// #include <stdio.h>

// int *ft_range(int min, int max);

// int main(int nb, char **args) {
//     int min = 5;
//     int max = 12;
//     if(nb == 3){
//         min = atoi(args[1]);
//         max = atoi(args[2]);
//     }

//     int *result = ft_range(min, max);

//     if (result == NULL) {
//         printf("Invalid input: min >= max\n");
//     } else {
//         printf("Result array: ");
//         for (int i = 0; i < max - min; i++) {
//             printf("%d ", result[i]);
//         }
//         printf("\n");

//         free(result);
//     }

//     return (0);
// }

int	*ft_range(int min, int max)
{
	int	*result;
	int	i;

	if (min >= max)
		return (NULL);
	result = (int *)malloc(sizeof(int) * (max - min));
	if (result == NULL)
		return (NULL);
	i = 0;
	while (min < max)
	{
		result[i] = min;
		i++;
		min++;
	}
	return (result);
}
