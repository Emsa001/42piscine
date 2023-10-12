/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escura <escura@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:16:43 by escura            #+#    #+#             */
/*   Updated: 2023/09/25 18:52:50 by escura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int	main(void)
// {
// 	int a = 10;
// 	int b = 3;
// 	int div_result;
// 	int mod_result;

// 	ft_div_mod(a, b, &div_result, &mod_result);

// 	printf("A: %d\n", a);
// 	printf("B: %d\n", b);
// 	printf("Div: %d\n", div_result);
// 	printf("Mod: %d\n", mod_result);

// 	return (0);
// }