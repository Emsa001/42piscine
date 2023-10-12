/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escura <escura@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 18:42:51 by escura            #+#    #+#             */
/*   Updated: 2023/10/11 17:32:25 by escura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>

int	ft_is_prime(int nb);

// int	main(int asda, char **args)
// {
// 	int		nb;
// 	long	seconds;
// 	long	microseconds;
// 	double	elapsed;

// 	struct timeval begin, end;
// 	gettimeofday(&begin, 0);
// 	// for(int i = 0; i < 100; i++){
// 	//     if(ft_is_prime(i)){
// 	//         printf("%d ",i);
// 	//     }
// 	// }
// 	nb = atoi(args[1]);
// 	printf("is %d prime: %d\n", nb, ft_is_prime(nb));
// 	gettimeofday(&end, 0);
// 	seconds = end.tv_sec - begin.tv_sec;
// 	microseconds = end.tv_usec - begin.tv_usec;
// 	elapsed = seconds + microseconds * 1e-6;
// 	printf("\nTime measured: %.3f seconds.\n", elapsed);
// }

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	else if (nb <= 3)
		return (nb);
	else if (nb % 2 == 0 || nb % 3 == 0)
		return (0);
	i = 5;
	while (i <= nb / 2)
	{
		if (nb % i == 0 || nb % (i + 2) == 0)
			return (0);
		i += 6;
	}
	return (nb);
}

int	main(void)
{
	int	i;

	i = 17;
	printf("%d", ft_is_prime(i));
}
