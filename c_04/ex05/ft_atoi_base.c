/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escura <escura@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:17:02 by escura            #+#    #+#             */
/*   Updated: 2023/10/02 15:47:56 by escura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		get_sign(char *str);
int		ft_atoi(char *str);
int		validate_base(char *str);
int		double_char(char *symbols);
int		ft_atoi_base(char *str, char *base);

// #include <stdio.h>
// int main(){
//     char *base;
//     char *nbr;
//     int result;

//     nbr  = "101010";
//     base = "01";

//     result = ft_atoi_base(nbr,base);
//     printf("Result: %d\n",result);
// }

int	ft_atoi_base(char *str, char *base)
{
	int	base_value;

	base_value = validate_base(base);
	if (!base_value)
		return (0);
	return (0);
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
		print_nbr(n_long * base_value, base_value, symbols);
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
