/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <abastard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 18:27:38 by usuadmin          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2024/02/24 12:52:38 by abastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

=======
/*   Updated: 2024/02/13 16:15:07 by abastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

>>>>>>> 85374f7029757a82142e57fdbaea6db38e307242
void	ft_memset(void *dest, int c, __SIZE_TYPE__ count)
{
	__SIZE_TYPE__	i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)dest;
	while (i < count)
	{
		str[i] = c;
		i++;
	}
	return (dest);
}
