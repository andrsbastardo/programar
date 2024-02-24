/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <abastard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 15:51:34 by abastard          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2024/02/24 11:47:11 by abastard         ###   ########.fr       */
=======
/*   Updated: 2024/02/13 13:34:52 by abastard         ###   ########.fr       */
>>>>>>> 85374f7029757a82142e57fdbaea6db38e307242
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(__SIZE_TYPE__	nmemb, __SIZE_TYPE__	size)
{
	int	*ptr;

	*ptr = (int *) malloc (nmemb * sizeof(size));
	if (!ptr)
	{
		return (0);
	}
	ft_bzero (ptr, nmemb);
	return (ptr);
<<<<<<< HEAD
}
=======
}
>>>>>>> 85374f7029757a82142e57fdbaea6db38e307242
