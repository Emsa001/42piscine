/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escura <escura@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 15:31:39 by escura            #+#    #+#             */
/*   Updated: 2023/09/20 18:15:11 by escura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	verify_num(int nb)
{
	if (nb > 2147483647)
	{
		ft_putchar('2');
		nb = 147483647;
	}
	else if (nb < -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	else
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb = -nb;
		}
		if (nb == 0)
		{
			ft_putchar('0');
		}
	}
	return (nb);
}

void	ft_putnbr(int nb)
{
	int		index;
	int		digit;
	char	buffer[12];
	int		i;

	nb = verify_num(nb);
	if (nb != 0)
	{
		index = 0;
		while (nb > 0)
		{
			digit = nb % 10;
			buffer[index++] = '0' + digit;
			nb /= 10;
		}
		i = index - 1;
		while (i >= 0)
		{
			ft_putchar(buffer[i]);
			i--;
		}
	}
}

// int	main(void)
// {
// 	ft_putnbr(-1);
// 	return (0);
// }
