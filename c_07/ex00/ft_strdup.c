/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escura <escura@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:41:42 by escura            #+#    #+#             */
/*   Updated: 2023/10/09 14:49:42 by escura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// #include <stdio.h>

// char	*ft_strdup(char *src);

// int	main(void)
// {
// 	char	*copy;

// 	char original[] = "Hello, world!";
// 	copy = ft_strdup(original);
// 	if (copy == NULL)
// 	{
// 		printf("Memory allocation failed.\n");
// 		return (1);
// 	}
// 	printf("Original string: %s\n", original);
// 	printf("Copied string: %s\n", copy);
// 	free(copy);
// 	return (0);
// }

char	*ft_strdup(char *src)
{
	int		len;
	char	*str_copy;
	char	*copy_start;

	len = 0;
	while (src[len])
		len++;
	str_copy = (char *)malloc(len + 1);
	if (str_copy == NULL)
		return (NULL);
	copy_start = str_copy;
	while (*src != '\0')
	{
		*str_copy = *src;
		src++;
		str_copy++;
	}
	*str_copy = '\0';
	return (copy_start);
}
