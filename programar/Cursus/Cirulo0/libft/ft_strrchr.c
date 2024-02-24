/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <abastard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 17:46:13 by abastard          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2024/02/24 12:54:13 by abastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	int		b;
	char	*str;

	*str = *s;
	i = 0;
	b = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
		{
			b = i;
		}
		i++;
	}
	if (str[b] == c)
	{
		return ((char *)s + b);
	}
	else
		return (c);
}
=======
/*   Updated: 2024/01/15 18:05:15 by abastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
    int i;
    int b;
    char *str;

    *str = *s;
    i = 0;
    b = 0;

    while (str[i] != '\0')
    {
        if (str[i] == c)
        {
            b = i;
        }
        i++;
    }

    if (str[b] == c)
    {
        return((char *)s +b);
    }
    else
        return(c);
    
}
>>>>>>> 85374f7029757a82142e57fdbaea6db38e307242
