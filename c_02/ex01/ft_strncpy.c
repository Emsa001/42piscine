/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escura <escura@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:16:43 by escura            #+#    #+#             */
/*   Updated: 2023/09/28 19:22:59 by escura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

// char	*ft_strncpy(char *dest, char *src, unsigned int n);

// int	main(void)
// {
// 	char	dest1a[100];
// 	char	dest1b[100];
// 	char	dest2a[100];
// 	char	dest2b[100];
// 	char	dest3a[60];
// 	char	dest3b[60];
// 	char	dest4a[100];
// 	char	dest4b[100];

// 	char src1[] = "Hello";
// 	char src2[] = "World";
// 	char src3[] = "ABCDE";
// 	char src4[] = "";
// 	ft_strncpy(dest1a, src1, 8);
// 	dest1a[8] = '\0';
// 	strncpy(dest1b, src1, 8);
// 	dest1b[8] = '\0';
// 	ft_strncpy(dest2a, src2, 3);
// 	dest2a[3] = '\0';
// 	strncpy(dest2b, src2, 3);
// 	dest2b[3] = '\0';
// 	ft_strncpy(dest3a, src3, 5);
// 	dest3a[5] = '\0';
// 	strncpy(dest3b, src3, 5);
// 	dest3b[5] = '\0';
// 	ft_strncpy(dest4a, src4, 5);
// 	dest4a[5] = '\0';
// 	strncpy(dest4b, src4, 5);
// 	dest4b[5] = '\0';
// 	printf("[ Test 1 ]\nft_strncpy: %s\nstrncpy:   %s\n\n", dest1a, dest1b);
// 	printf("[ Test 2 ]\nft_strncpy: %s\nstrncpy:   %s\n\n", dest2a, dest2b);
// 	printf("[ Test 3 ]\nft_strncpy: %s\nstrncpy:   %s\n\n", dest3a, dest3b);
// 	printf("[ Test 4 ]\nft_strncpy: %s\ntrncpy:   %s\n\n", dest4a, dest4b);
// 	return (0);
// }

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
