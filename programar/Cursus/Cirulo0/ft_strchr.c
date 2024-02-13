/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <abastard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 17:46:13 by abastard          #+#    #+#             */
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