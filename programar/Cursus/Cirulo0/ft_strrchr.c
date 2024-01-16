/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <abastard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 17:46:13 by abastard          #+#    #+#             */
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