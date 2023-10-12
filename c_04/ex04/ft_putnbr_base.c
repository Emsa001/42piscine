/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escura <escura@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 12:21:43 by escura            #+#    #+#             */
/*   Updated: 2023/10/02 15:37:39 by escura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_base(int nbr, char *base);
void	print_nbr(int n, int baseValue, char *symbols);
int		validate_base(char *str);
int		double_char(char *symbols);
void	ft_putchar(char c);

// #include <stdio.h>
// int	main(void)
// {
//     ft_putnbr_base(42, "0123456789");
//     printf("\n");
//     ft_putnbr_base(42, "01");
//     printf("\n");
//     ft_putnbr_base(42, "0123456789ABCDEF");
//     printf("\n");
//     ft_putnbr_base(42, "poneyvif");

//     printf("\n");

//     ft_putnbr_base(-42, "01");
//     printf("\n");
//     ft_putnbr_base(0, "01");

//     printf("\n");
//     ft_putnbr_base(2147483647, "01");
//     printf("\n");
//     ft_putnbr_base(-2147483648, "01");
// }

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_value;

	base_value = validate_base(base);
	if (!base_value)
	{
		return ;
	}
	print_nbr(nbr, base_value, base);
}

void	print_nbr(int n, int base_value, char *symbols)
{
	long	n_long;

	n_long = n;
	if (n_long < 0)
	{
		n_long = -n_long;
		ft_putchar('-');
	}
	if (n_long >= base_value)
		print_nbr(n_long / base_value, base_value, symbols);
	ft_putchar(symbols[n_long % base_value]);
}

int	validate_base(char *str)
{
	int	i;
	int	is_valid;

	i = 0;
	is_valid = 1;
	while (str[i])
	{
		if (str[i] == '+' || str[i] == '-' || str[i] == ' ')
		{
			is_valid = 0;
			break ;
		}
		i++;
	}
	if (i < 2 || !is_valid)
	{
		return (0);
	}
	if (double_char(str))
		return (0);
	return (i);
}

int	double_char(char *symbols)
{
	int	i;
	int	j;

	i = 0;
	while (symbols[i])
	{
		j = i + 1;
		while (symbols[j])
		{
			if (symbols[i] == symbols[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
