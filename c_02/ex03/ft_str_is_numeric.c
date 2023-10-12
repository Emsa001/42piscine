/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escura <escura@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:16:43 by escura            #+#    #+#             */
/*   Updated: 2023/10/02 13:52:43 by escura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// int	ft_str_is_numeric(char *str);

// int	main(void)
// {
// 	char *strings[] = {
// 		"HelloWorld",
// 		"3456389472398",
// 		"12345",
// 		"Special!Chars",
// 		"AnotherTest",
// 		"123",
// 		"OnlyLetters",
// 		"NoDigits123",
// 		"389!2",
// 		"42",
// 	};
// 	for (int i = 0; i < 10; i++)
// 	{
// 		printf("String: \"%s\", Returned: %d\n", strings[i],
// 			ft_str_is_numeric(strings[i]));
// 	}
// 	return (0);
// }

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
		{
			return (0);
			break ;
		}
		i++;
	}
	return (1);
}
