/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <abastard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 17:26:22 by abastard          #+#    #+#             */
/*   Updated: 2024/01/14 10:31:23 by abastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *memmove(void *dest, const void *src, __SIZE_TYPE__ n)
{
    int i;
    i = 0;
    char *dest2;
    char *src2;

    *dest2 = (char *)dest;
    *src2 = (char *)src;

    while (src2[i] != '\0' && n > 0)
    {
        dest2[i]=src2[i];
        i++;
        n--;
    }
}