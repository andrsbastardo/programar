/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 08:55:03 by abastard          #+#    #+#             */
/*   Updated: 2023/07/24 12:24:19 by abastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (*to_find == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + j] == to_find[j] && str[i + j] != '\0')
			j++;
		if (to_find[j] == '\0')
			return (str + i);
		i++;
		j = 0;
	}
	return (0);
}
/*
int main() {
    char source[] = "Hello, world!";
    char substring[] = "world";

    char *result = ft_strstr(source, substring);

    if (result != NULL) {
        printf("La subcadena esta en la posición: %ld\n", result - source);
    } else {
        printf("La subcadena no se encontró.\n");
    }

    return 0;
}*/
