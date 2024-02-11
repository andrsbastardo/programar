/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <abastard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 11:18:18 by abastard          #+#    #+#             */
/*   Updated: 2024/02/07 16:56:40 by abastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>  

char **Alocador(char **strs, char const *s, char c)
{
    int i;
    int indice;
    int h;

    i = 0;
    h = 0;
    indice = 0;
    while (s[i] != '\0')
    {
        if(s[i] != c)/*Hola000Mundo*/
            i++;
        if(s[i] == c)
            i++;
            h++;
        if(i > 0 && s[i+1] == c) /*Es esto incluyendo el digito que queremos cortar?*/
            strs[indice] = malloc(sizeof(char) * (i-h+1));
            if (!strs[indice])
				return (0);
            indice++;
            i++;
            h = i;
    }
    if (indice == 0 && s[i] == c)
        return(0);
    if (s[0] != c)
    {
        indice++;
    }
    strs[indice] = (void *)0;
    return(strs);
}

char    ft_cpy(char **strs, char const *s, char c)
{
    int indice;
    int j;
    int h;

    indice = 0;
    j = 0;
    h = 0;
    while (s[h])
    {
        if (s[h] != c)/*Hola000Mundo*/
        {
            strs[indice][j] = s[h];
            j++;
        }
        else if(h > 0 && s[h-1] != c)
        {
            if (h != 0)
            {
                strs[indice][j] = '\0';
                j = 0;
                indice++;
            }   
        }
        if (s[h+1] == '\0' && s[h] != c)
        {
            strs[indice][j] ='\0';
        }
        h++;
    }
}

char			**ft_split(char const *s, char c)
{
	char	**strs;

	if (!s || !*s)
	{
		if (!(strs = malloc(sizeof(char *) * 1)))
			return (NULL);
		*strs = (void *)0;
		return (strs);
	}
    if (!strs)
		return (0);
    if(Alocador(strs, s, c) != 0)
    {
        ft_cpy(strs, s, c);
    }
    else
	{
		free(strs);
		return (NULL);
	}
    return(strs);
}