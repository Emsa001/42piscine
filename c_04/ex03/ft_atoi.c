/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escura <escura@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 12:16:16 by escura            #+#    #+#             */
/*   Updated: 2023/10/09 19:54:30 by escura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int ft_atoi(char *str);

int main(int nb, char **args){
    // char *nb1 = "      ---+--+1234ab567";
    // char *nb2 = "---\t-----------132563\n2167";
    // char *nb3 = "\t123131231";
    // char *nb4 = "-\r214748           36481";
    // char *nb5 = "aa892aa";
    // char *nb6 = "213";
    // char *nb7 = "-40\r01aaas";
    // char *nb8 = " -  \t - \n  -   \n123";

    // printf("Number1: %d\n",ft_atoi(nb1));
    // printf("Number2: %d\n",ft_atoi(nb2));
    // printf("Number3: %d\n",ft_atoi(nb3));
    // printf("Number4: %d\n",ft_atoi(nb4));
    // printf("Number5: %d\n",ft_atoi(nb5));
    // printf("Number6: %d\n",ft_atoi(nb6));
    // printf("Number7: %d\n",ft_atoi(nb7));
    // printf("Number8: %d\n\n",ft_atoi(nb8));

	printf("%d\n",ft_atoi(args[1]));
}

int	check_for_non_printable(char str)
{
	if (str == ' ' || str == '\f' || str == '\n')
		return (1);
	if (str == '\r' || str == '\t' || str == '\v')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	mult;
	int	nb;

	mult = 1;
	nb = 0;
	i = 0;
	while (check_for_non_printable(str[i]))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			mult *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = (nb * 10) + (str[i] - '0');
		i++;
	}
	nb *= mult;
	return (nb);
}
