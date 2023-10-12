/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escura <escura@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:16:43 by escura            #+#    #+#             */
/*   Updated: 2023/10/01 19:05:53 by escura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putstr_non_printable(char *str);

int	main(void)
{
	ft_putstr_non_printable("Coucou\ntu vas Bien ?");
	write(1,"\n",1);
	ft_putstr_non_printable("PLS\nWORK");
	write(1,"\n",1);
	ft_putstr_non_printable("");
	write(1,"\n",1);
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	*hex_digits;

	hex_digits = "0123456789abcdef";
	i = 0;
	while (str[i])
	{
		if ((str[i] >= 0x00 && str[i] <= 0x0F) || str[i] == 0x7F)
		{
			ft_putchar('\\');
			ft_putchar(hex_digits[str[i] / 16]);
			ft_putchar(hex_digits[str[i] % 16]);
		}
		else
		{
			ft_putchar(str[i]);
		}
		i++;
	}
}
