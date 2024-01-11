/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <abastard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 16:19:11 by usuadmin          #+#    #+#             */
/*   Updated: 2024/01/11 16:53:08 by abastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void bzero(void *s, __SIZE_TYPE__ n)
{
    __SIZE_TYPE__       i;
    unsigned char *str;
    
    i = 0;
    str = (unsigned *)s;

    while (i < n)
    {
        str[i] = '\0';
        i++;
    }
    
}