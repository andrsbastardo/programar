/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <abastard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 11:43:09 by abastard          #+#    #+#             */
/*   Updated: 2024/01/18 14:12:09 by abastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_substr(char const *s, unsigned int start, __SIZE_TYPE__ len)
{
    __SIZE_TYPE__ i;

    i = 0;

    char *str;

    if (!s || (!(str = malloc(len + 1))))
    {
        return(0);
    }

    while (len > 0)
    {
        str[i] = s[start];
        i++;
        start++;
        len--;
    }
    str[i+1]='\0';

    return(str);
    

    
}