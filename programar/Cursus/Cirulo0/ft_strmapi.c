/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <abastard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 09:12:05 by abastard          #+#    #+#             */
/*   Updated: 2024/02/13 10:07:51 by abastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char *str;
    int i;
    
    i = 0;
    *str = malloc(ft_strlen(s)+1); /*Alocamos la memoria necesaria para la operación*/
    if (!str)/*Si no podemos alocar la memoria suficinete, retorna nulo*/
    {
        return(0);
    }
    while (s[i]) /*Siempre que estemos en s[i]*/
    {
        str[i] = f(i, s[i]);/*Aloca en la posicion i de str la modificacion 
        que ha de realizar la función f teniendo en cuenta su primera posición, sobre el puntero s*/
        i++;
    }
    return(s);
}