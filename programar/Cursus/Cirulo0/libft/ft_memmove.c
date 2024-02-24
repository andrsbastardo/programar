/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <abastard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 17:26:22 by abastard          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2024/02/24 12:52:33 by abastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

=======
/*   Updated: 2024/02/13 16:13:12 by abastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

>>>>>>> 85374f7029757a82142e57fdbaea6db38e307242
void	*memmove(void *dest, const void *src, __SIZE_TYPE__ n)
{
	int		i;
	char	*dest2;
	char	*src2;

<<<<<<< HEAD
	*dest2 = (char *)dest;
	*src2 = (char *)src;
	i = 0;
	if (dest2 == src2)
	{
		return (src2);
	}
	if (dest2 < src2)
	{
		return (ft_memcpy(dest2, src2, n));
	}
	while (src2[i] != '\0' && n > 0)
	{
		dest2[i] = src2[i];
		i++;
		n--;
		return (dest);
	}
=======
    *dest2 = (char *)dest;
    *src2 = (char *)src;
    i = 0;
	if(dest2 = src2)
	{
		return(src2);
	}
	if( dest2 < src2)
	{
		return(ft_memcpy(dest2,src2,n));
	}
	while (src2[i] != '\0' && n > 0)
	{
		dest2[i]=src2[i];
		i++;
		n--;
		return (dest);
    }
>>>>>>> 85374f7029757a82142e57fdbaea6db38e307242
}
