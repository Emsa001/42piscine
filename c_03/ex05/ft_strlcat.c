/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escura <escura@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 22:06:29 by escura            #+#    #+#             */
/*   Updated: 2023/10/04 22:27:54 by escura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char *str)
{
    int i;
    i = 0;
    while (str[i])
    {
        i++;
    }
    return (i);
}

unsigned int    ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int    i;
    unsigned int    n;
    i = 0;
    n = 0;
    while (i < size && dest[i])
    {
        i++;
    }
    while ((i + n + 1) < size && src[n])
    {
        dest[i + n] = src[n];
        n++;
    }
    if (i != size)
    {
        dest[i + n] = '\0';
    }
    return (i + ft_strlen(src));
}