/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escura <escura@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:16:43 by escura            #+#    #+#             */
/*   Updated: 2023/09/26 18:29:54 by escura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// int	ft_str_is_lowercase(char *str);

// int	main(void)
// {
// 	char	*strings[] = {"HelloWorld", "ThisIsAValidString", "12345",
// 			"Special!Chars", "AnotherTest", "123", "OnlyLetters", "NoDigits123",
// 			"alllowercase", "ALLUPPERCASE"};

// 	for (int i = 0; i < 10; i++)
// 	{
// 		printf("String: \"%s\", Returned: %d\n", strings[i],
// 			ft_str_is_lowercase(strings[i]));
// 	}
// 	return (0);
// }

int	ft_str_is_lowercase(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 97 || str[i] > 122)
		{
			return (0);
			break ;
		}
		i++;
	}
	return (1);
}
