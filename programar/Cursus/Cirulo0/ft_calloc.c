/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <abastard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 15:51:34 by abastard          #+#    #+#             */
/*   Updated: 2024/01/18 16:37:55 by abastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

 void *ft_calloc(__SIZE_TYPE__ nmemb, __SIZE_TYPE__ size)
 {
    int *ptr;

    *ptr= (int *)malloc(nmemb*sizeof(size));  /*https://youtu.be/8q0jLDun0_0*/

    if(!ptr)
    {
        return(0);
    }
    ft_bzero(ptr,nmemb);
    return(ptr);

 }