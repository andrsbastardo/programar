/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <abastard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 18:40:34 by abastard          #+#    #+#             */
/*   Updated: 2024/02/24 17:01:18 by abastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char *pajar, char *aguja, __SIZE_TYPE__ n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (*aguja == '\0')
		return (pajar);
	while (pajar[i] != '\0' && i < n)
	{
		while (pajar[i + j] == aguja[j] && (i + j) < n)
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
