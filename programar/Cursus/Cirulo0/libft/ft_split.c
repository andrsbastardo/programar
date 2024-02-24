/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <abastard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 11:18:18 by abastard          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2024/02/24 12:53:04 by abastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft.h"

static char	**free_all(char **res, __SIZE_TYPE__ i)
{
	while (--i)
		free(res[i]);
	free(res);
	return (0);
}

static __SIZE_TYPE__	string_count(char const *s, char c)
{
	__SIZE_TYPE__	n;
	__SIZE_TYPE__	flag;

	n = 0;
	flag = 0;
	while (*s)
	{
		if (*s == c)
			flag = 0;
		else if (flag == 0)
		{
			n++;
			flag = 1;
		}
		s++;
	}
	return (n);
}

static char	**assemble(char **res, char const *s, char c, __SIZE_TYPE__ n)
{
	__SIZE_TYPE__	i;
	__SIZE_TYPE__	j;

	i = 0;
	while (i < n && *s)
	{
		j = 0;
		while (*s == c)
			s++;
		while (s[j] != c && s[j])
			j++;
		res[i] = (char *)ft_calloc(sizeof(char), (j + 1));
		ft_strlcpy(res[i], s, j + 1);
		if (!res[i])
			return (free_all(res, i));
		i++;
		s += j;
	}
	res[i] = 0;
	return (res);
=======
/*   Updated: 2024/02/13 17:19:25 by abastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>  
/*Retocar*/
char	**alocador(char **strs, char const *s, char c)
{
	int	i;
	int	indice;
	int	h;

	i = 0;
	h = 0;
	indice = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
			i++;
		if (s[i] == c)
		{
			i++;
			h++;
		}
		if (i > 0 && s[i+1] == c)
			strs[indice] = malloc(sizeof(char)*(i-h+1));
		{
			if (!strs[indice])
				return (0);
			indice++;
			i++;
			h = i;
		}
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

char	basicopy(char c, char const *s, char **strs,int a, int b, int h)
{
	if (s[h] != c)
	{
		strs[a][b] = s[h];
		b++;
	}
}

char	ft_cpy(char **strs, char const *s, char c)
{
	int	indice;
	int	j;
	int	h;

	indice = 0;
	j = 0;
	h = 0;
	while (s[h])
	{
		basicopy(c, s, strs, indice, j, h);
		if (h > 0 && s[h - 1] != c)
		{
			if (h != 0)
			{
				strs[indice][j] = '\0';
				j = 0;
				indice++;
			}
		}
		if (s[h + 1] == '\0' && s[h] != c)
			strs[indice][j] = '\0';
		h++;
	}
>>>>>>> 85374f7029757a82142e57fdbaea6db38e307242
}

char	**ft_split(char const *s, char c)
{
<<<<<<< HEAD
	char			**res;
	__SIZE_TYPE__	n;

	if (!s || !*s)
		return ((char **)ft_calloc(sizeof(char *), 1));
	n = string_count(s, c);
	res = ft_calloc(sizeof(char *), (n + 1));
	if (!res)
		return (0);
	return (assemble(res, s, c, n));
=======
	char	**strs;

	strs = malloc(sizeof(char *) * 0);
	if (!s || !*s)
	{
		if (!strs)
			return (NULL);
		*strs = (void *)0;
		return (strs);
	}
	if (!strs)
		return (0);
	if (alocador(strs, s, c) != 0)
	{
		ft_cpy (strs, s, c);
	}
	else
	{
		free(strs);
		return (NULL);
	}
	return (strs);
>>>>>>> 85374f7029757a82142e57fdbaea6db38e307242
}
