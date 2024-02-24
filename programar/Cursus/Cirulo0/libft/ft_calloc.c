/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <abastard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 15:51:34 by abastard          #+#    #+#             */
/*   Updated: 2024/02/24 17:01:45 by abastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*memb = number of items to alocate, size = size of numbers to alocate, then
call bzero to allocate EOF characters in the memory*/
void	*ft_calloc(__SIZE_TYPE__	nmemb, __SIZE_TYPE__	size)
{
	int	*ptr;

	ptr = (int *) malloc (nmemb * sizeof(size));
	if (!ptr)
	{
		return (0);
	}
	ft_bzero (ptr, nmemb);
	return (ptr);
}
