/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <abastard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 18:27:38 by usuadmin          #+#    #+#             */
/*   Updated: 2024/02/13 11:57:47 by abastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void ft_memset(void *dest, int c, __SIZE_TYPE__ count)
{
    __SIZE_TYPE__   i;
    unsigned char   *str;

    i = 0;
    str = (unsigned char *)dest;

    while (i < count)
    {
        str[i] = c;
        i++;
    }
    return(dest);
}
