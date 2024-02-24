/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <abastard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 17:46:13 by abastard          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2024/02/24 12:53:10 by abastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	i;
	char			*str;

	*str = *s;
	i = (unsigned char)c;
	while (*str != '\0' && *str != i)
	{
		str++;
	}
	if (*str == i)
	{
		return (str);
	}
	return (0);
}
=======
/*   Updated: 2024/02/13 12:08:18 by abastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
    unsigned char i;
    char *str;

    *str = *s;
    i = (unsigned char) c;

    while (*str != '\0' && *str != i)
    {
        str++;
    }
    if (*str == i)
        {
            return(str);
        }
    return(0);
    
}
>>>>>>> 85374f7029757a82142e57fdbaea6db38e307242
