/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 11:57:25 by abastard          #+#    #+#             */
/*   Updated: 2023/07/25 11:32:59 by abastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] == s2[i])
		{
			i++;
		}
		else
		{
			if (s1[i] > s2[i])
			{
				return (s1[i] - s2[i]);
			}
			else
			{
				return (s1[i] - s2[i]);
			}
		}
	}
	return (0);
}
/*
int main()
{
    char str1[] = "Hola";
    char str2[] = "Hol";

    int result = ft_strcmp(str1, str2);

    if (result == 0)
    {
        printf("Las cadenas son iguales.\n");
    }
    else if (result < 0)
    {
        printf("La cadena 1 es menor que la cadena 2.\n");
    }
    else
    {
        printf("La cadena 1 es mayor que la cadena 2.\n");
    }

    return 0;
}*/
