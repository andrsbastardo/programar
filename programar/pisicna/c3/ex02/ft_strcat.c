/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 16:19:57 by abastard          #+#    #+#             */
/*   Updated: 2023/07/24 12:18:42 by abastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int main() {
    char dest[100] = "Hello, ";
    char src[] = "world!";

    printf("Destino antes de la concatenación: %s\n", dest);
    printf("Fuente: %s\n", src);

    ft_strcat(dest, src);

    printf("Destino después de la concatenación: %s\n", dest);

    return 0;
}*/
