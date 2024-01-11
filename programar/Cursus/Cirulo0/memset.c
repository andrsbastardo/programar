/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usuadmin <usuadmin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 18:27:38 by usuadmin          #+#    #+#             */
/*   Updated: 2024/01/11 11:52:10 by usuadmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void mem_set(char *dest, int c, size_t count)
{
    int i;
    int count1;
    i = 0;
    count1 = count;

    while (dest[i] != '\0')
    {
        while (i <= count1)
        {
            dest[i] = c;
        }
        i++;
    }
    
}
