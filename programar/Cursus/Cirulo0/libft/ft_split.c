/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <abastard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 11:18:18 by abastard          #+#    #+#             */
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
}

char	**ft_split(char const *s, char c)
{
	char			**res;
	__SIZE_TYPE__	n;

	if (!s || !*s)
		return ((char **)ft_calloc(sizeof(char *), 1));
	n = string_count(s, c);
	res = ft_calloc(sizeof(char *), (n + 1));
	if (!res)
		return (0);
	return (assemble(res, s, c, n));
}
