/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <abastard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 11:18:18 by abastard          #+#    #+#             */
/*   Updated: 2024/03/02 18:23:39 by abastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft.h"

static char	**free_all(char **res, size_t i)
{
	while (--i)
		free(res[i]);
	return (0);
}

static size_t	string_count(char const *s, char c)
{
	size_t	i;
	size_t	flags;

	i = 0;
	flags = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			flags++;
		i++;
	}
	return (flags);
}

static char	**assemble(char **res, char const *s, char c, size_t n)
{
/* 	size_t	i;
	size_t	j;

	i = 0;
	while (i < n && *s)
	{
		j = 0;
		while (*s == c)
			s++;
		while (s[j] != c && s[j])
			j++;
		res[i] = (char *)malloc(sizeof(char), (j + 1));
		ft_strlcpy(res[i], s, j + 1);
		if (!res[i])
			return (free_all(res, i));
		i++;
		s += j;
	}
	res[i] = 0;
	return (res); */

	while ()
	{
		/* code */
	}
	return (**str)
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	n;

	if (!s || !*s)
		return (NULL);
	n = string_count(s, c);
	res = ft_calloc(sizeof(char *), (n + 1));
	if (!res)
		return (NULL);
	return (assemble(res, s, c, n));
}

/* int main(void)
{
    const char *s = "---francinette-no-es---de--fiar-";
    char **aux = ft_split(s, '-');
    
    if (aux)
    {
        int i = 0;
        while (aux[i] != NULL)
        {
            printf("%s\n", aux[i]);
            i++;
        }
    }
    else
    {
        printf("Error al dividir la cadena.\n");
    }

    return 0;
} */



char *frase = "holaquehace              hola, que tal?       !    Adios   "
char c = 32;
