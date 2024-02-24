/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <abastard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 16:40:31 by abastard          #+#    #+#             */
<<<<<<< HEAD
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
=======
/*   Updated: 2024/01/19 11:18:37 by abastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *strdup(const char *s)
{
    char *str;
    char *dest;
    int i;

    i = 0;
    *str = (char *)s;
    *dest = (char *)malloc(ft_strlen(str)+1);
    while(str[i] != '\0')
    {
        dest[i] = str[i];
        i++;
    }
    dest[i+1]='\0';
    return(dest);
}
>>>>>>> 85374f7029757a82142e57fdbaea6db38e307242
