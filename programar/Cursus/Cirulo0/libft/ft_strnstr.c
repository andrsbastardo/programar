/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <abastard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 18:40:34 by abastard          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2024/02/24 12:54:04 by abastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

=======
/*   Updated: 2024/01/16 18:55:40 by abastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

>>>>>>> 85374f7029757a82142e57fdbaea6db38e307242
char	*ft_strstr(char *pajar, char *aguja, __SIZE_TYPE__ n)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (*aguja == '\0')
		return (pajar);
	while (pajar[i] != '\0' && i < n)
	{
		while (pajar[i + j] == aguja[j] && (i + j) < n)
<<<<<<< HEAD
		{
			if (aguja[j] == '\0')
				return (pajar + i);
			else
				j++;
			i++;
			j = 0;
		}
	}
	return (0);
}
=======
		    if (aguja[j] == '\0')
			    return (pajar + i);
            else
                j++;
		i++;
		j = 0;
	}
	return (0);
}
>>>>>>> 85374f7029757a82142e57fdbaea6db38e307242
