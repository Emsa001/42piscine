/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escura <escura@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 12:02:17 by escura            #+#    #+#             */
/*   Updated: 2023/09/20 12:02:42 by escura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int		num;
	char	digit;

	num = 0;
	while (num <= 9)
	{
		digit = num + '0';
		write(1, &digit, 1);
		num++;
	}
}

/*int main() {
	ft_print_numbers();
	return (0);
}
*/