/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escura <escura@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 19:12:35 by escura            #+#    #+#             */
/*   Updated: 2023/10/05 13:49:24 by escura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escura <escura@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 19:12:35 by escura            #+#    #+#             */
/*   Updated: 2023/10/05 13:37:11 by escura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <stdlib.h>
// #include <sys/time.h>

// int ft_find_next_prime(int nb);

// int main(){

// 	struct timeval begin, end;
//     gettimeofday(&begin, 0);

// 	int nb = 3;
// 	printf("next prime: %d\n",ft_find_next_prime(nb));

// 	gettimeofday(&end, 0);
//     long seconds = end.tv_sec - begin.tv_sec;
//     long microseconds = end.tv_usec - begin.tv_usec;
//     double elapsed = seconds + microseconds*1e-6;

//     printf("\nTime measured: %.3f seconds.\n", elapsed);
// }

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	else if (nb <= 3)
		return (1);
	else if (nb % 2 == 0 || nb % 3 == 0)
		return (0);
	i = 5;
	while (i <= nb / 2)
	{
		if (nb % i == 0 || nb % (i + 2) == 0)
			return (0);
		i += 6;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 0)
	{
		nb = 2;
	}
	while (!ft_is_prime(nb))
	{
		nb++;
	}
	return (nb);
}
