/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <abastard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 18:57:18 by abastard          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2024/02/24 12:52:22 by abastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

=======
/*   Updated: 2024/02/13 15:30:30 by abastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

>>>>>>> 85374f7029757a82142e57fdbaea6db38e307242
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
