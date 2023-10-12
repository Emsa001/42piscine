/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escura <escura@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:36:26 by escura            #+#    #+#             */
/*   Updated: 2023/10/12 12:15:00 by escura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

// #include <stdio.h>

// char	*ft_strjoin(int size, char **strs, char *sep);

// int	main(void)
// {
// 	char	*str[] = {"Hello", "World", "!"};
// 	char	*sep;
// 	char	*res;

// 	sep = " LOL ";
// 	res = ft_strjoin(3, str, sep);
// 	printf("Result: %s", res);
// 	free(res);
// 	return (0);
// }

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		i;
	int		j;
	int		c;

	result = malloc(sizeof(strs) + 1);
	i = 0;
	c = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			result[c++] = strs[i][j++];
		j = 0;
		while (sep[j] != '\0' && i != size - 1)
			result[c++] = sep[j++];
		i++;
	}
	result[c] = '\0';
	return (result);
}
