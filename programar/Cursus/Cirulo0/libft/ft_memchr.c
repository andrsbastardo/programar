/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <abastard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 18:57:18 by abastard          #+#    #+#             */
/*   Updated: 2024/02/24 12:52:22 by abastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memchr(const void *s, int c, __SIZE_TYPE__ n)
{
	__SIZE_TYPE__	i;
	unsigned char	*str;

	*str = (char *)s;
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
	return ('0');
}
