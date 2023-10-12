/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escura <escura@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 13:56:11 by escura            #+#    #+#             */
/*   Updated: 2023/10/05 15:49:29 by escura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int nb, char **args)
{
	int	i;

	if (nb == 0)
		return (0);
	i = 0;
	while (args[0][i])
	{
		write(1, &args[0][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
