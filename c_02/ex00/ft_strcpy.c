/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escura <escura@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:16:43 by escura            #+#    #+#             */
/*   Updated: 2023/10/04 14:55:17 by escura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// char	*ft_strcpy(char *dest, char *src);

// int	main(void)
// {
// 	char	*result;
// 	char	destination[20];

// 	char source[] = "Hello, World!";
// 	printf("Destination before: %s\n", destination);
// 	result = ft_strcpy(destination, source);
// 	printf("Destination after: %s\n", destination);
// 	return (0);
// }

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
