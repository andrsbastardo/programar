/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <abastard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 10:45:14 by abastard          #+#    #+#             */
/*   Updated: 2024/02/27 19:24:24 by abastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Salida modificada a 	dest[j + 1] = '\0';*/

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	dest2;
	size_t	src2;

	i = 0;
	dest2 = ft_strlen(dest);
	src2 = ft_strlen(src);
	if (n <= dest2)
		return (src2 + n);
	j = dest2;
	while ((*src) && i < (n - 1))
	{
		dest[j+i] = src[i];
		i++;
		j++;
	}
	dest[j + 1] = '\0';
	return (src2 + dest2);
}

/*
size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	r;
	size_t	size_d;
	size_t	size_s;

	size_s = ft_strlen(src);
	size_d = ft_strlen(dest);
	if (n <= size_d)
		return (size_s + n);
	i = size_d;
	r = size_d + size_s;
	while ((i < (n - 1)) && (*src))
	{
		*(dest + i) = *src;
		src++;
		i++;
	}
	*(dest + i) = '\0';
	return (r);
}
*/

