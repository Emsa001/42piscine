/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escura <escura@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:16:43 by escura            #+#    #+#             */
/*   Updated: 2023/09/26 18:33:21 by escura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// int	ft_str_is_printable(char *str);

// int	main(void)
// {
// 	char	*strings[] = {"HelloWorld\n", "ThisIsAValidString", "12345",
// 			"Special!Chars", "Anoth\nerTest", "123", "OnlyLetters",
// 			"NoDigits123", "alllowercase", "ALLUPPERCASE\n"};

// 	for (int i = 0; i < 10; i++)
// 	{
// 		printf("String: \"%s\", Returned: %d\n", strings[i],
// 			ft_str_is_printable(strings[i]));
// 	}
// 	return (0);
// }

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] > 126)
		{
			return (0);
			break ;
		}
		i++;
	}
	return (1);
}
