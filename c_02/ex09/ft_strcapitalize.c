/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escura <escura@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:16:43 by escura            #+#    #+#             */
/*   Updated: 2023/10/02 10:30:43 by escura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

char	*ft_strcapitalize(char *str);

int main(void)
{
    char testCases[10][200] = {
        "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un",
        "hello wo+1r12_+)@+_ld",
        "th@$is i@s a test",
        "all caps",
        "123@#45 numbers",
        "   leadi$ng spaces",
        "Traili$@ng sp%@aces   ",
        "camelC@(aseTest",
        "sT[rAn]Ge_C*(@aSeS_tEsT",
        "ANOTHE&*@R-TEST sTrIng WiTH, punC()@tuAtions!!"
    };

    for (int i = 0; i < 10; i++) {
        char string[200];
        strcpy(string, testCases[i]);
        ft_strcapitalize(string);
        printf("Orgl: %s\n", testCases[i]);
		printf("Mine: %s\n\n", string);
    }

    return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] -= 32;
	}
	i = 1;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (!(str[i - 1] >= 'a' && str[i - 1] <= 'z'))
			{
				if (!(str[i - 1] >= '0' && str[i - 1] <= '9'))
				{
					if (!(str[i - 1] <= 'Z' && str[i - 1] >= 'A'))
						str[i] -= 32;
				}
			}
		}
		i++;
	}
	return (str);
}
