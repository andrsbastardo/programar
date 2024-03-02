/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <abastard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 18:57:18 by abastard          #+#    #+#             */
/*   Updated: 2024/03/02 12:26:32 by abastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, __SIZE_TYPE__ n)
{
	__SIZE_TYPE__	i;
	unsigned char	*str;

	str = (unsigned char *)s;
	i = 0;
	while (str[i] != '\0' && i < n)
	{
		if (str[i] == (unsigned char) c)
		{
			return ((void *)(s + i));
		}
		else
		{
			i++;
		}
	}
	return (0);
}
