/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <abastard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 16:40:31 by abastard          #+#    #+#             */
/*   Updated: 2024/02/24 12:53:14 by abastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strdup(const char *s)
{
	char	*str;
	char	*dest;
	int		i;

	i = 0;
	*str = (char *)s;
	*dest = (char *)malloc(ft_strlen(str) + 1);
	while (str[i] != '\0')
	{
		dest[i] = str[i];
		i++;
	}
	dest[i + 1] = '\0';
	return (dest);
}
