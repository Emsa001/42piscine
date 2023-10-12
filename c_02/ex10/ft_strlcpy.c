/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escura <escura@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:16:43 by escura            #+#    #+#             */
/*   Updated: 2023/09/28 19:25:52 by escura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

// int	main(void)
// {
// 	unsigned int	len1;

// 	char source[] = "Hello, World!";
// 	char destination[20];
// 	len1 = ft_strlcpy(destination, source, 5);
// 	printf("ft_strlcpy: Copied '%s' to destination, Length: %u\n", destination,
// 		len1);
// 	return (0);
// }

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	counter;

	i = 0;
	counter = 0;
	while (src[counter])
		counter++;
	if (size < 1)
		return (counter);
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (counter);
}
