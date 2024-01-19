/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <abastard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 11:17:25 by abastard          #+#    #+#             */
/*   Updated: 2024/01/19 11:28:45 by abastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strjoin(char const *s1, char const *s2)
{
    char *src;
    char *src2;
    char *dest;
    int i;
    int j;

    *src = (char*) s1;
    *dest = (char *)malloc(strlen(*src)+strlen(*src2)+1);
    *src2 = (char *) s2;
    int i = 0;
    int j = 0;

    while(s2[i] != '\0')
    {
        while(s1[j] != '\0')
        {
            dest[j] = s1[j];
            j++;
        }
        dest[j+i] = s2[i];
        i++;
    }
    dest[j+i+1] = '\0';

    if (!*dest)
    {
        return(0);
    }
    else
    {
        return(dest);
    }

}