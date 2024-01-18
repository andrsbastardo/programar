/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <abastard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 18:50:24 by abastard          #+#    #+#             */
/*   Updated: 2024/01/17 19:28:46 by abastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int memcmp(const void *s1, const void *s2, __SIZE_TYPE__ n)
{
    char *str1;
    char *str2;
    int i;
    int a;
    int b;
    int a2;
    int b2;


    i= 0;
    a = 0;
    b = 0;
    a2 = 0;
    b2 = 0;
    *str1 = (char *) s1;
    *str2 = (char *) s2;

    while(str1[i] != '\0' && str2[i] != '\0')
    {
        while(str1[i] < n && str2[i] < n)
        {
            /*¿Como identifico el valor de un character?¿Creo una función para guardar en un buffer el valor numerico de la función?*/
            a = str1[i];
            b = b + a; 

            a2 = str2[i];
            b2 = b2 + a2;
        }
    }

    if (b == b2)
    {
        return(0);
    }
    if (b < b2)
    {
        return(1);
    }
    if (b > b2)
    {
        return(-1);
    }
}